/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSRunwayConfiguration_H_
#define	_FANSRunwayConfiguration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSRunwayConfiguration {
	FANSRunwayConfiguration_left	= 0,
	FANSRunwayConfiguration_right	= 1,
	FANSRunwayConfiguration_center	= 2,
	FANSRunwayConfiguration_none	= 3
} e_FANSRunwayConfiguration;

/* FANSRunwayConfiguration */
typedef long	 FANSRunwayConfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSRunwayConfiguration;
asn_struct_free_f FANSRunwayConfiguration_free;
asn_struct_print_f FANSRunwayConfiguration_print;
asn_constr_check_f FANSRunwayConfiguration_constraint;
ber_type_decoder_f FANSRunwayConfiguration_decode_ber;
der_type_encoder_f FANSRunwayConfiguration_encode_der;
xer_type_decoder_f FANSRunwayConfiguration_decode_xer;
xer_type_encoder_f FANSRunwayConfiguration_encode_xer;
per_type_decoder_f FANSRunwayConfiguration_decode_uper;
per_type_encoder_f FANSRunwayConfiguration_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSRunwayConfiguration_H_ */
#include "asn_internal.h"