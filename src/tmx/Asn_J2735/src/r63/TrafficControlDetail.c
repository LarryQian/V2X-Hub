/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "TrafficControlDetail.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_signal_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_latperm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_minspeed_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxspeed_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_minhdwy_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxvehmass_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxvehheight_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxvehwidth_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxvehlength_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxvehaxles_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_minvehocc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_closed_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_closed_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_chains_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_chains_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_direction_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_direction_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_lataffinity_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_lataffinity_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Member_constr_25 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Member_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_latperm_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_latperm_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_parking_constr_30 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_parking_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_signal_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..63)) */};
static asn_per_constraints_t asn_PER_memb_signal_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (SIZE(0..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_latperm_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_latperm_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_minspeed_constr_34 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_minspeed_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxspeed_constr_35 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxspeed_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_minhdwy_constr_36 CC_NOTUSED = {
	{ 2, 1 }	/* (0..2047) */,
	-1};
static asn_per_constraints_t asn_PER_memb_minhdwy_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxvehmass_constr_37 CC_NOTUSED = {
	{ 2, 1 }	/* (0..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxvehmass_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxvehheight_constr_38 CC_NOTUSED = {
	{ 1, 1 }	/* (0..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxvehheight_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxvehwidth_constr_39 CC_NOTUSED = {
	{ 1, 1 }	/* (0..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxvehwidth_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxvehlength_constr_40 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxvehlength_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxvehaxles_constr_41 CC_NOTUSED = {
	{ 1, 1 }	/* (2..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxvehaxles_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  15 }	/* (2..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_minvehocc_constr_42 CC_NOTUSED = {
	{ 1, 1 }	/* (1..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_minvehocc_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_TrafficControlDetail_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TrafficControlDetail_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  19 }	/* (0..19,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_closed_value2enum_7[] = {
	{ 0,	4,	"open" },
	{ 1,	6,	"closed" },
	{ 2,	9,	"taperleft" },
	{ 3,	10,	"taperright" },
	{ 4,	8,	"openleft" },
	{ 5,	9,	"openright" }
};
static const unsigned int asn_MAP_closed_enum2value_7[] = {
	1,	/* closed(1) */
	0,	/* open(0) */
	4,	/* openleft(4) */
	5,	/* openright(5) */
	2,	/* taperleft(2) */
	3	/* taperright(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_closed_specs_7 = {
	asn_MAP_closed_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_closed_enum2value_7,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_closed_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_closed_7 = {
	"closed",
	"closed",
	&asn_OP_NativeEnumerated,
	asn_DEF_closed_tags_7,
	sizeof(asn_DEF_closed_tags_7)
		/sizeof(asn_DEF_closed_tags_7[0]) - 1, /* 1 */
	asn_DEF_closed_tags_7,	/* Same as above */
	sizeof(asn_DEF_closed_tags_7)
		/sizeof(asn_DEF_closed_tags_7[0]), /* 2 */
	{ &asn_OER_type_closed_constr_7, &asn_PER_type_closed_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_closed_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_chains_value2enum_14[] = {
	{ 0,	2,	"no" },
	{ 1,	9,	"permitted" },
	{ 2,	8,	"required" }
};
static const unsigned int asn_MAP_chains_enum2value_14[] = {
	0,	/* no(0) */
	1,	/* permitted(1) */
	2	/* required(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_chains_specs_14 = {
	asn_MAP_chains_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_chains_enum2value_14,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_chains_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_chains_14 = {
	"chains",
	"chains",
	&asn_OP_NativeEnumerated,
	asn_DEF_chains_tags_14,
	sizeof(asn_DEF_chains_tags_14)
		/sizeof(asn_DEF_chains_tags_14[0]) - 1, /* 1 */
	asn_DEF_chains_tags_14,	/* Same as above */
	sizeof(asn_DEF_chains_tags_14)
		/sizeof(asn_DEF_chains_tags_14[0]), /* 2 */
	{ &asn_OER_type_chains_constr_14, &asn_PER_type_chains_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_chains_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_direction_value2enum_18[] = {
	{ 0,	7,	"forward" },
	{ 1,	7,	"reverse" }
};
static const unsigned int asn_MAP_direction_enum2value_18[] = {
	0,	/* forward(0) */
	1	/* reverse(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_direction_specs_18 = {
	asn_MAP_direction_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_direction_enum2value_18,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_direction_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_direction_18 = {
	"direction",
	"direction",
	&asn_OP_NativeEnumerated,
	asn_DEF_direction_tags_18,
	sizeof(asn_DEF_direction_tags_18)
		/sizeof(asn_DEF_direction_tags_18[0]) - 1, /* 1 */
	asn_DEF_direction_tags_18,	/* Same as above */
	sizeof(asn_DEF_direction_tags_18)
		/sizeof(asn_DEF_direction_tags_18[0]), /* 2 */
	{ &asn_OER_type_direction_constr_18, &asn_PER_type_direction_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_direction_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lataffinity_value2enum_21[] = {
	{ 0,	4,	"left" },
	{ 1,	5,	"right" }
};
static const unsigned int asn_MAP_lataffinity_enum2value_21[] = {
	0,	/* left(0) */
	1	/* right(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_lataffinity_specs_21 = {
	asn_MAP_lataffinity_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_lataffinity_enum2value_21,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lataffinity_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lataffinity_21 = {
	"lataffinity",
	"lataffinity",
	&asn_OP_NativeEnumerated,
	asn_DEF_lataffinity_tags_21,
	sizeof(asn_DEF_lataffinity_tags_21)
		/sizeof(asn_DEF_lataffinity_tags_21[0]) - 1, /* 1 */
	asn_DEF_lataffinity_tags_21,	/* Same as above */
	sizeof(asn_DEF_lataffinity_tags_21)
		/sizeof(asn_DEF_lataffinity_tags_21[0]), /* 2 */
	{ &asn_OER_type_lataffinity_constr_21, &asn_PER_type_lataffinity_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lataffinity_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_Member_value2enum_25[] = {
	{ 0,	4,	"none" },
	{ 1,	9,	"permitted" },
	{ 2,	12,	"passing-only" },
	{ 3,	14,	"emergency-only" }
};
static const unsigned int asn_MAP_Member_enum2value_25[] = {
	3,	/* emergency-only(3) */
	0,	/* none(0) */
	2,	/* passing-only(2) */
	1	/* permitted(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_Member_specs_25 = {
	asn_MAP_Member_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_Member_enum2value_25,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Member_tags_25[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_25 = {
	"ENUMERATED",
	"ENUMERATED",
	&asn_OP_NativeEnumerated,
	asn_DEF_Member_tags_25,
	sizeof(asn_DEF_Member_tags_25)
		/sizeof(asn_DEF_Member_tags_25[0]), /* 1 */
	asn_DEF_Member_tags_25,	/* Same as above */
	sizeof(asn_DEF_Member_tags_25)
		/sizeof(asn_DEF_Member_tags_25[0]), /* 1 */
	{ &asn_OER_type_Member_constr_25, &asn_PER_type_Member_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Member_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_latperm_24[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_Member_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_latperm_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_latperm_specs_24 = {
	sizeof(struct TrafficControlDetail__latperm),
	offsetof(struct TrafficControlDetail__latperm, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_latperm_24 = {
	"latperm",
	"latperm",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_latperm_tags_24,
	sizeof(asn_DEF_latperm_tags_24)
		/sizeof(asn_DEF_latperm_tags_24[0]) - 1, /* 1 */
	asn_DEF_latperm_tags_24,	/* Same as above */
	sizeof(asn_DEF_latperm_tags_24)
		/sizeof(asn_DEF_latperm_tags_24[0]), /* 2 */
	{ &asn_OER_type_latperm_constr_24, &asn_PER_type_latperm_constr_24, SEQUENCE_OF_constraint },
	asn_MBR_latperm_24,
	1,	/* Single element */
	&asn_SPC_latperm_specs_24	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_parking_value2enum_30[] = {
	{ 0,	2,	"no" },
	{ 1,	8,	"parallel" },
	{ 2,	6,	"angled" }
};
static const unsigned int asn_MAP_parking_enum2value_30[] = {
	2,	/* angled(2) */
	0,	/* no(0) */
	1	/* parallel(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_parking_specs_30 = {
	asn_MAP_parking_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_parking_enum2value_30,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_parking_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parking_30 = {
	"parking",
	"parking",
	&asn_OP_NativeEnumerated,
	asn_DEF_parking_tags_30,
	sizeof(asn_DEF_parking_tags_30)
		/sizeof(asn_DEF_parking_tags_30[0]) - 1, /* 1 */
	asn_DEF_parking_tags_30,	/* Same as above */
	sizeof(asn_DEF_parking_tags_30)
		/sizeof(asn_DEF_parking_tags_30[0]), /* 2 */
	{ &asn_OER_type_parking_constr_30, &asn_PER_type_parking_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_parking_specs_30	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TrafficControlDetail_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.signal),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_signal_constr_2, &asn_PER_memb_signal_constr_2,  memb_signal_constraint_1 },
		0, 0, /* No default value */
		"signal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.stop),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stop"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.yield),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yield"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.notowing),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notowing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.restricted),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"restricted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.closed),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_closed_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"closed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.chains),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_chains_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"chains"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.direction),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_direction_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"direction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.lataffinity),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lataffinity_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lataffinity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.latperm),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_latperm_24,
		0,
		{ &asn_OER_memb_latperm_constr_24, &asn_PER_memb_latperm_constr_24,  memb_latperm_constraint_1 },
		0, 0, /* No default value */
		"latperm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.parking),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_parking_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parking"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.minspeed),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_minspeed_constr_34, &asn_PER_memb_minspeed_constr_34,  memb_minspeed_constraint_1 },
		0, 0, /* No default value */
		"minspeed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.maxspeed),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxspeed_constr_35, &asn_PER_memb_maxspeed_constr_35,  memb_maxspeed_constraint_1 },
		0, 0, /* No default value */
		"maxspeed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.minhdwy),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_minhdwy_constr_36, &asn_PER_memb_minhdwy_constr_36,  memb_minhdwy_constraint_1 },
		0, 0, /* No default value */
		"minhdwy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.maxvehmass),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxvehmass_constr_37, &asn_PER_memb_maxvehmass_constr_37,  memb_maxvehmass_constraint_1 },
		0, 0, /* No default value */
		"maxvehmass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.maxvehheight),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxvehheight_constr_38, &asn_PER_memb_maxvehheight_constr_38,  memb_maxvehheight_constraint_1 },
		0, 0, /* No default value */
		"maxvehheight"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.maxvehwidth),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxvehwidth_constr_39, &asn_PER_memb_maxvehwidth_constr_39,  memb_maxvehwidth_constraint_1 },
		0, 0, /* No default value */
		"maxvehwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.maxvehlength),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxvehlength_constr_40, &asn_PER_memb_maxvehlength_constr_40,  memb_maxvehlength_constraint_1 },
		0, 0, /* No default value */
		"maxvehlength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.maxvehaxles),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxvehaxles_constr_41, &asn_PER_memb_maxvehaxles_constr_41,  memb_maxvehaxles_constraint_1 },
		0, 0, /* No default value */
		"maxvehaxles"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlDetail, choice.minvehocc),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_minvehocc_constr_42, &asn_PER_memb_minvehocc_constr_42,  memb_minvehocc_constraint_1 },
		0, 0, /* No default value */
		"minvehocc"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficControlDetail_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* signal */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* stop */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* yield */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* notowing */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* restricted */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* closed */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* chains */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* direction */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* lataffinity */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* latperm */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* parking */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* minspeed */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* maxspeed */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* minhdwy */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* maxvehmass */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* maxvehheight */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* maxvehwidth */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* maxvehlength */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* maxvehaxles */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 } /* minvehocc */
};
asn_CHOICE_specifics_t asn_SPC_TrafficControlDetail_specs_1 = {
	sizeof(struct TrafficControlDetail),
	offsetof(struct TrafficControlDetail, _asn_ctx),
	offsetof(struct TrafficControlDetail, present),
	sizeof(((struct TrafficControlDetail *)0)->present),
	asn_MAP_TrafficControlDetail_tag2el_1,
	20,	/* Count of tags in the map */
	0, 0,
	20	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TrafficControlDetail = {
	"TrafficControlDetail",
	"TrafficControlDetail",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TrafficControlDetail_constr_1, &asn_PER_type_TrafficControlDetail_constr_1, CHOICE_constraint },
	asn_MBR_TrafficControlDetail_1,
	20,	/* Elements count */
	&asn_SPC_TrafficControlDetail_specs_1	/* Additional specs */
};
