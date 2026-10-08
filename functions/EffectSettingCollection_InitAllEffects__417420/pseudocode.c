// TES4 effect table initialization has Water Breathing/Walking and many magic effects, but no observed Slowfall or Climbing effect in this table. Movement discipline implementation must add behavior outside the vanilla effect state table.
int __usercall EffectSettingCollection_InitAllEffects@<eax>(char a1@<bpl>)
{
  _DWORD v2[5]; // [esp+14h] [ebp-14h] BYREF

  EffectSettingCollection_AddFull(a1, 0x52424157, "Water Breathing", 0, 0.0, 0x37u, 0x1000172u, 0xFFFFFFFF, 0); /*0x41743d*/
  EffectSettingCollection_AddFull(a1, 0x41574157, "Water Walking", 0, 0.0, 0x38u, 0x1000172u, 0xFFFFFFFF, 0); /*0x417462*/
  EffectSettingCollection_AddFull(a1, 0x444C4853, "Shield", 0, 0.0, 0x2Bu, 0x100007Au, 0xFFFFFFFF, 0); /*0x417487*/
  EffectSettingCollection_AddFull(a1, 0x48534946, "Fire Shield", 0, 0.0, 0x3Du, 0x100007Au, 0xFFFFFFFF, 0); /*0x4174ac*/
  EffectSettingCollection_AddFull(a1, 0x4853494C, "Lightning Shield", 0, 0.0, 0x44u, 0x100007Au, 0xFFFFFFFF, 0); /*0x4174d1*/
  EffectSettingCollection_AddFull(a1, 0x48535246, "Frost Shield", 0, 0.0, 0x3Eu, 0x100007Au, 0xFFFFFFFF, 0); /*0x4174f6*/
  EffectSettingCollection_AddFull(a1, 0x4E445242, "Burden", 0, 0.0, 0xBu, 0x1000073u, 0x40u, 2, 0x4C505344, 0x52485446); /*0x417525*/
  EffectSettingCollection_AddFull(a1, 0x52485446, "Feather", 0, 0.0, 0xBu, 0x1000076u, 0x40u, 1, 0x4C505344); /*0x41754f*/
  EffectSettingCollection_AddFull(a1, 0x4B434F4C, "Lock", 0, 0.0, 0, 0xE0u, 0xFFFFFFFF, 0); /*0x417574*/
  EffectSettingCollection_AddFull(a1, 0x4E45504F, "Open", 0, 0.0, 0, 0xC0u, 0xFFFFFFFF, 0); /*0x417599*/
  qmemcpy(&v2[2], "DSPLRSFIFISH", 0xC); /*0x4175ad*/
  EffectSettingCollection_AddFull( /*0x4175cd*/
    a1,
    0x47444946,
    "Fire Damage",
    2u,
    0.0,
    8u,
    0x21000475u,
    0x3Du,
    3,
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[2], "DSPLRSSHLISH", 0xC); /*0x4175e1*/
  EffectSettingCollection_AddFull( /*0x417601*/
    a1,
    0x47444853,
    "Shock Damage",
    2u,
    0.0,
    8u,
    0x21000075u,
    0x44u,
    3,
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[2], "DSPLRSFRFRSH", 0xC); /*0x417615*/
  EffectSettingCollection_AddFull( /*0x417635*/
    a1,
    0x47445246,
    "Frost Damage",
    2u,
    0.0,
    8u,
    0x1000075u,
    0x3Eu,
    3,
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLREATFOATABAT", 0x10); /*0x41764e*/
  EffectSettingCollection_AddFull( /*0x41766e*/
    a1,
    0x54414744,
    "Damage Attribute",
    2u,
    0.0,
    0,
    0x100075u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLREHEFOHEABHE", 0x10); /*0x417687*/
  EffectSettingCollection_AddFull( /*0x4176a7*/
    a1,
    0x45484744,
    "Damage Health",
    2u,
    0.0,
    8u,
    0x21000075u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLRESPFOSPABSP", 0x10); /*0x4176c0*/
  EffectSettingCollection_AddFull( /*0x4176e0*/
    a1,
    0x50534744,
    "Damage Spell Points",
    2u,
    0.0,
    9u,
    0x1000075u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLREFAFOFAABFA", 0x10); /*0x4176f9*/
  EffectSettingCollection_AddFull( /*0x417719*/
    a1,
    0x41464744,
    "Damage Fatigue",
    2u,
    0.0,
    0xAu,
    0x1000075u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLREATFOATABAT", 0x10); /*0x417732*/
  EffectSettingCollection_AddFull( /*0x417752*/
    a1,
    0x54415244,
    "Drain Attribute",
    2u,
    0.0,
    0,
    0x100077u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[2], "DSPLFOSKABSK", 0xC); /*0x417766*/
  EffectSettingCollection_AddFull(a1, 0x4B535244, "Drain Skill", 2u, 0.0, 0, 0x80077u, 0x40u, 3, v2[2], v2[3], v2[4]); /*0x417786*/
  qmemcpy(&v2[1], "DSPLREHEFOHEABHE", 0x10); /*0x41779f*/
  EffectSettingCollection_AddFull( /*0x4177bf*/
    a1,
    0x45485244,
    "Drain Health",
    2u,
    0.0,
    8u,
    0x1000077u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLRESPFOSPABSP", 0x10); /*0x4177d8*/
  EffectSettingCollection_AddFull( /*0x4177f8*/
    a1,
    0x50535244,
    "Drain Spell Points",
    2u,
    0.0,
    9u,
    0x1000077u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLREFAFOFAABFA", 0x10); /*0x417811*/
  EffectSettingCollection_AddFull( /*0x417831*/
    a1,
    0x41465244,
    "Drain Fatigue",
    2u,
    0.0,
    0xAu,
    0x1000077u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[2], "FISHRSFIDSPL", 0xC); /*0x417845*/
  EffectSettingCollection_AddFull( /*0x417865*/
    a1,
    0x49464B57,
    "Weakness to Fire",
    2u,
    0.0,
    0x3Du,
    0x100007Fu,
    0x40u,
    3,
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[2], "FRSHRSFRDSPL", 0xC); /*0x417879*/
  EffectSettingCollection_AddFull( /*0x417899*/
    a1,
    0x52464B57,
    "Weakness to Frost",
    2u,
    0.0,
    0x3Eu,
    0x100007Fu,
    0x40u,
    3,
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[2], "LISHRSSHDSPL", 0xC); /*0x4178ad*/
  EffectSettingCollection_AddFull( /*0x4178cd*/
    a1,
    0x48534B57,
    "Weakness to Shock",
    2u,
    0.0,
    0x44u,
    0x100007Fu,
    0x40u,
    3,
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[3], "RSMADSPL", 8); /*0x4178dc*/
  EffectSettingCollection_AddFull( /*0x4178fc*/
    a1,
    0x414D4B57,
    "Weakness to Magic",
    2u,
    0.0,
    0x40u,
    0x100007Fu,
    0x40u,
    2,
    v2[3],
    v2[4]);
  qmemcpy(&v2[3], "RSDIDSPL", 8); /*0x41790b*/
  EffectSettingCollection_AddFull( /*0x41792b*/
    a1,
    0x49444B57,
    "Weakness to Disease",
    2u,
    0.0,
    0x3Fu,
    0x100007Fu,
    0x40u,
    2,
    v2[3],
    v2[4]);
  qmemcpy(&v2[3], "RSPODSPL", 8); /*0x41793a*/
  EffectSettingCollection_AddFull( /*0x41795a*/
    a1,
    0x4F504B57,
    "Weakness to Poison",
    2u,
    0.0,
    0x43u,
    0x100007Fu,
    0x40u,
    2,
    v2[3],
    v2[4]);
  qmemcpy(&v2[3], "RSNWDSPL", 8); /*0x417967*/
  EffectSettingCollection_AddFull( /*0x417989*/
    a1,
    0x574E4B57,
    "Weakness to Normal Weapons",
    2u,
    0.0,
    0x41u,
    0x100007Fu,
    0x40u,
    2,
    v2[3],
    v2[4]);
  qmemcpy(v2, "DSPLSHLDFISHLISHFRSH", sizeof(v2)); /*0x4179a7*/
  EffectSettingCollection_AddFull( /*0x4179c4*/
    a1,
    0x52414944,
    "Disintegrate Armor",
    2u,
    0.0,
    0,
    0x75u,
    0x40u,
    5,
    v2[0],
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(v2, "DSPLSHLDFISHLISHFRSH", sizeof(v2)); /*0x4179e2*/
  EffectSettingCollection_AddFull( /*0x4179ff*/
    a1,
    0x45574944,
    "Disintegrate Weapons",
    2u,
    0.0,
    0,
    0x75u,
    0x40u,
    5,
    v2[0],
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  EffectSettingCollection_AddFull(a1, 0x504D4156, "Vampirism", 2u, 0.0, 0, 0x10000092u, 0x3Fu, 0); /*0x417a24*/
  EffectSettingCollection_AddFull(a1, 0x47445553, "Sun Damage", 2u, 0.0, 0, 0x14u, 0xFFFFFFFF, 0); /*0x417a46*/
  EffectSettingCollection_AddFull(a1, 0x414D5453, "Stunted Magicka", 2u, 0.0, 0x39u, 0x1000112u, 0xFFFFFFFF, 0); /*0x417a6b*/
  EffectSettingCollection_AddFull(a1, 0x4E534F50, "Poison Info", 2u, 0.0, 0, (UInt32)&loc_800000, 0x43u, 1, 0x4F505543); /*0x417a95*/
  EffectSettingCollection_AddFull(a1, 0x45534944, "Disease Info", 2u, 0.0, 0, (UInt32)&loc_800000, 0x3Fu, 1, 0x49445543); /*0x417abf*/
  qmemcpy(&v2[1], "DSPLREHEFOHEABHE", 0x10); /*0x417ad8*/
  EffectSettingCollection_AddFull( /*0x417af8*/
    a1,
    0x594D5544,
    "Mehrunes Dagon Custom Effect",
    2u,
    0.0,
    8u,
    0x21000075u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  EffectSettingCollection_AddFull(a1, 0x49564E49, "Invisibility", 3u, 0.0, 0x2Fu, 0x1000172u, 0xFFFFFFFF, 0); /*0x417b1d*/
  EffectSettingCollection_AddFull(a1, 0x4C4D4843, "Chameleon", 3u, 0.0, 0x2Eu, 0x100007Au, 0xFFFFFFFF, 0); /*0x417b42*/
  qmemcpy(&v2[3], "CUPADSPL", 8); /*0x417b51*/
  EffectSettingCollection_AddFull(a1, 0x41524150, "Paralyze", 3u, 0.0, 0x30u, 0x1000173u, 0x42u, 2, v2[3], v2[4]); /*0x417b71*/
  EffectSettingCollection_AddFull(a1, 0x434E4C53, "Silence", 3u, 0.0, 0x31u, 0x1000173u, 0x40u, 1, 0x4C505344); /*0x417b9b*/
  EffectSettingCollection_AddFull(a1, 0x4D524843, "Charm", 3u, 0.0, 6u, 0x1000062u, 0x40u, 1, 0x4C505344); /*0x417bc5*/
  qmemcpy(&v2[3], "DSPLRALY", 8); /*0x417bd4*/
  EffectSettingCollection_AddFull(a1, 0x4F4D4544, "Demoralize", 3u, 0.0, 0x22u, 0x41000066u, 0x40u, 2, v2[3], v2[4]); /*0x417bf4*/
  qmemcpy(&v2[3], "DSPLDEMO", 8); /*0x417c03*/
  EffectSettingCollection_AddFull(a1, 0x594C4152, "Rally", 3u, 0.0, 0x22u, 0x1000062u, 0x40u, 2, v2[3], v2[4]); /*0x417c23*/
  qmemcpy(&v2[3], "DSPLCALM", 8); /*0x417c32*/
  EffectSettingCollection_AddFull(a1, 0x5A4E5246, "Frenzy", 3u, 0.0, 0x21u, 0x41000062u, 0x40u, 2, v2[3], v2[4]); /*0x417c52*/
  qmemcpy(&v2[3], "DSPLFRNZ", 8); /*0x417c61*/
  EffectSettingCollection_AddFull(a1, 0x4D4C4143, "Calm", 3u, 0.0, 0x21u, 0x41000066u, 0x40u, 2, v2[3], v2[4]); /*0x417c81*/
  EffectSettingCollection_AddFull(a1, 0x4559454E, "Night-Eye", 3u, 0.0, 0x29u, 0x1000112u, 0xFFFFFFFF, 0); /*0x417ca6*/
  EffectSettingCollection_AddFull(a1, 0x5448474C, "Light", 3u, 0.0, 0, 0x80000072, 0xFFFFFFFF, 0); /*0x417ccb*/
  EffectSettingCollection_AddFull(a1, 0x4B524144, "Darkness", 3u, 0.0, 0x46u, 0x81000072, 0xFFFFFFFF, 0); /*0x417cf0*/
  EffectSettingCollection_AddFull(a1, 0x4C505344, "Dispel", 4u, 0.0, 0, 0xF0u, 0x40u, 0); /*0x417d15*/
  EffectSettingCollection_AddFull(a1, 0x50525453, "Soul Trap", 4u, 0.0, 0, 0x163u, 0x40u, 1, 0x4C505344); /*0x417d3f*/
  EffectSettingCollection_AddFull(a1, 0x454C4554, "Telekinesis", 4u, 0.0, 0x3Cu, 0x81000242, 0xFFFFFFFF, 0); /*0x417d64*/
  EffectSettingCollection_AddFull(a1, 0x54435444, "Detect Life", 4u, 0.0, 0x3Au, 0x81000012, 0xFFFFFFFF, 0); /*0x417d89*/
  EffectSettingCollection_AddFull(a1, 0x53424153, "Spell Absorption", 4u, 0.0, 0x34u, 0x1000072u, 0x40u, 0); /*0x417dae*/
  EffectSettingCollection_AddFull(a1, 0x434C4652, "Reflect", 4u, 0.0, 0x35u, 0x100007Au, 0xFFFFFFFF, 0); /*0x417dd3*/
  EffectSettingCollection_AddFull(a1, 0x47444552, "Reflect Damage", 4u, 0.0, 0x3Bu, 0x100001Au, 0xFFFFFFFF, 0); /*0x417df8*/
  EffectSettingCollection_AddFull(a1, 0x54414552, "Restore Attribute", 5u, 0.0, 0, 0x100070u, 0xFFFFFFFF, 0); /*0x417e1d*/
  EffectSettingCollection_AddFull(a1, 0x45484552, "Restore Health", 5u, 0.0, 8u, 0x1000070u, 0xFFFFFFFF, 0); /*0x417e42*/
  EffectSettingCollection_AddFull(a1, 0x50534552, "Restore Spell Points", 5u, 0.0, 9u, 0x1000070u, 0xFFFFFFFF, 0); /*0x417e67*/
  EffectSettingCollection_AddFull(a1, 0x41464552, "Restore Fatigue", 5u, 0.0, 0xAu, 0x1000070u, 0xFFFFFFFF, 0); /*0x417e8c*/
  EffectSettingCollection_AddFull(a1, 0x54414F46, "Fortify Attribute", 5u, 0.0, 0, 0x100072u, 0xFFFFFFFF, 0); /*0x417eb1*/
  EffectSettingCollection_AddFull(a1, 0x4B534F46, "Fortify Skill", 5u, 0.0, 0, 0x80072u, 0xFFFFFFFF, 0); /*0x417ed6*/
  EffectSettingCollection_AddFull(a1, 0x45484F46, "Fortify Health", 5u, 0.0, 8u, 0x1000072u, 0xFFFFFFFF, 0); /*0x417efb*/
  EffectSettingCollection_AddFull(a1, 0x50534F46, "Fortify Spell Points", 5u, 0.0, 9u, 0x1000072u, 0xFFFFFFFF, 0); /*0x417f20*/
  EffectSettingCollection_AddFull(a1, 0x41464F46, "Fortify Fatigue", 5u, 0.0, 0xAu, 0x1000072u, 0xFFFFFFFF, 0); /*0x417f45*/
  qmemcpy(&v2[2], "DSPLABSKDRSK", 0xC); /*0x417f59*/
  EffectSettingCollection_AddFull(a1, 0x4B534241, "Absorb Skill", 5u, 0.0, 0, 0x80027u, 0x40u, 3, v2[2], v2[3], v2[4]); /*0x417f79*/
  qmemcpy(&v2[1], "DSPLABATDRATDGAT", 0x10); /*0x417f92*/
  EffectSettingCollection_AddFull( /*0x417fb2*/
    a1,
    0x54414241,
    "Absorb Attribute",
    5u,
    0.0,
    0,
    0x100027u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(v2, "DSPLABHEDRHEDGHEDUMY", sizeof(v2)); /*0x417fd0*/
  EffectSettingCollection_AddFull( /*0x417ff0*/
    a1,
    0x45484241,
    "Absorb Health",
    5u,
    0.0,
    8u,
    0x1000025u,
    0x40u,
    4,
    v2[0],
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLABFADRFADGFA", 0x10); /*0x418009*/
  EffectSettingCollection_AddFull( /*0x418029*/
    a1,
    0x41464241,
    "Absorb Fatigue",
    5u,
    0.0,
    0xAu,
    0x1000025u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  qmemcpy(&v2[1], "DSPLABSPDRSPDGSP", 0x10); /*0x418042*/
  EffectSettingCollection_AddFull( /*0x418062*/
    a1,
    0x50534241,
    "Absorb Spell Points",
    5u,
    0.0,
    9u,
    0x1000025u,
    0x40u,
    4,
    v2[1],
    v2[2],
    v2[3],
    v2[4]);
  EffectSettingCollection_AddFull(a1, 0x49465352, "Resist Fire", 5u, 0.0, 0x3Du, 0x100007Au, 0xFFFFFFFF, 0); /*0x418087*/
  EffectSettingCollection_AddFull(a1, 0x52465352, "Resist Frost", 5u, 0.0, 0x3Eu, 0x100007Au, 0xFFFFFFFF, 0); /*0x4180ac*/
  EffectSettingCollection_AddFull(a1, 0x48535352, "Resist Shock", 5u, 0.0, 0x44u, 0x100007Au, 0xFFFFFFFF, 0); /*0x4180d1*/
  EffectSettingCollection_AddFull(a1, 0x414D5352, "Resist Magic", 5u, 0.0, 0x40u, 0x100007Au, 0xFFFFFFFF, 0); /*0x4180f6*/
  EffectSettingCollection_AddFull(a1, 0x49445352, "Resist Disease", 5u, 0.0, 0x3Fu, 0x100007Au, 0xFFFFFFFF, 0); /*0x41811b*/
  EffectSettingCollection_AddFull(a1, 0x4F505352, "Resist Poison", 5u, 0.0, 0x43u, 0x100007Au, 0xFFFFFFFF, 0); /*0x418140*/
  EffectSettingCollection_AddFull(a1, 0x41505352, "Resist Paralysis", 5u, 0.0, 0x42u, 0x100007Au, 0xFFFFFFFF, 0); /*0x418165*/
  EffectSettingCollection_AddFull(a1, 0x574E5352, "Resist Normal Weapons", 5u, 0.0, 0x41u, 0x100007Au, 0xFFFFFFFF, 0); /*0x41818a*/
  EffectSettingCollection_AddFull(a1, 0x44575352, "Resist Water Damage", 5u, 0.0, 0x47u, 0x100017Au, 0xFFFFFFFF, 0); /*0x4181af*/
  EffectSettingCollection_AddFull(a1, 0x49445543, "Cure Disease", 5u, 0.0, 0, 0x1F0u, 0xFFFFFFFF, 0); /*0x4181d4*/
  EffectSettingCollection_AddFull(a1, 0x4F505543, "Cure Poison", 5u, 0.0, 0, 0x1F0u, 0xFFFFFFFF, 0); /*0x4181f9*/
  EffectSettingCollection_AddFull(a1, 0x41505543, "Cure Paralysis", 5u, 0.0, 0, 0x1F0u, 0xFFFFFFFF, 0); /*0x41821e*/
  EffectSettingCollection_AddFull( /*0x418243*/
    a1,
    0x4D4D4F46,
    "Fortify Magicka Multiplier",
    5u,
    0.0,
    0x28u,
    0x1000012u,
    0xFFFFFFFF,
    0);
  EffectSettingCollection_AddFull(a1, 0x4F48475A, "Summon Ghost", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418268*/
  EffectSettingCollection_AddFull(a1, 0x43494C5A, "Summon Lich", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41828d*/
  EffectSettingCollection_AddFull(a1, 0x454B535A, "Summon Skeleton", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4182b2*/
  EffectSettingCollection_AddFull(a1, 0x414B535A, "Summon Skeleton Archer", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4182d7*/
  EffectSettingCollection_AddFull(a1, 0x434B535A, "Summon Skeleton Champion", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4182fc*/
  EffectSettingCollection_AddFull(a1, 0x484B535A, "Summon Skeleton Hero", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418321*/
  EffectSettingCollection_AddFull(a1, 0x4152575A, "Summon Wraith", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418346*/
  EffectSettingCollection_AddFull(a1, 0x4C52575A, "Summon Wraith Lord", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41836b*/
  EffectSettingCollection_AddFull(a1, 0x4D4F5A5A, "Summon Zombie", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418390*/
  EffectSettingCollection_AddFull(a1, 0x5A44485A, "Summon Headless Zombie", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4183b5*/
  EffectSettingCollection_AddFull(a1, 0x4149465A, "Summon Fire Atronach", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4183da*/
  EffectSettingCollection_AddFull(a1, 0x4152465A, "Summon Frost Atronach", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4183ff*/
  EffectSettingCollection_AddFull(a1, 0x4154535A, "Summon Storm Atronach", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418424*/
  EffectSettingCollection_AddFull(a1, 0x4541445A, "Summon Daedroth", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418449*/
  EffectSettingCollection_AddFull(a1, 0x4552445A, "Summon Dremora", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41846e*/
  EffectSettingCollection_AddFull(a1, 0x4C52445A, "Summon Dremora Lord", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418493*/
  EffectSettingCollection_AddFull(a1, 0x4143535A, "Summon Scamp", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4184b8*/
  EffectSettingCollection_AddFull(a1, 0x414C435A, "Summon Clannfear", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4184dd*/
  EffectSettingCollection_AddFull(a1, 0x4450535A, "Summon Spider Daedra", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418502*/
  EffectSettingCollection_AddFull(a1, 0x5649585A, "Summon Xivilai", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418527*/
  EffectSettingCollection_AddFull(a1, 0x3130305A, "Extra Summon 01", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41854c*/
  EffectSettingCollection_AddFull(a1, 0x3230305A, "Extra Summon 02", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418571*/
  EffectSettingCollection_AddFull(a1, 0x3330305A, "Extra Summon 03", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418596*/
  EffectSettingCollection_AddFull(a1, 0x3430305A, "Extra Summon 04", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4185bb*/
  EffectSettingCollection_AddFull(a1, 0x3530305A, "Extra Summon 05", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4185e0*/
  EffectSettingCollection_AddFull(a1, 0x3630305A, "Extra Summon 06", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418605*/
  EffectSettingCollection_AddFull(a1, 0x3730305A, "Extra Summon 07", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41862a*/
  EffectSettingCollection_AddFull(a1, 0x3830305A, "Extra Summon 08", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41864f*/
  EffectSettingCollection_AddFull(a1, 0x3930305A, "Extra Summon 09", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418674*/
  EffectSettingCollection_AddFull(a1, 0x3031305A, "Extra Summon 10", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418699*/
  EffectSettingCollection_AddFull(a1, 0x3131305A, "Extra Summon 11", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4186be*/
  EffectSettingCollection_AddFull(a1, 0x3231305A, "Extra Summon 12", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4186e3*/
  EffectSettingCollection_AddFull(a1, 0x3331305A, "Extra Summon 13", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418708*/
  EffectSettingCollection_AddFull(a1, 0x3431305A, "Extra Summon 14", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41872d*/
  EffectSettingCollection_AddFull(a1, 0x3531305A, "Extra Summon 15", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418752*/
  EffectSettingCollection_AddFull(a1, 0x3631305A, "Extra Summon 16", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x418777*/
  EffectSettingCollection_AddFull(a1, 0x3731305A, "Extra Summon 17", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41879c*/
  EffectSettingCollection_AddFull(a1, 0x3831305A, "Extra Summon 18", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4187c1*/
  EffectSettingCollection_AddFull(a1, 0x3931305A, "Extra Summon 19", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x4187e6*/
  EffectSettingCollection_AddFull(a1, 0x3032305A, "Extra Summon 20", 1u, 0.0, 0, 0x40112u, 0xFFFFFFFF, 0); /*0x41880b*/
  EffectSettingCollection_AddFull( /*0x418835*/
    a1,
    0x55484F43,
    "Command Humanoid",
    3u,
    0.0,
    0,
    0x40000062u,
    0xFFFFFFFF,
    1,
    0x4C505344);
  EffectSettingCollection_AddFull( /*0x41885f*/
    a1,
    0x52434F43,
    "Command Creature",
    3u,
    0.0,
    0,
    0x40000062u,
    0xFFFFFFFF,
    1,
    0x4C505344);
  EffectSettingCollection_AddFull(a1, 0x58415742, "Bound Axe", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418884*/
  EffectSettingCollection_AddFull(a1, 0x4F425742, "Bound Bow", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x4188a9*/
  EffectSettingCollection_AddFull(a1, 0x41445742, "Bound Dagger", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x4188ce*/
  EffectSettingCollection_AddFull(a1, 0x414D5742, "Bound Mace", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x4188f3*/
  EffectSettingCollection_AddFull(a1, 0x57535742, "Bound Sword", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418918*/
  EffectSettingCollection_AddFull(a1, 0x4F424142, "Bound Boots", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x41893d*/
  EffectSettingCollection_AddFull(a1, 0x55434142, "Bound Cuirass", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418962*/
  EffectSettingCollection_AddFull(a1, 0x41474142, "Bound Gauntlets", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418987*/
  EffectSettingCollection_AddFull(a1, 0x52474142, "Bound Greaves", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x4189ac*/
  EffectSettingCollection_AddFull(a1, 0x45484142, "Bound Helmet", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x4189d1*/
  EffectSettingCollection_AddFull(a1, 0x48534142, "Bound Shield", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x4189f6*/
  EffectSettingCollection_AddFull(a1, 0x31304142, "Bound Armor Extra 01", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418a1b*/
  EffectSettingCollection_AddFull(a1, 0x32304142, "Bound Armor Extra 02", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418a40*/
  EffectSettingCollection_AddFull(a1, 0x33304142, "Bound Armor Extra 03", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418a65*/
  EffectSettingCollection_AddFull(a1, 0x34304142, "Bound Armor Extra 04", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418a8a*/
  EffectSettingCollection_AddFull(a1, 0x35304142, "Bound Armor Extra 05", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418aaf*/
  EffectSettingCollection_AddFull(a1, 0x36304142, "Bound Armor Extra 06", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418ad4*/
  EffectSettingCollection_AddFull(a1, 0x37304142, "Bound Armor Extra 07", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418af9*/
  EffectSettingCollection_AddFull(a1, 0x38304142, "Bound Armor Extra 08", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418b1e*/
  EffectSettingCollection_AddFull(a1, 0x39304142, "Bound Armor Extra 09", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418b43*/
  EffectSettingCollection_AddFull(a1, 0x30314142, "Bound Armor Extra 10", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418b68*/
  EffectSettingCollection_AddFull(a1, 0x31305742, "Bound Weapon Extra 01", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418b8d*/
  EffectSettingCollection_AddFull(a1, 0x32305742, "Bound Weapon Extra 02", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418bb2*/
  EffectSettingCollection_AddFull(a1, 0x33305742, "Bound Weapon Extra 03", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418bd7*/
  EffectSettingCollection_AddFull(a1, 0x34305742, "Bound Weapon Extra 04", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418bfc*/
  EffectSettingCollection_AddFull(a1, 0x35305742, "Bound Weapon Extra 05", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418c21*/
  EffectSettingCollection_AddFull(a1, 0x36305742, "Bound Weapon Extra 06", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418c46*/
  EffectSettingCollection_AddFull(a1, 0x37305742, "Bound Weapon Extra 07", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418c6b*/
  EffectSettingCollection_AddFull(a1, 0x38305742, "Bound Weapon Extra 08", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418c90*/
  EffectSettingCollection_AddFull(a1, 0x39305742, "Bound Weapon Extra 09", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418cb5*/
  EffectSettingCollection_AddFull(a1, 0x30315742, "Bound Weapon Extra 10", 1u, 0.0, 0, 0x10112u, 0xFFFFFFFF, 0); /*0x418cda*/
  qmemcpy(&v2[3], "DSPLRALY", 8); /*0x418ce9*/
  EffectSettingCollection_AddFull(a1, 0x4E525554, "Turn Undead", 1u, 0.0, 0, 0x40000063u, 0x40u, 2, v2[3], v2[4]); /*0x418d09*/
  EffectSettingCollection_AddFull(a1, 0x46464553, "Script Effect", 6u, 0.0, 0, 0x170u, 0xFFFFFFFF, 1, 0x4C505344);// Registers vanilla Script Effect: effect code 'SEFF' (0x46464553), archetype/category 6, flags 0x170, associated dispel code 'DSPL'. /*0x418d33*/
  EffectSettingCollection_AddFull(a1, 0x4854594D, "Summon Mythic Dawn Armor", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418d58*/
  EffectSettingCollection_AddFull(a1, 0x4C48594D, "Summon Mythic Dawn Helm", 1u, 0.0, 0, 0x20112u, 0xFFFFFFFF, 0); /*0x418d7d*/
  return EffectSettingCollection_AddFull(a1, 0x4E414552, "Reanimate", 1u, 0.0, 0, 0x10000360u, 0xFFFFFFFF, 0); /*0x418daa*/
}
