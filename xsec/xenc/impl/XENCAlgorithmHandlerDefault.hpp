/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * XSEC
 *
 * XSECAlgorithmHandlerDefault := Interface class to define handling of
 *								  default encryption algorithms
 *
 * $Id$
 *
 */

#ifndef XENCALGHANDLERDEFAULT_INCLUDE
#define XENCALGHANDLERDEFAULT_INCLUDE

// XSEC Includes

#include <xsec/framework/XSECDefs.hpp>
#include <xsec/framework/XSECAlgorithmHandler.hpp>

class TXFMChain;
class XENCEncryptionMethod;
class XSECCryptoKey;

// Xerces

class XENCAlgorithmHandlerDefault : public XSECAlgorithmHandler {

public:
	
	
	virtual ~XENCAlgorithmHandlerDefault() {};

	virtual unsigned int decryptToSafeBuffer(
		TXFMChain * cipherText,
		XENCEncryptionMethod * encryptionMethod,
		const XSECCryptoKey * key,
		XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument * doc,
		safeBuffer & result
	) const;

	virtual bool appendDecryptCipherTXFM(
		TXFMChain * cipherText,
		XENCEncryptionMethod * encryptionMethod,
		const XSECCryptoKey * key,
		XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument * doc
	) const;

	virtual bool encryptToSafeBuffer(
		TXFMChain * plainText,
		XENCEncryptionMethod * encryptionMethod,
		const XSECCryptoKey * key,
		XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument * doc,
		safeBuffer & result
	) const;

	virtual XSECCryptoKey * createKeyForURI(
		const XMLCh * uri,
		const unsigned char * keyBuffer,
		unsigned int keyLen
	) const;

	virtual XSECAlgorithmHandler * clone(void) const;

	// Unsupported Signature ops

	virtual unsigned int signToSafeBuffer(
		TXFMChain * inputBytes,
		const XMLCh * URI,
		const XSECCryptoKey * key,
		unsigned int outputLength,
		safeBuffer & result
	) const;

	virtual bool appendSignatureHashTxfm(
		TXFMChain * inputBytes,
		const XMLCh * URI,
		const XSECCryptoKey * key
	) const;

	virtual bool verifyBase64Signature(
		TXFMChain * inputBytes,
		const XMLCh * URI,
		const char * sig,
		unsigned int outputLength,
		const XSECCryptoKey * key
	) const;

	virtual bool appendHashTxfm(
		TXFMChain * inputBytes,
		const XMLCh * URI
	) const;


	
private:

	void mapURIToKey(const XMLCh * uri, 
		const XSECCryptoKey * key,
		XSECCryptoKey::KeyType &kt,
		XSECCryptoSymmetricKey::SymmetricKeyType &skt,
		bool &isSymmetricKeyWrap,
        XSECCryptoSymmetricKey::SymmetricKeyMode &skm,
        unsigned int& taglen) const;

	unsigned int doRSADecryptToSafeBuffer(
		TXFMChain * cipherText,
		XENCEncryptionMethod * encryptionMethod,
		const XSECCryptoKey * key,
		XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument * doc,
		safeBuffer & result) const;

	bool doRSAEncryptToSafeBuffer(
		TXFMChain * plainText,
		XENCEncryptionMethod * encryptionMethod,
		const XSECCryptoKey * key,
		XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument * doc,
		safeBuffer & result) const;

	unsigned int doGCMDecryptToSafeBuffer(
		TXFMChain * cipherText,
		const XSECCryptoKey * key,
        unsigned int taglen,
		safeBuffer & result) const;

	unsigned int unwrapKeyAES(
   		TXFMChain * cipherText,
		const XSECCryptoKey * key,
		safeBuffer & result) const;

	unsigned int unwrapKey3DES(
   		TXFMChain * cipherText,
		const XSECCryptoKey * key,
		safeBuffer & result) const;

	bool wrapKeyAES(
   		TXFMChain * cipherText,
		const XSECCryptoKey * key,
		safeBuffer & result) const;

	bool wrapKey3DES(
   		TXFMChain * cipherText,
		const XSECCryptoKey * key,
		safeBuffer & result) const;
};

/*\@}*/

#endif /* XENCALGHANDLERDEFAULT_INCLUDE */

