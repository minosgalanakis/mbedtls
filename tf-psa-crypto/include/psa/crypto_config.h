/**
 * \file psa/crypto_config.h
 * \brief PSA crypto configuration options (set of defines)
 *
 */
#if defined(MBEDTLS_PSA_CRYPTO_CONFIG)
/**
 * When #MBEDTLS_PSA_CRYPTO_CONFIG is enabled in mbedtls_config.h,
 * this file determines which cryptographic mechanisms are enabled
 * through the PSA Cryptography API (\c psa_xxx() functions).
 *
 * To enable a cryptographic mechanism, uncomment the definition of
 * the corresponding \c PSA_WANT_xxx preprocessor symbol.
 * To disable a cryptographic mechanism, comment out the definition of
 * the corresponding \c PSA_WANT_xxx preprocessor symbol.
 * The names of cryptographic mechanisms correspond to values
 * defined in psa/crypto_values.h, with the prefix \c PSA_WANT_ instead
 * of \c PSA_.
 *
 * Note that many cryptographic mechanisms involve two symbols: one for
 * the key type (\c PSA_WANT_KEY_TYPE_xxx) and one for the algorithm
 * (\c PSA_WANT_ALG_xxx). Mechanisms with additional parameters may involve
 * additional symbols.
 */
#else
/**
 * When \c MBEDTLS_PSA_CRYPTO_CONFIG is disabled in mbedtls_config.h,
 * this file is not used, and cryptographic mechanisms are supported
 * through the PSA API if and only if they are supported through the
 * mbedtls_xxx API.
 */
#endif
/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
 */

#ifndef PSA_CRYPTO_CONFIG_H
#define PSA_CRYPTO_CONFIG_H

/*
 * CBC-MAC is not yet supported via the PSA API in Mbed TLS.
 */
//#define PSA_WANT_ALG_CBC_MAC                    1
#define PSA_WANT_ALG_CBC_NO_PADDING             1
#define PSA_WANT_ALG_CBC_PKCS7                  1
#define PSA_WANT_ALG_CCM                        1
#define PSA_WANT_ALG_CCM_STAR_NO_TAG            1
#define PSA_WANT_ALG_CMAC                       1
#define PSA_WANT_ALG_CFB                        1
#define PSA_WANT_ALG_CHACHA20_POLY1305          1
#define PSA_WANT_ALG_CTR                        1
#define PSA_WANT_ALG_DETERMINISTIC_ECDSA        1
#define PSA_WANT_ALG_ECB_NO_PADDING             1
#define PSA_WANT_ALG_ECDH                       1
#define PSA_WANT_ALG_FFDH                       1
#define PSA_WANT_ALG_ECDSA                      1
#define PSA_WANT_ALG_JPAKE                      1
#define PSA_WANT_ALG_GCM                        1
#define PSA_WANT_ALG_HKDF                       1
#define PSA_WANT_ALG_HKDF_EXTRACT               1
#define PSA_WANT_ALG_HKDF_EXPAND                1
#define PSA_WANT_ALG_HMAC                       1
#define PSA_WANT_ALG_MD5                        1
#define PSA_WANT_ALG_OFB                        1
#define PSA_WANT_ALG_PBKDF2_HMAC                1
#define PSA_WANT_ALG_PBKDF2_AES_CMAC_PRF_128    1
#define PSA_WANT_ALG_RIPEMD160                  1
#define PSA_WANT_ALG_RSA_OAEP                   1
#define PSA_WANT_ALG_RSA_PKCS1V15_CRYPT         1
#define PSA_WANT_ALG_RSA_PKCS1V15_SIGN          1
#define PSA_WANT_ALG_RSA_PSS                    1
#define PSA_WANT_ALG_SHA_1                      1
#define PSA_WANT_ALG_SHA_224                    1
#define PSA_WANT_ALG_SHA_256                    1
#define PSA_WANT_ALG_SHA_384                    1
#define PSA_WANT_ALG_SHA_512                    1
#define PSA_WANT_ALG_SHA3_224                   1
#define PSA_WANT_ALG_SHA3_256                   1
#define PSA_WANT_ALG_SHA3_384                   1
#define PSA_WANT_ALG_SHA3_512                   1
#define PSA_WANT_ALG_STREAM_CIPHER              1
#define PSA_WANT_ALG_TLS12_PRF                  1
#define PSA_WANT_ALG_TLS12_PSK_TO_MS            1
#define PSA_WANT_ALG_TLS12_ECJPAKE_TO_PMS       1

/* XTS is not yet supported via the PSA API in Mbed TLS.
 * Note: when adding support, also adjust include/mbedtls/config_psa.h */
//#define PSA_WANT_ALG_XTS                        1

#define PSA_WANT_ECC_BRAINPOOL_P_R1_256         1
#define PSA_WANT_ECC_BRAINPOOL_P_R1_384         1
#define PSA_WANT_ECC_BRAINPOOL_P_R1_512         1
#define PSA_WANT_ECC_MONTGOMERY_255             1
#define PSA_WANT_ECC_MONTGOMERY_448             1
#define PSA_WANT_ECC_SECP_K1_192                1
/*
 * SECP224K1 is buggy via the PSA API in Mbed TLS
 * (https://github.com/Mbed-TLS/mbedtls/issues/3541). Thus, do not enable it by
 * default.
 */
//#define PSA_WANT_ECC_SECP_K1_224                1
#define PSA_WANT_ECC_SECP_K1_256                1
#define PSA_WANT_ECC_SECP_R1_192                1
#define PSA_WANT_ECC_SECP_R1_224                1
/* For secp256r1, consider enabling #MBEDTLS_PSA_P256M_DRIVER_ENABLED
 * (see the description in mbedtls/mbedtls_config.h for details). */
#define PSA_WANT_ECC_SECP_R1_256                1
#define PSA_WANT_ECC_SECP_R1_384                1
#define PSA_WANT_ECC_SECP_R1_521                1

#define PSA_WANT_DH_RFC7919_2048                1
#define PSA_WANT_DH_RFC7919_3072                1
#define PSA_WANT_DH_RFC7919_4096                1
#define PSA_WANT_DH_RFC7919_6144                1
#define PSA_WANT_DH_RFC7919_8192                1

#define PSA_WANT_KEY_TYPE_DERIVE                1
#define PSA_WANT_KEY_TYPE_PASSWORD              1
#define PSA_WANT_KEY_TYPE_PASSWORD_HASH         1
#define PSA_WANT_KEY_TYPE_HMAC                  1
#define PSA_WANT_KEY_TYPE_AES                   1
#define PSA_WANT_KEY_TYPE_ARIA                  1
#define PSA_WANT_KEY_TYPE_CAMELLIA              1
#define PSA_WANT_KEY_TYPE_CHACHA20              1
#define PSA_WANT_KEY_TYPE_DES                   1
//#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR          1 /* Deprecated */
#define PSA_WANT_KEY_TYPE_ECC_PUBLIC_KEY        1
#define PSA_WANT_KEY_TYPE_DH_PUBLIC_KEY         1
#define PSA_WANT_KEY_TYPE_RAW_DATA              1
//#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR          1 /* Deprecated */
#define PSA_WANT_KEY_TYPE_RSA_PUBLIC_KEY        1

/*
 * The following symbols extend and deprecate the legacy
 * PSA_WANT_KEY_TYPE_xxx_KEY_PAIR ones. They include the usage of that key in
 * the name's suffix. "_USE" is the most generic and it can be used to describe
 * a generic suport, whereas other ones add more features on top of that and
 * they are more specific.
 */
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_BASIC      1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_IMPORT   1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_EXPORT   1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_GENERATE 1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_DERIVE   1

#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_BASIC      1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_IMPORT   1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_EXPORT   1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_GENERATE 1
//#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_DERIVE   1 /* Not supported */

#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_BASIC       1
#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_IMPORT    1
#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_EXPORT    1
#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_GENERATE  1
//#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_DERIVE    1 /* Not supported */

/*Moved configuration options bellow this line */

/**
 * \name SECTION: Platform abstraction layer
 *
 * This section sets platform specific settings.
 * \{
 */

/**
 * \def MBEDTLS_FS_IO
 *
 * Enable functions that use the filesystem.
 */
#define MBEDTLS_FS_IO

/**
 * \def MBEDTLS_HAVE_TIME
 *
 * System has time.h and time().
 * The time does not need to be correct, only time differences are used,
 * by contrast with MBEDTLS_HAVE_TIME_DATE
 *
 * Defining MBEDTLS_HAVE_TIME allows you to specify MBEDTLS_PLATFORM_TIME_ALT,
 * MBEDTLS_PLATFORM_TIME_MACRO, MBEDTLS_PLATFORM_TIME_TYPE_MACRO and
 * MBEDTLS_PLATFORM_STD_TIME.
 *
 * Comment if your system does not support time functions.
 *
 * \note If MBEDTLS_TIMING_C is set - to enable the semi-portable timing
 *       interface - timing.c will include time.h on suitable platforms
 *       regardless of the setting of MBEDTLS_HAVE_TIME, unless
 *       MBEDTLS_TIMING_ALT is used. See timing.c for more information.
 */
#define MBEDTLS_HAVE_TIME

/**
 * \def MBEDTLS_HAVE_TIME_DATE
 *
 * System has time.h, time(), and an implementation for
 * mbedtls_platform_gmtime_r() (see below).
 * The time needs to be correct (not necessarily very accurate, but at least
 * the date should be correct). This is used to verify the validity period of
 * X.509 certificates.
 *
 * Comment if your system does not have a correct clock.
 *
 * \note mbedtls_platform_gmtime_r() is an abstraction in platform_util.h that
 * behaves similarly to the gmtime_r() function from the C standard. Refer to
 * the documentation for mbedtls_platform_gmtime_r() for more information.
 *
 * \note It is possible to configure an implementation for
 * mbedtls_platform_gmtime_r() at compile-time by using the macro
 * MBEDTLS_PLATFORM_GMTIME_R_ALT.
 */
#define MBEDTLS_HAVE_TIME_DATE

/**
 * \def MBEDTLS_MEMORY_DEBUG
 *
 * Enable debugging of buffer allocator memory issues. Automatically prints
 * (to stderr) all (fatal) messages on memory allocation issues. Enables
 * function for 'debug output' of allocated memory.
 *
 * Requires: MBEDTLS_MEMORY_BUFFER_ALLOC_C
 *
 * Uncomment this macro to let the buffer allocator print out error messages.
 */
//#define MBEDTLS_MEMORY_DEBUG

/**
 * \def MBEDTLS_MEMORY_BACKTRACE
 *
 * Include backtrace information with each allocated block.
 *
 * Requires: MBEDTLS_MEMORY_BUFFER_ALLOC_C
 *           GLIBC-compatible backtrace() and backtrace_symbols() support
 *
 * Uncomment this macro to include backtrace information
 */
//#define MBEDTLS_MEMORY_BACKTRACE

/**
 * \def MBEDTLS_PLATFORM_C
 *
 * Enable the platform abstraction layer that allows you to re-assign
 * functions like calloc(), free(), snprintf(), printf(), fprintf(), exit().
 *
 * Enabling MBEDTLS_PLATFORM_C enables to use of MBEDTLS_PLATFORM_XXX_ALT
 * or MBEDTLS_PLATFORM_XXX_MACRO directives, allowing the functions mentioned
 * above to be specified at runtime or compile time respectively.
 *
 * \note This abstraction layer must be enabled on Windows (including MSYS2)
 * as other modules rely on it for a fixed snprintf implementation.
 *
 * Module:  library/platform.c
 * Caller:  Most other .c files
 *
 * This module enables abstraction of common (libc) functions.
 */
#define MBEDTLS_PLATFORM_C

/**
 * \def MBEDTLS_PLATFORM_EXIT_ALT
 *
 * MBEDTLS_PLATFORM_XXX_ALT: Uncomment a macro to let Mbed TLS support the
 * function in the platform abstraction layer.
 *
 * Example: In case you uncomment MBEDTLS_PLATFORM_PRINTF_ALT, Mbed TLS will
 * provide a function "mbedtls_platform_set_printf()" that allows you to set an
 * alternative printf function pointer.
 *
 * All these define require MBEDTLS_PLATFORM_C to be defined!
 *
 * \note MBEDTLS_PLATFORM_SNPRINTF_ALT is required on Windows;
 * it will be enabled automatically by check_config.h
 *
 * \warning MBEDTLS_PLATFORM_XXX_ALT cannot be defined at the same time as
 * MBEDTLS_PLATFORM_XXX_MACRO!
 *
 * Requires: MBEDTLS_PLATFORM_TIME_ALT requires MBEDTLS_HAVE_TIME
 *
 * Uncomment a macro to enable alternate implementation of specific base
 * platform function
 */
//#define MBEDTLS_PLATFORM_SETBUF_ALT
//#define MBEDTLS_PLATFORM_EXIT_ALT
//#define MBEDTLS_PLATFORM_TIME_ALT
//#define MBEDTLS_PLATFORM_FPRINTF_ALT
//#define MBEDTLS_PLATFORM_PRINTF_ALT
//#define MBEDTLS_PLATFORM_SNPRINTF_ALT
//#define MBEDTLS_PLATFORM_VSNPRINTF_ALT
//#define MBEDTLS_PLATFORM_NV_SEED_ALT
//#define MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT
//#define MBEDTLS_PLATFORM_MS_TIME_ALT

/**
 * Uncomment the macro to let Mbed TLS use your alternate implementation of
 * mbedtls_platform_gmtime_r(). This replaces the default implementation in
 * platform_util.c.
 *
 * gmtime() is not a thread-safe function as defined in the C standard. The
 * library will try to use safer implementations of this function, such as
 * gmtime_r() when available. However, if Mbed TLS cannot identify the target
 * system, the implementation of mbedtls_platform_gmtime_r() will default to
 * using the standard gmtime(). In this case, calls from the library to
 * gmtime() will be guarded by the global mutex mbedtls_threading_gmtime_mutex
 * if MBEDTLS_THREADING_C is enabled. We recommend that calls from outside the
 * library are also guarded with this mutex to avoid race conditions. However,
 * if the macro MBEDTLS_PLATFORM_GMTIME_R_ALT is defined, Mbed TLS will
 * unconditionally use the implementation for mbedtls_platform_gmtime_r()
 * supplied at compile time.
 */
//#define MBEDTLS_PLATFORM_GMTIME_R_ALT

/**
 * \def MBEDTLS_PLATFORM_MEMORY
 *
 * Enable the memory allocation layer.
 *
 * By default Mbed TLS uses the system-provided calloc() and free().
 * This allows different allocators (self-implemented or provided) to be
 * provided to the platform abstraction layer.
 *
 * Enabling #MBEDTLS_PLATFORM_MEMORY without the
 * MBEDTLS_PLATFORM_{FREE,CALLOC}_MACROs will provide
 * "mbedtls_platform_set_calloc_free()" allowing you to set an alternative calloc() and
 * free() function pointer at runtime.
 *
 * Enabling #MBEDTLS_PLATFORM_MEMORY and specifying
 * MBEDTLS_PLATFORM_{CALLOC,FREE}_MACROs will allow you to specify the
 * alternate function at compile time.
 *
 * An overview of how the value of mbedtls_calloc is determined:
 *
 * - if !MBEDTLS_PLATFORM_MEMORY
 *     - mbedtls_calloc = calloc
 * - if MBEDTLS_PLATFORM_MEMORY
 *     - if (MBEDTLS_PLATFORM_CALLOC_MACRO && MBEDTLS_PLATFORM_FREE_MACRO):
 *         - mbedtls_calloc = MBEDTLS_PLATFORM_CALLOC_MACRO
 *     - if !(MBEDTLS_PLATFORM_CALLOC_MACRO && MBEDTLS_PLATFORM_FREE_MACRO):
 *         - Dynamic setup via mbedtls_platform_set_calloc_free is now possible with a default value MBEDTLS_PLATFORM_STD_CALLOC.
 *         - How is MBEDTLS_PLATFORM_STD_CALLOC handled?
 *         - if MBEDTLS_PLATFORM_NO_STD_FUNCTIONS:
 *             - MBEDTLS_PLATFORM_STD_CALLOC is not set to anything;
 *             - MBEDTLS_PLATFORM_STD_MEM_HDR can be included if present;
 *         - if !MBEDTLS_PLATFORM_NO_STD_FUNCTIONS:
 *             - if MBEDTLS_PLATFORM_STD_CALLOC is present:
 *                 - User-defined MBEDTLS_PLATFORM_STD_CALLOC is respected;
 *             - if !MBEDTLS_PLATFORM_STD_CALLOC:
 *                 - MBEDTLS_PLATFORM_STD_CALLOC = calloc
 *
 *         - At this point the presence of MBEDTLS_PLATFORM_STD_CALLOC is checked.
 *         - if !MBEDTLS_PLATFORM_STD_CALLOC
 *             - MBEDTLS_PLATFORM_STD_CALLOC = uninitialized_calloc
 *
 *         - mbedtls_calloc = MBEDTLS_PLATFORM_STD_CALLOC.
 *
 * Defining MBEDTLS_PLATFORM_CALLOC_MACRO and #MBEDTLS_PLATFORM_STD_CALLOC at the same time is not possible.
 * MBEDTLS_PLATFORM_CALLOC_MACRO and MBEDTLS_PLATFORM_FREE_MACRO must both be defined or undefined at the same time.
 * #MBEDTLS_PLATFORM_STD_CALLOC and #MBEDTLS_PLATFORM_STD_FREE do not have to be defined at the same time, as, if they are used,
 * dynamic setup of these functions is possible. See the tree above to see how are they handled in all cases.
 * An uninitialized #MBEDTLS_PLATFORM_STD_CALLOC always fails, returning a null pointer.
 * An uninitialized #MBEDTLS_PLATFORM_STD_FREE does not do anything.
 *
 * Requires: MBEDTLS_PLATFORM_C
 *
 * Enable this layer to allow use of alternative memory allocators.
 */
//#define MBEDTLS_PLATFORM_MEMORY

/**
 * \def MBEDTLS_PLATFORM_NO_STD_FUNCTIONS
 *
 * Do not assign standard functions in the platform layer (e.g. calloc() to
 * MBEDTLS_PLATFORM_STD_CALLOC and printf() to MBEDTLS_PLATFORM_STD_PRINTF)
 *
 * This makes sure there are no linking errors on platforms that do not support
 * these functions. You will HAVE to provide alternatives, either at runtime
 * via the platform_set_xxx() functions or at compile time by setting
 * the MBEDTLS_PLATFORM_STD_XXX defines, or enabling a
 * MBEDTLS_PLATFORM_XXX_MACRO.
 *
 * Requires: MBEDTLS_PLATFORM_C
 *
 * Uncomment to prevent default assignment of standard functions in the
 * platform layer.
 */
//#define MBEDTLS_PLATFORM_NO_STD_FUNCTIONS

/**
 * Uncomment the macro to let Mbed TLS use your alternate implementation of
 * mbedtls_platform_zeroize(), to wipe sensitive data in memory. This replaces
 * the default implementation in platform_util.c.
 *
 * By default, the library uses a system function such as memset_s()
 * (optional feature of C11), explicit_bzero() (BSD and compatible), or
 * SecureZeroMemory (Windows). If no such function is detected, the library
 * falls back to a plain C implementation. Compilers are technically
 * permitted to optimize this implementation out, meaning that the memory is
 * not actually wiped. The library tries to prevent that, but the C language
 * makes it impossible to guarantee that the memory will always be wiped.
 *
 * If your platform provides a guaranteed method to wipe memory which
 * `platform_util.c` does not detect, define this macro to the name of
 * a function that takes two arguments, a `void *` pointer and a length,
 * and wipes that many bytes starting at the specified address. For example,
 * if your platform has explicit_bzero() but `platform_util.c` does not
 * detect its presence, define `MBEDTLS_PLATFORM_ZEROIZE_ALT` to be
 * `explicit_bzero` to use that function as mbedtls_platform_zeroize().
 */
//#define MBEDTLS_PLATFORM_ZEROIZE_ALT

/**
 * \def MBEDTLS_THREADING_ALT
 *
 * Provide your own alternate threading implementation.
 *
 * Requires: MBEDTLS_THREADING_C
 *
 * Uncomment this to allow your own alternate threading implementation.
 */
//#define MBEDTLS_THREADING_ALT

/**
 * \def MBEDTLS_THREADING_PTHREAD
 *
 * Enable the pthread wrapper layer for the threading layer.
 *
 * Requires: MBEDTLS_THREADING_C
 *
 * Uncomment this to enable pthread mutexes.
 */
//#define MBEDTLS_THREADING_PTHREAD

/**
 * \def MBEDTLS_THREADING_C
 *
 * Enable the threading abstraction layer.
 * By default Mbed TLS assumes it is used in a non-threaded environment or that
 * contexts are not shared between threads. If you do intend to use contexts
 * between threads, you will need to enable this layer to prevent race
 * conditions. See also our Knowledge Base article about threading:
 * https://mbed-tls.readthedocs.io/en/latest/kb/development/thread-safety-and-multi-threading
 *
 * Module:  library/threading.c
 *
 * This allows different threading implementations (self-implemented or
 * provided).
 *
 * You will have to enable either MBEDTLS_THREADING_ALT or
 * MBEDTLS_THREADING_PTHREAD.
 *
 * Enable this layer to allow use of mutexes within Mbed TLS
 */
//#define MBEDTLS_THREADING_C

/** \} name SECTION: Platform abstraction layer */

/**
 * \name SECTION: General and test configuration options
 *
 * This section sets test specific settings.
 * \{
 */

/**
 * \def MBEDTLS_CHECK_RETURN_WARNING
 *
 * If this macro is defined, emit a compile-time warning if application code
 * calls a function without checking its return value, but the return value
 * should generally be checked in portable applications.
 *
 * This is only supported on platforms where #MBEDTLS_CHECK_RETURN is
 * implemented. Otherwise this option has no effect.
 *
 * Uncomment to get warnings on using fallible functions without checking
 * their return value.
 *
 * \note  This feature is a work in progress.
 *        Warnings will be added to more functions in the future.
 *
 * \note  A few functions are considered critical, and ignoring the return
 *        value of these functions will trigger a warning even if this
 *        macro is not defined. To completely disable return value check
 *        warnings, define #MBEDTLS_CHECK_RETURN with an empty expansion.
 */
//#define MBEDTLS_CHECK_RETURN_WARNING

/**
 * \def MBEDTLS_DEPRECATED_WARNING
 *
 * Mark deprecated functions and features so that they generate a warning if
 * used. Functionality deprecated in one version will usually be removed in the
 * next version. You can enable this to help you prepare the transition to a
 * new major version by making sure your code is not using this functionality.
 *
 * This only works with GCC and Clang. With other compilers, you may want to
 * use MBEDTLS_DEPRECATED_REMOVED
 *
 * Uncomment to get warnings on using deprecated functions and features.
 */
//#define MBEDTLS_DEPRECATED_WARNING

/**
 * \def MBEDTLS_DEPRECATED_REMOVED
 *
 * Remove deprecated functions and features so that they generate an error if
 * used. Functionality deprecated in one version will usually be removed in the
 * next version. You can enable this to help you prepare the transition to a
 * new major version by making sure your code is not using this functionality.
 *
 * Uncomment to get errors on using deprecated functions and features.
 */
//#define MBEDTLS_DEPRECATED_REMOVED

/** \} name SECTION: General and test configuration options */

/**
 * \name SECTION: Cryptographic mechanism selection (extended API)
 *
 * This section sets cryptographic mechanism settings.
 * \{
 */

/**
 * \def MBEDTLS_LMS_C
 *
 * Enable the LMS stateful-hash asymmetric signature algorithm.
 *
 * Module:  library/lms.c
 * Caller:
 *
 * Requires: MBEDTLS_PSA_CRYPTO_C
 *
 * Uncomment to enable the LMS verification algorithm and public key operations.
 */
#define MBEDTLS_LMS_C

/**
 * \def MBEDTLS_LMS_PRIVATE
 *
 * Enable LMS private-key operations and signing code. Functions enabled by this
 * option are experimental, and should not be used in production.
 *
 * Requires: MBEDTLS_LMS_C
 *
 * Uncomment to enable the LMS signature algorithm and private key operations.
 */
//#define MBEDTLS_LMS_PRIVATE

/**
 * \def MBEDTLS_MD_C
 *
 * Enable the generic layer for message digest (hashing) and HMAC.
 *
 * Requires: one of: MBEDTLS_MD5_C, MBEDTLS_RIPEMD160_C, MBEDTLS_SHA1_C,
 *                   MBEDTLS_SHA224_C, MBEDTLS_SHA256_C, MBEDTLS_SHA384_C,
 *                   MBEDTLS_SHA512_C, or MBEDTLS_PSA_CRYPTO_C with at least
 *                   one hash.
 * Module:  library/md.c
 * Caller:  library/constant_time.c
 *          library/ecdsa.c
 *          library/ecjpake.c
 *          library/hkdf.c
 *          library/hmac_drbg.c
 *          library/pk.c
 *          library/pkcs5.c
 *          library/pkcs12.c
 *          library/psa_crypto_ecp.c
 *          library/psa_crypto_rsa.c
 *          library/rsa.c
 *          library/ssl_cookie.c
 *          library/ssl_msg.c
 *          library/ssl_tls.c
 *          library/x509.c
 *          library/x509_crt.c
 *          library/x509write_crt.c
 *          library/x509write_csr.c
 *
 * Uncomment to enable generic message digest wrappers.
 */
#define MBEDTLS_MD_C

/**
 * \def MBEDTLS_NIST_KW_C
 *
 * Enable the Key Wrapping mode for 128-bit block ciphers,
 * as defined in NIST SP 800-38F. Only KW and KWP modes
 * are supported. At the moment, only AES is approved by NIST.
 *
 * Module:  library/nist_kw.c
 *
 * Requires: MBEDTLS_AES_C and MBEDTLS_CIPHER_C
 */
#define MBEDTLS_NIST_KW_C

/**
 * \def MBEDTLS_PK_C
 *
 * Enable the generic public (asymmetric) key layer.
 *
 * Module:  library/pk.c
 * Caller:  library/psa_crypto_rsa.c
 *          library/ssl_tls.c
 *          library/ssl*_client.c
 *          library/ssl*_server.c
 *          library/x509.c
 *
 * Requires: MBEDTLS_MD_C, MBEDTLS_RSA_C or MBEDTLS_ECP_C
 *
 * Uncomment to enable generic public key wrappers.
 */
#define MBEDTLS_PK_C

/**
 * \def MBEDTLS_PKCS5_C
 *
 * Enable PKCS#5 functions.
 *
 * Module:  library/pkcs5.c
 *
 * Auto-enables: MBEDTLS_MD_C
 *
 * \warning If using a hash that is only provided by PSA drivers, you must
 * call psa_crypto_init() before doing any PKCS5 operations.
 *
 * This module adds support for the PKCS#5 functions.
 */
#define MBEDTLS_PKCS5_C

/**
 * \def MBEDTLS_PKCS12_C
 *
 * Enable PKCS#12 PBE functions.
 * Adds algorithms for parsing PKCS#8 encrypted private keys
 *
 * Module:  library/pkcs12.c
 * Caller:  library/pkparse.c
 *
 * Requires: MBEDTLS_ASN1_PARSE_C and either MBEDTLS_MD_C or
 *           MBEDTLS_PSA_CRYPTO_C.
 *
 * \warning If using a hash that is only provided by PSA drivers, you must
 * call psa_crypto_init() before doing any PKCS12 operations.
 *
 * This module enables PKCS#12 functions.
 */
#define MBEDTLS_PKCS12_C

/**
 * \def MBEDTLS_PK_PARSE_C
 *
 * Enable the generic public (asymmetric) key parser.
 *
 * Module:  library/pkparse.c
 * Caller:  library/x509_crt.c
 *          library/x509_csr.c
 *
 * Requires: MBEDTLS_ASN1_PARSE_C, MBEDTLS_OID_C, MBEDTLS_PK_C
 *
 * Uncomment to enable generic public key parse functions.
 */
#define MBEDTLS_PK_PARSE_C

/**
 * \def MBEDTLS_PK_PARSE_EC_EXTENDED
 *
 * Enhance support for reading EC keys using variants of SEC1 not allowed by
 * RFC 5915 and RFC 5480.
 *
 * Currently this means parsing the SpecifiedECDomain choice of EC
 * parameters (only known groups are supported, not arbitrary domains, to
 * avoid validation issues).
 *
 * Disable if you only need to support RFC 5915 + 5480 key formats.
 */
#define MBEDTLS_PK_PARSE_EC_EXTENDED

/**
 * \def MBEDTLS_PK_PARSE_EC_COMPRESSED
 *
 * Enable the support for parsing public keys of type Short Weierstrass
 * (MBEDTLS_ECP_DP_SECP_XXX and MBEDTLS_ECP_DP_BP_XXX) which are using the
 * compressed point format. This parsing is done through ECP module's functions.
 *
 * \note As explained in the description of MBEDTLS_ECP_PF_COMPRESSED (in ecp.h)
 *       the only unsupported curves are MBEDTLS_ECP_DP_SECP224R1 and
 *       MBEDTLS_ECP_DP_SECP224K1.
 */
#define MBEDTLS_PK_PARSE_EC_COMPRESSED

/**
 * \def MBEDTLS_PK_RSA_ALT_SUPPORT
 *
 * Support external private RSA keys (eg from a HSM) in the PK layer.
 *
 * Comment this macro to disable support for external private RSA keys.
 */
#define MBEDTLS_PK_RSA_ALT_SUPPORT

/**
 * \def MBEDTLS_PK_WRITE_C
 *
 * Enable the generic public (asymmetric) key writer.
 *
 * Module:  library/pkwrite.c
 * Caller:  library/x509write.c
 *
 * Requires: MBEDTLS_ASN1_WRITE_C, MBEDTLS_OID_C, MBEDTLS_PK_C
 *
 * Uncomment to enable generic public key write functions.
 */
#define MBEDTLS_PK_WRITE_C

/** \} name SECTION: Cryptographic mechanism selection (extended API) */

#endif /* PSA_CRYPTO_CONFIG_H */
