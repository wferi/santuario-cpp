/*
 * Copyright 2004 The Apache Software Foundation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * imitations under the License.
 */

/*
 * XSEC
 *
 * XKMSRequestAbstractTypeImpl := Implementation class for XKMS Request messages
 *
 * $Id$
 *
 */

// XSEC Includes

#include <xsec/framework/XSECDefs.hpp>
#include <xsec/framework/XSECError.hpp>
#include <xsec/framework/XSECEnv.hpp>
#include <xsec/xkms/XKMSConstants.hpp>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/DOMNodeList.hpp>

#include "XKMSRequestAbstractTypeImpl.hpp"
#include "XKMSRespondWithImpl.hpp"

XERCES_CPP_NAMESPACE_USE

// --------------------------------------------------------------------------------
//           Construct/Destruct
// --------------------------------------------------------------------------------

XKMSRequestAbstractTypeImpl::XKMSRequestAbstractTypeImpl(
	const XSECEnv * env) :
XKMSMessageAbstractTypeImpl(env)
{
	mp_originalRequestIdAttr = NULL;
}

XKMSRequestAbstractTypeImpl::XKMSRequestAbstractTypeImpl(
	const XSECEnv * env, 
	DOMElement * node) :
XKMSMessageAbstractTypeImpl(env, node)
{
	mp_originalRequestIdAttr = NULL;
}

XKMSRequestAbstractTypeImpl::~XKMSRequestAbstractTypeImpl() {

	RespondWithVectorType::iterator i;

	for (i = m_respondWithList.begin(); i < m_respondWithList.end(); ++i) {
		delete (*i);
	}

};

// --------------------------------------------------------------------------------
//           Load
// --------------------------------------------------------------------------------

void XKMSRequestAbstractTypeImpl::load(void) {

	if (mp_messageAbstractTypeElement == NULL) {

		// Attempt to load an empty element
		throw XSECException(XSECException::RequestAbstractTypeError,
			"XKMSRequestAbstractType::load - called on empty DOM");

	}

	// Get any respond with elements
	DOMNodeList * nl = mp_messageAbstractTypeElement->getElementsByTagNameNS(
		XKMSConstants::s_unicodeStrURIXKMS,
		XKMSConstants::s_tagRespondWith);

	if (nl != NULL) {

		XKMSRespondWithImpl * rw;
		for (int i = 0; i < nl->getLength() ; ++ i) {

			XSECnew(rw, XKMSRespondWithImpl(mp_env, (DOMElement *) nl->item(i)));
			rw->load();
			m_respondWithList.push_back(rw);

		}

	}

	mp_originalRequestIdAttr = 
		mp_messageAbstractTypeElement->getAttributeNodeNS(NULL, XKMSConstants::s_tagOriginalRequestId);

	XKMSMessageAbstractTypeImpl::load();

}

// --------------------------------------------------------------------------------
//           Create from scratch
// --------------------------------------------------------------------------------

DOMElement * XKMSRequestAbstractTypeImpl::createBlankRequestAbstractType(
		const XMLCh * tag,
		const XMLCh * service,
		const XMLCh * id) {

	return XKMSMessageAbstractTypeImpl::createBlankMessageAbstractType(tag, service, id);

}

// --------------------------------------------------------------------------------
//           Get interface methods
// --------------------------------------------------------------------------------

const XMLCh * XKMSRequestAbstractTypeImpl::getOriginalRequestId(void) const {

	if (mp_originalRequestIdAttr != NULL)
		return mp_originalRequestIdAttr->getNodeValue();

	return NULL;
}

void XKMSRequestAbstractTypeImpl::setOriginalRequestId(const XMLCh * id) {
	
	if (mp_messageAbstractTypeElement == NULL) {

		// Attempt update when not initialised
		throw XSECException(XSECException::MessageAbstractTypeError,
			"XKMSRequestAbstractType::setOriginalRequestId - called on non-initialised structure");

	}

	mp_messageAbstractTypeElement->setAttributeNS(NULL, XKMSConstants::s_tagOriginalRequestId, id);
	mp_originalRequestIdAttr = 
		mp_messageAbstractTypeElement->getAttributeNodeNS(NULL, XKMSConstants::s_tagOriginalRequestId);

}

// --------------------------------------------------------------------------------
//           RespondWith handling
// --------------------------------------------------------------------------------

int XKMSRequestAbstractTypeImpl::getRespondWithSize(void) {

	return m_respondWithList.size();

}

XKMSRespondWith * XKMSRequestAbstractTypeImpl::getRespondWithItem(int item) {

	if (item < 0 || item >= m_respondWithList.size()) {

		throw XSECException(XSECException::RequestAbstractTypeError,
			"XKMSRequestAbstractTypeImpl::getRespondWithItem - item out of range");

	}

	return m_respondWithList[item];

}

const XMLCh * XKMSRequestAbstractTypeImpl::getRespondWithItemStr(int item) {

	if (item < 0 || item >= m_respondWithList.size()) {

		throw XSECException(XSECException::RequestAbstractTypeError,
			"XKMSRequestAbstractTypeImpl::getRespondWithItem - item out of range");

	}

	return m_respondWithList[item]->getRespondWithString();

}

void XKMSRequestAbstractTypeImpl::appendRespondWithItem(XKMSRespondWith * item) {

}

void XKMSRequestAbstractTypeImpl::appendRespondWithItem(const XMLCh * item) {

	XKMSRespondWithImpl * rw;
	XSECnew(rw, XKMSRespondWithImpl(mp_env));

	// Create the RespondWith object
	DOMElement * elt = rw->createBlankRespondWith(item);

	// Add to the item
	DOMElement * c = findFirstElementChild(mp_messageAbstractTypeElement);
	while (c != NULL) {

		if (!strEquals(getXKMSLocalName(c), XKMSConstants::s_tagResponseMechanism))
			break;

	}

	if (c != NULL) {
		mp_messageAbstractTypeElement->insertBefore(elt, c);
		if (mp_env->getPrettyPrintFlag()) {
			mp_messageAbstractTypeElement->insertBefore(
				mp_env->getParentDocument()->createTextNode(DSIGConstants::s_unicodeStrNL), c);
		}
	}
	else {
		mp_messageAbstractTypeElement->appendChild(elt);
		mp_env->doPrettyPrint(mp_messageAbstractTypeElement);
	}

	// Add to the list
	m_respondWithList.push_back(rw);

}

