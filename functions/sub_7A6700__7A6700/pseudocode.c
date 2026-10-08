// Oblivion legacy unit-billboard builder: derives azimuth from cameraDirection XY, rotates four canonical corners, and writes 12 static floats.
void __cdecl OB_CSimpleBillboard_ComputeUnitBillboard_010201A0(const float *cameraDirection)
{
  double v1; // st7
  __int16 v2; // fps
  int v3; // eax
  double v4; // st6
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st3
  double v9; // st5
  double v10; // st6
  double v11; // st2
  double v12; // st1
  double v13; // st2
  double v14; // st2
  double v15; // st2
  double v16; // st1
  double v17; // st0
  float v18; // [esp+4h] [ebp-68h]
  float angleDegrees; // [esp+4h] [ebp-68h]
  double v20; // [esp+4h] [ebp-68h]
  double v21; // [esp+Ch] [ebp-60h]
  double v22; // [esp+14h] [ebp-58h]
  double v23; // [esp+14h] [ebp-58h]
  double v24; // [esp+14h] [ebp-58h]
  double v25; // [esp+1Ch] [ebp-50h]
  double v26; // [esp+24h] [ebp-48h]
  double v27; // [esp+2Ch] [ebp-40h]
  double v28; // [esp+2Ch] [ebp-40h]
  double v29; // [esp+34h] [ebp-38h]
  double v30; // [esp+34h] [ebp-38h]
  float v31; // [esp+3Ch] [ebp-30h]
  float v32; // [esp+3Ch] [ebp-30h]
  float v33; // [esp+3Ch] [ebp-30h]
  float v34; // [esp+3Ch] [ebp-30h]
  float v35; // [esp+40h] [ebp-2Ch]
  float v36; // [esp+40h] [ebp-2Ch]
  float v37; // [esp+40h] [ebp-2Ch]
  float v38; // [esp+40h] [ebp-2Ch]
  float v39; // [esp+44h] [ebp-28h]
  float v40; // [esp+44h] [ebp-28h]
  float v41; // [esp+44h] [ebp-28h]
  float v42; // [esp+44h] [ebp-28h]
  OB_stRotTransform_010201A0 v43; // [esp+48h] [ebp-24h] BYREF

  v1 = cameraDirection[1]; /*0x7a6719*/
  sub_98598A(*cameraDirection, v1, v2); /*0x7a6721*/
  v18 = v1; /*0x7a6726*/
  v3 = unk_B42A80; /*0x7a672c*/
  angleDegrees = v18 * dbl_A8BA48; /*0x7a6739*/
  v4 = kHeadBodyNormalMatchRadius; /*0x7a673e*/
  if ( (unk_B42A80 & 1) == 0 ) /*0x7a6746*/
  {
    v3 |= 1u; /*0x7a674a*/
    unk_B42A74 = 0.0; /*0x7a674d*/
    unk_B42A80 = v3; /*0x7a6753*/
    unk_B42A78 = v4; /*0x7a675a*/
    unk_B42A7C = 1.0; /*0x7a6762*/
  }
  v5 = flt_A45E4C; /*0x7a6770*/
  if ( (v3 & 2) == 0 ) /*0x7a6776*/
  {
    v3 |= 2u; /*0x7a677a*/
    unk_B42A68 = 0.0; /*0x7a677d*/
    unk_B42A80 = v3; /*0x7a6783*/
    unk_B42A6C = v5; /*0x7a678a*/
    unk_B42A70 = 1.0; /*0x7a6792*/
  }
  if ( (v3 & 4) == 0 ) /*0x7a679c*/
  {
    v3 |= 4u; /*0x7a67a0*/
    unk_B42A5C = 0.0; /*0x7a67a3*/
    unk_B42A80 = v3; /*0x7a67a9*/
    unk_B42A64 = 0.0; /*0x7a67ae*/
    unk_B42A60 = v5; /*0x7a67b6*/
  }
  if ( (v3 & 8) == 0 ) /*0x7a67c2*/
  {
    v3 |= 8u; /*0x7a67ca*/
    unk_B42A50 = 0.0; /*0x7a67cd*/
    unk_B42A80 = v3; /*0x7a67d3*/
    unk_B42A58 = 0.0; /*0x7a67d8*/
    unk_B42A54 = v4; /*0x7a67e0*/
  }
  if ( (v3 & 0x10) == 0 ) /*0x7a67ea*/
    unk_B42A80 = v3 | 0x10; /*0x7a67ef*/
  unk_B42A20 = unk_B42A74; /*0x7a67fb*/
  unk_B42A24 = unk_B42A78; /*0x7a680b*/
  unk_B42A28 = unk_B42A7C; /*0x7a6817*/
  unk_B42A2C = unk_B42A68; /*0x7a6823*/
  unk_B42A30 = unk_B42A6C; /*0x7a682f*/
  unk_B42A34 = unk_B42A70; /*0x7a683b*/
  unk_B42A38 = unk_B42A5C; /*0x7a6847*/
  unk_B42A3C = unk_B42A60; /*0x7a6853*/
  unk_B42A40 = unk_B42A64; /*0x7a685f*/
  unk_B42A44 = unk_B42A50; /*0x7a686b*/
  unk_B42A48 = unk_B42A54; /*0x7a6877*/
  unk_B42A4C = unk_B42A58; /*0x7a6883*/
  v43.m[0] = 1.0; /*0x7a6889*/
  v43.m[4] = 1.0; /*0x7a688d*/
  v43.m[8] = 1.0; /*0x7a6891*/
  v43.m[1] = 0.0; /*0x7a6895*/
  v43.m[2] = 0.0; /*0x7a6899*/
  v43.m[3] = 0.0; /*0x7a689d*/
  v43.m[5] = 0.0; /*0x7a68a1*/
  v43.m[6] = 0.0; /*0x7a68a5*/
  v43.m[7] = 0.0; /*0x7a68a9*/
  OB_stRotTransform_RotateZDegrees_010201A0(&v43, angleDegrees); /*0x7a68b4*/
  v6 = v43.m[3]; /*0x7a68b9*/
  v27 = unk_B42A78; /*0x7a68c3*/
  v29 = unk_B42A74; /*0x7a68cd*/
  v7 = v43.m[0]; /*0x7a68d1*/
  v8 = v43.m[6]; /*0x7a68d5*/
  v22 = unk_B42A7C; /*0x7a68df*/
  v31 = v22 * v43.m[6] + v43.m[0] * v29 + v43.m[3] * v27; /*0x7a68f3*/
  v20 = v43.m[7]; /*0x7a6903*/
  v9 = v43.m[1]; /*0x7a690e*/
  v10 = v43.m[4]; /*0x7a691b*/
  v35 = v27 * v43.m[4] + v29 * v43.m[1] + v43.m[7] * v22; /*0x7a691d*/
  v26 = v43.m[5]; /*0x7a6925*/
  v25 = v43.m[2]; /*0x7a692d*/
  v21 = v43.m[8]; /*0x7a6935*/
  v11 = v43.m[2] * v29 + v43.m[5] * v27; /*0x7a6943*/
  v12 = v43.m[8] * v22; /*0x7a694d*/
  CSimpleBillboard__s_unitBillboardCoords[0] = v31; /*0x7a6955*/
  flt_B2BA80 = v35; /*0x7a695a*/
  v39 = v11 + v12; /*0x7a6962*/
  v13 = unk_B42A6C; /*0x7a696a*/
  flt_B2BA84 = v39; /*0x7a6970*/
  v28 = unk_B42A68; /*0x7a6980*/
  v23 = unk_B42A70; /*0x7a698a*/
  v32 = v13 * v6 + v28 * v7 + v8 * v23; /*0x7a699e*/
  flt_B2BA88 = v32; /*0x7a69a8*/
  v36 = v9 * v28 + v10 * v13 + v20 * v23; /*0x7a69c2*/
  flt_B2BA8C = v36; /*0x7a69ce*/
  v40 = v25 * v28 + v26 * v13 + v21 * v23; /*0x7a69ec*/
  v14 = unk_B42A60; /*0x7a69f4*/
  flt_B2BA90 = v40; /*0x7a69fa*/
  v30 = unk_B42A5C; /*0x7a6a0a*/
  v24 = unk_B42A64; /*0x7a6a14*/
  v33 = v14 * v6 + v30 * v7 + v8 * v24; /*0x7a6a28*/
  v37 = v9 * v30 + v10 * v14 + v20 * v24; /*0x7a6a47*/
  v41 = v25 * v30 + v26 * v14 + v21 * v24; /*0x7a6a67*/
  v15 = unk_B42A54; /*0x7a6a6b*/
  v16 = unk_B42A50; /*0x7a6a75*/
  v17 = unk_B42A58; /*0x7a6a7f*/
  flt_B2BA94 = v33; /*0x7a6a85*/
  flt_B2BA98 = v37; /*0x7a6a8c*/
  flt_B2BA9C = v41; /*0x7a6a94*/
  v34 = v7 * v16 + v6 * v15 + v8 * v17; /*0x7a6aa8*/
  flt_B2BAA0 = v34; /*0x7a6ab0*/
  v38 = v9 * v16 + v10 * v15 + v20 * v17; /*0x7a6ac6*/
  flt_B2BAA4 = v38; /*0x7a6ad2*/
  v42 = v15 * v26 + v16 * v25 + v17 * v21; /*0x7a6aea*/
  flt_B2BAA8 = v42; /*0x7a6af2*/
}
