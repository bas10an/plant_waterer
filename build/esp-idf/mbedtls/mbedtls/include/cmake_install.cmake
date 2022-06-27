# Install script for directory: S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/main")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "S:/Espressif/tools/xtensa-esp32-elf/esp-2021r2-patch2-8.4.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-objdump.exe")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/aes.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/aesni.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/arc4.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/aria.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/asn1.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/asn1write.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/base64.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/bignum.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/blowfish.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/bn_mul.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/camellia.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ccm.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/certs.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/chacha20.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/chachapoly.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/check_config.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/cipher.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/cipher_internal.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/cmac.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/compat-1.3.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/config.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ctr_drbg.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/debug.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/des.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/dhm.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ecdh.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ecdsa.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ecjpake.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ecp.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ecp_internal.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/entropy.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/entropy_poll.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/error.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/gcm.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/havege.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/hkdf.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/hmac_drbg.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/md.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/md2.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/md4.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/md5.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/md_internal.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/memory_buffer_alloc.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/net.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/net_sockets.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/nist_kw.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/oid.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/padlock.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/pem.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/pk.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/pk_internal.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/pkcs11.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/pkcs12.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/pkcs5.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/platform.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/platform_time.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/platform_util.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/poly1305.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ripemd160.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/rsa.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/rsa_internal.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/sha1.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/sha256.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/sha512.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ssl.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ssl_cache.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ssl_ciphersuites.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ssl_cookie.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ssl_internal.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/ssl_ticket.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/threading.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/timing.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/version.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/x509.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/x509_crl.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/x509_crt.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/x509_csr.h"
    "S:/Espressif/frameworks/esp-idf-v4.4/components/mbedtls/mbedtls/include/mbedtls/xtea.h"
    )
endif()

