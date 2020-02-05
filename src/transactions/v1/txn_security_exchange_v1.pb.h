/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_HELIUM_TXNS_TXN_SECURITY_EXCHANGE_V1_PB_H_INCLUDED
#define PB_HELIUM_TXNS_TXN_SECURITY_EXCHANGE_V1_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _helium_txns_txn_security_exchange_v1 {
    pb_callback_t payer;
    pb_callback_t payee;
    uint64_t amount;
    uint64_t fee;
    uint64_t nonce;
    pb_callback_t signature;
/* @@protoc_insertion_point(struct:helium_txns_txn_security_exchange_v1) */
} helium_txns_txn_security_exchange_v1;


/* Initializer values for message structs */
#define helium_txns_txn_security_exchange_v1_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}}
#define helium_txns_txn_security_exchange_v1_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define helium_txns_txn_security_exchange_v1_payer_tag 1
#define helium_txns_txn_security_exchange_v1_payee_tag 2
#define helium_txns_txn_security_exchange_v1_amount_tag 3
#define helium_txns_txn_security_exchange_v1_fee_tag 4
#define helium_txns_txn_security_exchange_v1_nonce_tag 5
#define helium_txns_txn_security_exchange_v1_signature_tag 6

/* Struct field encoding specification for nanopb */
#define helium_txns_txn_security_exchange_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES, payer, 1) \
X(a, CALLBACK, SINGULAR, BYTES, payee, 2) \
X(a, STATIC, SINGULAR, UINT64, amount, 3) \
X(a, STATIC, SINGULAR, UINT64, fee, 4) \
X(a, STATIC, SINGULAR, UINT64, nonce, 5) \
X(a, CALLBACK, SINGULAR, BYTES, signature, 6)
#define helium_txns_txn_security_exchange_v1_CALLBACK pb_default_field_callback
#define helium_txns_txn_security_exchange_v1_DEFAULT NULL

extern const pb_msgdesc_t helium_txns_txn_security_exchange_v1_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define helium_txns_txn_security_exchange_v1_fields &helium_txns_txn_security_exchange_v1_msg

/* Maximum encoded size of messages (where known) */
/* helium_txns_txn_security_exchange_v1_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif