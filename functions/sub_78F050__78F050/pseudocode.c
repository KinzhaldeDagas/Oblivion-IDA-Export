// In-place axis-angle rotation helper for branch transforms.
OB_stRotTransform_010201A0 *__thiscall OB_Mat3_AxisAngleInPlace_010201A0(
        OB_stRotTransform_010201A0 *this,
        float a2,
        double a3,
        float a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st3
  double v10; // st5
  double v11; // st3
  double v12; // st6
  OB_stRotTransform_010201A0 *result; // eax
  float v14; // [esp+0h] [ebp-58h]
  float v15; // [esp+0h] [ebp-58h]
  float v16; // [esp+0h] [ebp-58h]
  double v17; // [esp+0h] [ebp-58h]
  double v18; // [esp+8h] [ebp-50h]
  OB_stRotTransform_010201A0 v19; // [esp+10h] [ebp-48h] BYREF
  OB_stRotTransform_010201A0 outTransform; // [esp+34h] [ebp-24h] BYREF
  float v21; // [esp+5Ch] [ebp+4h]
  double v22; // [esp+60h] [ebp+8h]

  v14 = a2 / dbl_A8BA48; /*0x78f061*/
  v21 = sin(v14); /*0x78f06e*/
  v15 = cos(v14); /*0x78f083*/
  v5 = v15; /*0x78f094*/
  v16 = 1.0 - v15; /*0x78f0a3*/
  v6 = *(float *)&a3; /*0x78f0a7*/
  v7 = v16; /*0x78f0ad*/
  v8 = *(float *)&a3 * v16; /*0x78f0b3*/
  v19.m[0] = *(float *)&a3 * v8 + v5; /*0x78f0bb*/
  v9 = *((float *)&a3 + 1); /*0x78f0bf*/
  v17 = *((float *)&a3 + 1) * v8; /*0x78f0c7*/
  v22 = a4 * v21; /*0x78f0d5*/
  v19.m[1] = v22 + v17; /*0x78f0dd*/
  v10 = v8 * a4; /*0x78f0e3*/
  v18 = v9 * v21; /*0x78f0eb*/
  v19.m[2] = v10 - v18; /*0x78f0f1*/
  v19.m[3] = v17 - v22; /*0x78f0fd*/
  v19.m[4] = v9 * (v9 * v7) + v5; /*0x78f10d*/
  v11 = v9 * v7 * a4; /*0x78f113*/
  v12 = v6 * v21; /*0x78f119*/
  v19.m[5] = v12 + v11; /*0x78f11f*/
  v19.m[6] = v10 + v18; /*0x78f12b*/
  v19.m[7] = v11 - v12; /*0x78f133*/
  v19.m[8] = v5 + v7 * a4 * a4; /*0x78f13f*/
  result = OB_stRotTransform_MultiplyCopy_010201A0(&v19, &outTransform, this); /*0x78f143*/
  qmemcpy(this, result, sizeof(OB_stRotTransform_010201A0)); /*0x78f14f*/
  return result; /*0x78f153*/
}
