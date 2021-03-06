/* Copyright 2015 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#define        TPM_FAIL_C
#include "Global.h"
#include "CryptoEngine.h"

CRYPT_RESULT _cpri__C_2_2_KeyExchange(
  TPMS_ECC_POINT * outZ1,       //   OUT: a computed point
  TPMS_ECC_POINT * outZ2,       //   OUT: and optional second point
  TPM_ECC_CURVE curveId,        //   IN: the curve for the computations
  TPM_ALG_ID scheme,            //   IN: the key exchange scheme
  TPM2B_ECC_PARAMETER * dsA,    //   IN: static private TPM key
  TPM2B_ECC_PARAMETER * deA,    //   IN: ephemeral private TPM key
  TPMS_ECC_POINT * QsB,         //   IN: static public party B key
  TPMS_ECC_POINT * QeB          //   IN: ephemeral public party B key
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__DrbgGetPutState(
  GET_PUT direction,
  int bufferSize,
  BYTE * buffer)
{
  /* This unction is not implemented in the TPM2 library either. */
  return CRYPT_SUCCESS;
}

CRYPT_RESULT _cpri__EccCommitCompute(
  TPMS_ECC_POINT * K,           //   OUT: [d]B or [r]Q
  TPMS_ECC_POINT * L,           //   OUT: [r]B
  TPMS_ECC_POINT * E,           //   OUT: [r]M
  TPM_ECC_CURVE curveId,        //   IN: the curve for the computations
  TPMS_ECC_POINT * M,           //   IN: M (optional)
  TPMS_ECC_POINT * B,           //   IN: B (optional)
  TPM2B_ECC_PARAMETER * d,      //   IN: d (required)
  TPM2B_ECC_PARAMETER * r       //   IN: the computed r value (required)
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

UINT32 _cpri__EccGetCurveCount(
  void)
{
  ecprintf("%s called\n", __func__);
  return -1;
}

BOOL _cpri__EccIsPointOnCurve(
  TPM_ECC_CURVE curveId,        // IN: the curve selector
  TPMS_ECC_POINT * Q            // IN: the point.
  )
{
  ecprintf("%s called\n", __func__);
  return 0;
}

CRYPT_RESULT _cpri__EccPointMultiply(
  TPMS_ECC_POINT * Rout,        //   OUT: the product point R
  TPM_ECC_CURVE curveId,        //   IN: the curve to use
  TPM2B_ECC_PARAMETER * dIn,    //   IN: value to multiply against the
  // curve generator
  TPMS_ECC_POINT * Qin,         //   IN: point Q
  TPM2B_ECC_PARAMETER * uIn     //   IN: scalar value for the multiplier of Q
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__GenerateKeyEcc(
  TPMS_ECC_POINT * Qout,        //   OUT: the public point
  TPM2B_ECC_PARAMETER * dOut,   //   OUT: the private scalar
  TPM_ECC_CURVE curveId,        //   IN: the curve identifier
  TPM_ALG_ID hashAlg,           //   IN: hash algorithm to use in the key
  // generation process
  TPM2B * seed,                 //   IN: the seed to use
  const char *label,            //   IN: A label for the generation process.
  TPM2B * extra,                //   IN: Party 1 data for the KDF
  UINT32 * counter              //   IN/OUT: Counter value to allow KDF
  // iteration to be propagated across multiple functions
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__GenerateKeyRSA(
  TPM2B * n,                    //   OUT: The public modulu
  TPM2B * p,                    //   OUT: One of the prime factors of n
  UINT16 keySizeInBits,         //   IN: Size of the public modulus in bit
  UINT32 e,                     //   IN: The public exponent
  TPM_ALG_ID hashAlg,           //   IN: hash algorithm to use in the key generation proce
  TPM2B * seed,                 //   IN: the seed to use
  const char *label,            //   IN: A label for the generation process.
  TPM2B * extra,                //   IN: Party 1 data for the KDF
  UINT32 * counter              //   IN/OUT: Counter value to allow KFD iteration to be
  //   propagated across multiple routine
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__GetEphemeralEcc(
  TPMS_ECC_POINT * Qout,        // OUT: the public point
  TPM2B_ECC_PARAMETER * dOut,   // OUT: the private scalar
  TPM_ECC_CURVE curveId         // IN: the curve for the key
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__SignEcc(
  TPM2B_ECC_PARAMETER * rOut,   //   OUT: r component of the signature
  TPM2B_ECC_PARAMETER * sOut,   //   OUT: s component of the signature
  TPM_ALG_ID scheme,            //   IN: the scheme selector
  TPM_ALG_ID hashAlg,           //   IN: the hash algorithm if need
  TPM_ECC_CURVE curveId,        //   IN: the curve used in the signature process
  TPM2B_ECC_PARAMETER * dIn,    //   IN: the private key
  TPM2B * digest,               //   IN: the digest to sign
  TPM2B_ECC_PARAMETER * kIn     //   IN: k for input
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

BOOL _cpri__Startup(
  void)
{
  /*
   * Below is the list of functions called by the TPM2 library from
   * _cpri__Startup().
   * TODO(vbendeb): verify proper initialization.
   *
   *  _cpri__HashStartup() - not doing anything for now, maybe hw
   *               reinitialization is required?
   * _cpri__RsaStartup() - not sure what needs to be done in HW
   * _cpri__EccStartup() - not sure what needs to be done in HW
   * _cpri__SymStartup() - this function is emtpy in the TPM2 library
   *                implementation.
   */
  return 1;
}

CRYPT_RESULT _cpri__StirRandom(
  INT32 entropySize,
  BYTE * entropy)
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__TestKeyRSA(
  TPM2B * d,                    //   OUT: the address to receive the
  // private exponent
  UINT32 exponent,              //   IN: the public modulu
  TPM2B * publicKey,            //   IN/OUT: an input if only one prime is
  // provided. an output if both primes are provided
  TPM2B * prime1,               //   IN: a first prime
  TPM2B * prime2                //   IN: an optional second prime
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

CRYPT_RESULT _cpri__ValidateSignatureEcc(
  TPM2B_ECC_PARAMETER * rIn,    //   IN: r component of the signature
  TPM2B_ECC_PARAMETER * sIn,    //   IN: s component of the signature
  TPM_ALG_ID scheme,            //   IN: the scheme selector
  TPM_ALG_ID hashAlg,           //   IN: the hash algorithm used (not used
  // in all schemes)
  TPM_ECC_CURVE curveId,        //   IN: the curve used in the
  // signature process
  TPMS_ECC_POINT * Qin,         //   IN: the public point of the key
  TPM2B * digest                //   IN: the digest that was signed
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

int _math__Comp(
  const UINT32 aSize,           //   IN:   size of a
  const BYTE * a,               //   IN:   a buffer
  const UINT32 bSize,           //   IN:   size of b
  const BYTE * b                //   IN:   b buffer
  )
{
  ecprintf("%s called\n", __func__);
  return -1;
}

CRYPT_RESULT _math__Div(
  const TPM2B * n,              //   IN: numerator
  const TPM2B * d,              //   IN: denominator
  TPM2B * q,                    //   OUT: quotient
  TPM2B * r                     //   OUT: remainder
  )
{
  ecprintf("%s called\n", __func__);
  return CRYPT_FAIL;
}

int _math__uComp(
  const UINT32 aSize,           // IN: size of a
  const BYTE * a,               // IN: a
  const UINT32 bSize,           // IN: size of b
  const BYTE * b                // IN: b
  )
{
  ecprintf("%s called\n", __func__);
  return -1;
}

void __assert_func(
  const char *file,
  int line,
  const char *func,
  const char *condition
)
{
  /*
   * TPM2 library invokes assert from a common wrapper, which first sets
   * global variables describing the failure point and then invokes the
   * assert() macro which ends up calling this function as defined by the gcc
   * toolchain.
   *
   * For some weird reason (or maybe this is a bug), s_FailFunction is defined
   * in the tpm2 library as a 32 bit int, but on a failure the name of the
   * failing function (its first four bytes) are copiied into this variable.
   *
   * TODO(vbendeb): investigate and fix TPM2 library assert handling.
   */
  ecprintf("Failure in %s, func %s, line %d:\n%s\n",
           file,
	   s_failFunction ? (const char *)&s_failFunction : func,
	   s_failLine ? s_failLine : line,
	   condition);
  while (1)
    ;                           /* Let the watchdog doo the rest. */
}

CRYPT_RESULT _cpri__InitCryptoUnits(
  FAIL_FUNCTION failFunction)
{
  return CRYPT_SUCCESS;
}
