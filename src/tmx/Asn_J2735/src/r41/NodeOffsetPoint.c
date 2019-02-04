/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "NodeOffsetPoint.h"

static asn_per_constraints_t asn_PER_type_NodeOffsetPoint_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NodeOffsetPoint_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_XY1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_20b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-XY1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_XY2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_22b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-XY2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_XY3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_24b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-XY3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_XY4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_26b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-XY4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_XY5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_28b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-XY5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_XY6),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_32b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-XY6"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_LatLon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_LLmD_64b,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-LatLon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeOffsetPoint, choice.node_Regional),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalNodeOffsetPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"node-Regional"
		},
};
static asn_TYPE_tag2member_t asn_MAP_NodeOffsetPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* node-XY1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* node-XY2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* node-XY3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* node-XY4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* node-XY5 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* node-XY6 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* node-LatLon */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* node-Regional */
};
static asn_CHOICE_specifics_t asn_SPC_NodeOffsetPoint_specs_1 = {
	sizeof(struct NodeOffsetPoint),
	offsetof(struct NodeOffsetPoint, _asn_ctx),
	offsetof(struct NodeOffsetPoint, present),
	sizeof(((struct NodeOffsetPoint *)0)->present),
	asn_MAP_NodeOffsetPoint_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NodeOffsetPoint = {
	"NodeOffsetPoint",
	"NodeOffsetPoint",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_NodeOffsetPoint_constr_1,
	asn_MBR_NodeOffsetPoint_1,
	8,	/* Elements count */
	&asn_SPC_NodeOffsetPoint_specs_1	/* Additional specs */
};
