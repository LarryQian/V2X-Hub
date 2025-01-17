/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "VehicleGroupAffected.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_VehicleGroupAffected_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_VehicleGroupAffected_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  34 }	/* (0..34,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_VehicleGroupAffected_value2enum_1[] = {
	{ 9217,	12,	"all-vehicles" },
	{ 9218,	8,	"bicycles" },
	{ 9219,	11,	"motorcycles" },
	{ 9220,	4,	"cars" },
	{ 9221,	14,	"light-vehicles" },
	{ 9222,	23,	"cars-and-light-vehicles" },
	{ 9223,	18,	"cars-with-trailers" },
	{ 9224,	31,	"cars-with-recreational-trailers" },
	{ 9225,	22,	"vehicles-with-trailers" },
	{ 9226,	14,	"heavy-vehicles" },
	{ 9227,	6,	"trucks" },
	{ 9228,	5,	"buses" },
	{ 9229,	17,	"articulated-buses" },
	{ 9230,	12,	"school-buses" },
	{ 9231,	27,	"vehicles-with-semi-trailers" },
	{ 9232,	29,	"vehicles-with-double-trailers" },
	{ 9233,	21,	"high-profile-vehicles" },
	{ 9234,	13,	"wide-vehicles" },
	{ 9235,	13,	"long-vehicles" },
	{ 9236,	15,	"hazardous-loads" },
	{ 9237,	17,	"exceptional-loads" },
	{ 9238,	14,	"abnormal-loads" },
	{ 9239,	7,	"convoys" },
	{ 9240,	20,	"maintenance-vehicles" },
	{ 9241,	17,	"delivery-vehicles" },
	{ 9242,	42,	"vehicles-with-even-numbered-license-plates" },
	{ 9243,	41,	"vehicles-with-odd-numbered-license-plates" },
	{ 9244,	29,	"vehicles-with-parking-permits" },
	{ 9245,	34,	"vehicles-with-catalytic-converters" },
	{ 9246,	37,	"vehicles-without-catalytic-converters" },
	{ 9247,	20,	"gas-powered-vehicles" },
	{ 9248,	23,	"diesel-powered-vehicles" },
	{ 9249,	12,	"lPG-vehicles" },
	{ 9250,	16,	"military-convoys" },
	{ 9251,	17,	"military-vehicles" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_VehicleGroupAffected_enum2value_1[] = {
	21,	/* abnormal-loads(9238) */
	0,	/* all-vehicles(9217) */
	12,	/* articulated-buses(9229) */
	1,	/* bicycles(9218) */
	11,	/* buses(9228) */
	3,	/* cars(9220) */
	5,	/* cars-and-light-vehicles(9222) */
	7,	/* cars-with-recreational-trailers(9224) */
	6,	/* cars-with-trailers(9223) */
	22,	/* convoys(9239) */
	24,	/* delivery-vehicles(9241) */
	31,	/* diesel-powered-vehicles(9248) */
	20,	/* exceptional-loads(9237) */
	30,	/* gas-powered-vehicles(9247) */
	19,	/* hazardous-loads(9236) */
	9,	/* heavy-vehicles(9226) */
	16,	/* high-profile-vehicles(9233) */
	32,	/* lPG-vehicles(9249) */
	4,	/* light-vehicles(9221) */
	18,	/* long-vehicles(9235) */
	23,	/* maintenance-vehicles(9240) */
	33,	/* military-convoys(9250) */
	34,	/* military-vehicles(9251) */
	2,	/* motorcycles(9219) */
	13,	/* school-buses(9230) */
	10,	/* trucks(9227) */
	28,	/* vehicles-with-catalytic-converters(9245) */
	15,	/* vehicles-with-double-trailers(9232) */
	25,	/* vehicles-with-even-numbered-license-plates(9242) */
	26,	/* vehicles-with-odd-numbered-license-plates(9243) */
	27,	/* vehicles-with-parking-permits(9244) */
	14,	/* vehicles-with-semi-trailers(9231) */
	8,	/* vehicles-with-trailers(9225) */
	29,	/* vehicles-without-catalytic-converters(9246) */
	17	/* wide-vehicles(9234) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_VehicleGroupAffected_specs_1 = {
	asn_MAP_VehicleGroupAffected_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_VehicleGroupAffected_enum2value_1,	/* N => "tag"; sorted by N */
	35,	/* Number of elements in the maps */
	36,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_VehicleGroupAffected_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VehicleGroupAffected = {
	"VehicleGroupAffected",
	"VehicleGroupAffected",
	&asn_OP_NativeEnumerated,
	asn_DEF_VehicleGroupAffected_tags_1,
	sizeof(asn_DEF_VehicleGroupAffected_tags_1)
		/sizeof(asn_DEF_VehicleGroupAffected_tags_1[0]), /* 1 */
	asn_DEF_VehicleGroupAffected_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleGroupAffected_tags_1)
		/sizeof(asn_DEF_VehicleGroupAffected_tags_1[0]), /* 1 */
	{ &asn_OER_type_VehicleGroupAffected_constr_1, &asn_PER_type_VehicleGroupAffected_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_VehicleGroupAffected_specs_1	/* Additional specs */
};

