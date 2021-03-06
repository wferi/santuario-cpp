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
 * DSIGConstants := Definitions of varius DSIG constants (mainly strings)
 *
 * Author(s): Berin Lautenbach
 *
 * $Id$
 *
 */

#include <xsec/dsig/DSIGConstants.hpp>

#include "../utils/XSECDOMUtils.hpp"

#include <xercesc/util/XMLUniDefs.hpp>

XERCES_CPP_NAMESPACE_USE

// We need a special version of XSEC_RELEASE_XMLCH

#undef XSEC_RELEASE_XMLCH

#define XSEC_RELEASE_XMLCH(x) XMLString::release((XMLCh **) &x)

// --------------------------------------------------------------------------------
//           Constant Strings Storage
// --------------------------------------------------------------------------------

const XMLCh * DSIGConstants::s_unicodeStrEmpty;		// ""
const XMLCh * DSIGConstants::s_unicodeStrNL;		// "\n"
const XMLCh * DSIGConstants::s_unicodeStrXmlns;		// "xmlns"
const XMLCh * DSIGConstants::s_unicodeStrURI;

const XMLCh * DSIGConstants::s_unicodeStrAlgorithm;

const XMLCh * DSIGConstants::s_unicodeStrURIDSIG;
const XMLCh * DSIGConstants::s_unicodeStrURIDSIG11;
const XMLCh * DSIGConstants::s_unicodeStrURIEC;
const XMLCh * DSIGConstants::s_unicodeStrURIXPF;
const XMLCh * DSIGConstants::s_unicodeStrURIXENC;
const XMLCh * DSIGConstants::s_unicodeStrURIXENC11;

const XMLCh * DSIGConstants::s_unicodeStrURISIGBASE;
const XMLCh * DSIGConstants::s_unicodeStrURISIGBASEMORE;
const XMLCh * DSIGConstants::s_unicodeStrURISIGBASE11;

const XMLCh * DSIGConstants::s_unicodeStrURIRawX509;
const XMLCh * DSIGConstants::s_unicodeStrURISHA1;
const XMLCh * DSIGConstants::s_unicodeStrURISHA224;
const XMLCh * DSIGConstants::s_unicodeStrURISHA256;
const XMLCh * DSIGConstants::s_unicodeStrURISHA384;
const XMLCh * DSIGConstants::s_unicodeStrURISHA512;
const XMLCh * DSIGConstants::s_unicodeStrURIMD5;		// Not recommended
const XMLCh * DSIGConstants::s_unicodeStrURIBASE64;
const XMLCh * DSIGConstants::s_unicodeStrURIXPATH;
const XMLCh * DSIGConstants::s_unicodeStrURIXSLT;
const XMLCh * DSIGConstants::s_unicodeStrURIENVELOPE;
const XMLCh * DSIGConstants::s_unicodeStrURIC14N_NOC;
const XMLCh * DSIGConstants::s_unicodeStrURIC14N_COM;
const XMLCh * DSIGConstants::s_unicodeStrURIC14N11_NOC;
const XMLCh * DSIGConstants::s_unicodeStrURIC14N11_COM;
const XMLCh * DSIGConstants::s_unicodeStrURIEXC_C14N_NOC;
const XMLCh * DSIGConstants::s_unicodeStrURIEXC_C14N_COM;

const XMLCh * DSIGConstants::s_unicodeStrURIDSA_SHA1;
const XMLCh * DSIGConstants::s_unicodeStrURIDSA_SHA256;

const XMLCh * DSIGConstants::s_unicodeStrURIRSA_MD5;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_SHA1;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_SHA224;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_SHA256;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_SHA384;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_SHA512;

const XMLCh * DSIGConstants::s_unicodeStrURIECDSA_SHA1;
const XMLCh * DSIGConstants::s_unicodeStrURIECDSA_SHA224;
const XMLCh * DSIGConstants::s_unicodeStrURIECDSA_SHA256;
const XMLCh * DSIGConstants::s_unicodeStrURIECDSA_SHA384;
const XMLCh * DSIGConstants::s_unicodeStrURIECDSA_SHA512;

const XMLCh * DSIGConstants::s_unicodeStrURIHMAC_SHA1;
const XMLCh * DSIGConstants::s_unicodeStrURIHMAC_SHA224;
const XMLCh * DSIGConstants::s_unicodeStrURIHMAC_SHA256;
const XMLCh * DSIGConstants::s_unicodeStrURIHMAC_SHA384;
const XMLCh * DSIGConstants::s_unicodeStrURIHMAC_SHA512;

const XMLCh * DSIGConstants::s_unicodeStrURIXMLNS;
const XMLCh * DSIGConstants::s_unicodeStrURIMANIFEST;

const XMLCh * DSIGConstants::s_unicodeStrURI3DES_CBC;
const XMLCh * DSIGConstants::s_unicodeStrURIAES128_CBC;
const XMLCh * DSIGConstants::s_unicodeStrURIAES192_CBC;
const XMLCh * DSIGConstants::s_unicodeStrURIAES256_CBC;
const XMLCh * DSIGConstants::s_unicodeStrURIAES128_GCM;
const XMLCh * DSIGConstants::s_unicodeStrURIAES192_GCM;
const XMLCh * DSIGConstants::s_unicodeStrURIAES256_GCM;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_3DES;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_AES128;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_AES192;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_AES256;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_AES128_PAD;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_AES192_PAD;
const XMLCh * DSIGConstants::s_unicodeStrURIKW_AES256_PAD;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_1_5;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_OAEP_MGFP1;
const XMLCh * DSIGConstants::s_unicodeStrURIRSA_OAEP;

const XMLCh * DSIGConstants::s_unicodeStrURIMGF1_BASE;
const XMLCh * DSIGConstants::s_unicodeStrURIMGF1_SHA1;
const XMLCh * DSIGConstants::s_unicodeStrURIMGF1_SHA224;
const XMLCh * DSIGConstants::s_unicodeStrURIMGF1_SHA256;
const XMLCh * DSIGConstants::s_unicodeStrURIMGF1_SHA384;
const XMLCh * DSIGConstants::s_unicodeStrURIMGF1_SHA512;

const XMLCh * DSIGConstants::s_unicodeStrURIXENC_ELEMENT;
const XMLCh * DSIGConstants::s_unicodeStrURIXENC_CONTENT;

const XMLCh * DSIGConstants::s_unicodeStrPROVOpenSSL;
const XMLCh * DSIGConstants::s_unicodeStrPROVWinCAPI;
const XMLCh * DSIGConstants::s_unicodeStrPROVNSS;

// --------------------------------------------------------------------------------
//           Constant Strings Creation and Deletion
// --------------------------------------------------------------------------------

void DSIGConstants::create() {

	// Set up the static strings

	s_unicodeStrEmpty = XMLString::transcode("");
	s_unicodeStrNL = XMLString::transcode("\n");
	s_unicodeStrXmlns = XMLString::transcode("xmlns");
	s_unicodeStrURI = XMLString::transcode("URI");

	s_unicodeStrAlgorithm = XMLString::transcode("Algorithm");

	s_unicodeStrURIRawX509 = XMLString::transcode(URI_ID_RAWX509);
	s_unicodeStrURIDSIG = XMLString::transcode(URI_ID_DSIG);
	s_unicodeStrURIDSIG11 = XMLString::transcode(URI_ID_DSIG11);
	s_unicodeStrURIEC = XMLString::transcode(URI_ID_EC);
	s_unicodeStrURIXPF = XMLString::transcode(URI_ID_XPF);
	s_unicodeStrURIXENC = XMLString::transcode(URI_ID_XENC);
	s_unicodeStrURIXENC11 = XMLString::transcode(URI_ID_XENC11);

	s_unicodeStrURISIGBASE = XMLString::transcode(URI_ID_SIG_BASE);
	s_unicodeStrURISIGBASEMORE = XMLString::transcode(URI_ID_SIG_BASEMORE);
	s_unicodeStrURISIGBASE11 = XMLString::transcode(URI_ID_SIG_BASE11);

	s_unicodeStrURISHA1 = XMLString::transcode(URI_ID_SHA1);
	s_unicodeStrURISHA224 = XMLString::transcode(URI_ID_SHA224);
	s_unicodeStrURISHA256 = XMLString::transcode(URI_ID_SHA256);
	s_unicodeStrURISHA384 = XMLString::transcode(URI_ID_SHA384);
	s_unicodeStrURISHA512 = XMLString::transcode(URI_ID_SHA512);
	s_unicodeStrURIMD5 = XMLString::transcode(URI_ID_MD5);
	s_unicodeStrURIBASE64 = XMLString::transcode(URI_ID_BASE64);
	s_unicodeStrURIXPATH = XMLString::transcode(URI_ID_XPATH);
	s_unicodeStrURIXSLT = XMLString::transcode(URI_ID_XSLT);
	s_unicodeStrURIENVELOPE = XMLString::transcode(URI_ID_ENVELOPE);
	s_unicodeStrURIC14N_NOC = XMLString::transcode(URI_ID_C14N_NOC);
	s_unicodeStrURIC14N_COM = XMLString::transcode(URI_ID_C14N_COM);
	s_unicodeStrURIC14N11_NOC = XMLString::transcode(URI_ID_C14N11_NOC);
	s_unicodeStrURIC14N11_COM = XMLString::transcode(URI_ID_C14N11_COM);
	s_unicodeStrURIEXC_C14N_NOC = XMLString::transcode(URI_ID_EXC_C14N_NOC);
	s_unicodeStrURIEXC_C14N_COM = XMLString::transcode(URI_ID_EXC_C14N_COM);

	s_unicodeStrURIDSA_SHA1 = XMLString::transcode(URI_ID_DSA_SHA1);
	s_unicodeStrURIDSA_SHA256 = XMLString::transcode(URI_ID_DSA_SHA256);

	s_unicodeStrURIRSA_MD5 = XMLString::transcode(URI_ID_RSA_MD5);
	s_unicodeStrURIRSA_SHA1 = XMLString::transcode(URI_ID_RSA_SHA1);
	s_unicodeStrURIRSA_SHA224 = XMLString::transcode(URI_ID_RSA_SHA224);
	s_unicodeStrURIRSA_SHA256 = XMLString::transcode(URI_ID_RSA_SHA256);
	s_unicodeStrURIRSA_SHA384 = XMLString::transcode(URI_ID_RSA_SHA384);
	s_unicodeStrURIRSA_SHA512 = XMLString::transcode(URI_ID_RSA_SHA512);

	s_unicodeStrURIECDSA_SHA1 = XMLString::transcode(URI_ID_ECDSA_SHA1);
	s_unicodeStrURIECDSA_SHA224 = XMLString::transcode(URI_ID_ECDSA_SHA224);
	s_unicodeStrURIECDSA_SHA256 = XMLString::transcode(URI_ID_ECDSA_SHA256);
	s_unicodeStrURIECDSA_SHA384 = XMLString::transcode(URI_ID_ECDSA_SHA384);
	s_unicodeStrURIECDSA_SHA512 = XMLString::transcode(URI_ID_ECDSA_SHA512);

	s_unicodeStrURIHMAC_SHA1 = XMLString::transcode(URI_ID_HMAC_SHA1);
	s_unicodeStrURIHMAC_SHA224 = XMLString::transcode(URI_ID_HMAC_SHA224);
	s_unicodeStrURIHMAC_SHA256 = XMLString::transcode(URI_ID_HMAC_SHA256);
	s_unicodeStrURIHMAC_SHA384 = XMLString::transcode(URI_ID_HMAC_SHA384);
	s_unicodeStrURIHMAC_SHA512 = XMLString::transcode(URI_ID_HMAC_SHA512);

	s_unicodeStrURIXMLNS = XMLString::transcode(URI_ID_XMLNS);
	s_unicodeStrURIMANIFEST = XMLString::transcode(URI_ID_MANIFEST);

	s_unicodeStrURI3DES_CBC	= XMLString::transcode(URI_ID_3DES_CBC);
	s_unicodeStrURIAES128_CBC	= XMLString::transcode(URI_ID_AES128_CBC);
	s_unicodeStrURIAES192_CBC	= XMLString::transcode(URI_ID_AES192_CBC);
	s_unicodeStrURIAES256_CBC	= XMLString::transcode(URI_ID_AES256_CBC);
	s_unicodeStrURIAES128_GCM	= XMLString::transcode(URI_ID_AES128_GCM);
	s_unicodeStrURIAES192_GCM	= XMLString::transcode(URI_ID_AES192_GCM);
	s_unicodeStrURIAES256_GCM	= XMLString::transcode(URI_ID_AES256_GCM);
	s_unicodeStrURIKW_3DES = XMLString::transcode(URI_ID_KW_3DES);
	s_unicodeStrURIKW_AES128 = XMLString::transcode(URI_ID_KW_AES128);
	s_unicodeStrURIKW_AES192 = XMLString::transcode(URI_ID_KW_AES192);
	s_unicodeStrURIKW_AES256 = XMLString::transcode(URI_ID_KW_AES256);
	s_unicodeStrURIKW_AES128_PAD = XMLString::transcode(URI_ID_KW_AES128_PAD);
	s_unicodeStrURIKW_AES192_PAD = XMLString::transcode(URI_ID_KW_AES192_PAD);
	s_unicodeStrURIKW_AES256_PAD = XMLString::transcode(URI_ID_KW_AES256_PAD);
	s_unicodeStrURIRSA_1_5 = XMLString::transcode(URI_ID_RSA_1_5);
	s_unicodeStrURIRSA_OAEP_MGFP1 = XMLString::transcode(URI_ID_RSA_OAEP_MGFP1);
	s_unicodeStrURIRSA_OAEP = XMLString::transcode(URI_ID_RSA_OAEP);

	s_unicodeStrURIMGF1_BASE = XMLString::transcode(URI_ID_MGF1_BASE);
	s_unicodeStrURIMGF1_SHA1 = XMLString::transcode(URI_ID_MGF1_SHA1);
	s_unicodeStrURIMGF1_SHA224 = XMLString::transcode(URI_ID_MGF1_SHA224);
	s_unicodeStrURIMGF1_SHA256 = XMLString::transcode(URI_ID_MGF1_SHA256);
	s_unicodeStrURIMGF1_SHA384 = XMLString::transcode(URI_ID_MGF1_SHA384);
	s_unicodeStrURIMGF1_SHA512 = XMLString::transcode(URI_ID_MGF1_SHA512);

	s_unicodeStrURIXENC_ELEMENT = XMLString::transcode(URI_ID_XENC_ELEMENT);
	s_unicodeStrURIXENC_CONTENT = XMLString::transcode(URI_ID_XENC_CONTENT);

	s_unicodeStrPROVOpenSSL = XMLString::transcode(PROV_OPENSSL);
	s_unicodeStrPROVWinCAPI = XMLString::transcode(PROV_WINCAPI);
	s_unicodeStrPROVNSS = XMLString::transcode(PROV_NSS);

}

void DSIGConstants::destroy() {

	// Delete the static strings
	XSEC_RELEASE_XMLCH(s_unicodeStrEmpty);
	XSEC_RELEASE_XMLCH(s_unicodeStrNL);
	XSEC_RELEASE_XMLCH(s_unicodeStrXmlns);
	XSEC_RELEASE_XMLCH(s_unicodeStrURI);

	XSEC_RELEASE_XMLCH(s_unicodeStrAlgorithm);

	XSEC_RELEASE_XMLCH(s_unicodeStrURIRawX509);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIDSIG);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIDSIG11);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIEC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXPF);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXENC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXENC11);

	XSEC_RELEASE_XMLCH(s_unicodeStrURISIGBASE);
	XSEC_RELEASE_XMLCH(s_unicodeStrURISIGBASEMORE);
	XSEC_RELEASE_XMLCH(s_unicodeStrURISIGBASE11);

	XSEC_RELEASE_XMLCH(s_unicodeStrURISHA1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURISHA224);
	XSEC_RELEASE_XMLCH(s_unicodeStrURISHA256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURISHA384);
	XSEC_RELEASE_XMLCH(s_unicodeStrURISHA512);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMD5);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIBASE64);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXPATH);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXSLT);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIENVELOPE);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIC14N_NOC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIC14N_COM);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIC14N11_NOC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIC14N11_COM);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIEXC_C14N_NOC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIEXC_C14N_COM);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIDSA_SHA1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIDSA_SHA256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_MD5);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_SHA1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_SHA224);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_SHA256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_SHA384);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_SHA512);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIECDSA_SHA1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIECDSA_SHA224);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIECDSA_SHA256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIECDSA_SHA384);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIECDSA_SHA512);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIHMAC_SHA1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIHMAC_SHA224);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIHMAC_SHA256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIHMAC_SHA384);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIHMAC_SHA512);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXMLNS);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMANIFEST);

	XSEC_RELEASE_XMLCH(s_unicodeStrURI3DES_CBC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIAES128_CBC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIAES192_CBC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIAES256_CBC);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIAES128_GCM);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIAES192_GCM);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIAES256_GCM);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_3DES);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_AES128);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_AES192);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_AES256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_AES128_PAD);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_AES192_PAD);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIKW_AES256_PAD);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_1_5);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_OAEP_MGFP1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIRSA_OAEP);

	XSEC_RELEASE_XMLCH(s_unicodeStrURIMGF1_BASE);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMGF1_SHA1);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMGF1_SHA224);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMGF1_SHA256);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMGF1_SHA384);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIMGF1_SHA512);

	XSEC_RELEASE_XMLCH(s_unicodeStrURIXENC_ELEMENT);
	XSEC_RELEASE_XMLCH(s_unicodeStrURIXENC_CONTENT);

	XSEC_RELEASE_XMLCH(s_unicodeStrPROVOpenSSL);
	XSEC_RELEASE_XMLCH(s_unicodeStrPROVWinCAPI);
	XSEC_RELEASE_XMLCH(s_unicodeStrPROVNSS);

}
