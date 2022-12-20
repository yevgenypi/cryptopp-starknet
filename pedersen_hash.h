#ifndef CRYPTOPP_PEDERSENHASH_H
#define CRYPTOPP_PEDERSENHASH_H

#include "ecpoint.h"
#include "ecp.h"

NAMESPACE_BEGIN(CryptoPP)

    /// \brief Calculate Pedersen Hash on Starkware curve for two integers
    /// \param x value for hash
	/// \param y value for hash
	/// \details https://docs.starkware.co/starkex/crypto/pedersen-hash-function.html
	///   https://github.com/starkware-libs/starkex-resources/blob/0f08e6c55ad88c93499f71f2af4a2e7ae0185cdf/crypto/starkware/crypto/signature/signature.py
    Integer pedersen_hash(const Integer& x, const Integer& y);

NAMESPACE_END

#endif