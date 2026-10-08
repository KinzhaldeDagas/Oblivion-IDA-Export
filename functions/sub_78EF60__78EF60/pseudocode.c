// Combined Y/Z branch transform rotation helper.
OB_stRotTransform_010201A0 *__thiscall OB_Mat3_RotateYZ_010201A0(OB_stRotTransform_010201A0 *this, float a2, float a3)
{
  OB_stRotTransform_010201A0 *result; // eax
  float v5; // [esp+0h] [ebp-50h]
  float v6; // [esp+4h] [ebp-4Ch]
  OB_stRotTransform_010201A0 v7; // [esp+8h] [ebp-48h] BYREF
  OB_stRotTransform_010201A0 outTransform; // [esp+2Ch] [ebp-24h] BYREF
  float v9; // [esp+54h] [ebp+4h]
  float v10; // [esp+54h] [ebp+4h]
  float v11; // [esp+54h] [ebp+4h]
  float v12; // [esp+54h] [ebp+4h]
  float v13; // [esp+58h] [ebp+8h]

  v9 = a2 / dbl_A8BA48; /*0x78ef71*/
  v5 = cos(v9); /*0x78ef7e*/
  v10 = sin(v9); /*0x78ef93*/
  v6 = v10; /*0x78ef9b*/
  v11 = a3 / dbl_A8BA48; /*0x78efa9*/
  v13 = cos(v11); /*0x78efb6*/
  v12 = sin(v11); /*0x78efcb*/
  v7.m[0] = v13 * v5; /*0x78eff1*/
  v7.m[1] = v12 * v5; /*0x78effd*/
  v7.m[2] = -v6; /*0x78f009*/
  v7.m[3] = -v12; /*0x78f011*/
  v7.m[4] = v13; /*0x78f017*/
  v7.m[5] = 0.0; /*0x78f01d*/
  v7.m[6] = v13 * v6; /*0x78f023*/
  v7.m[7] = v6 * v12; /*0x78f02b*/
  v7.m[8] = v5; /*0x78f02f*/
  result = OB_stRotTransform_MultiplyCopy_010201A0(&v7, &outTransform, this); /*0x78f033*/
  qmemcpy(this, result, sizeof(OB_stRotTransform_010201A0)); /*0x78f03f*/
  return result; /*0x78f043*/
}
