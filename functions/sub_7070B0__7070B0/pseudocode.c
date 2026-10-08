double __cdecl sub_7070B0(float a1, float a2)
{
  double result; // st7
  long double v3; // st6
  double v4; // st7
  double v5; // st4
  double v6; // st4
  double v7; // st3
  double v8; // st3
  bool v9; // c0
  double v10; // st7
  double v11; // st7
  double v12; // st4
  float v13; // [esp+0h] [ebp-4h]
  float v14; // [esp+Ch] [ebp+8h]
  float v15; // [esp+Ch] [ebp+8h]
  float v16; // [esp+Ch] [ebp+8h]
  float v17; // [esp+Ch] [ebp+8h]
  float v18; // [esp+Ch] [ebp+8h]
  float v19; // [esp+Ch] [ebp+8h]
  float v20; // [esp+Ch] [ebp+8h]
  float v21; // [esp+Ch] [ebp+8h]
  float v22; // [esp+Ch] [ebp+8h]
  float v23; // [esp+Ch] [ebp+8h]
  float v24; // [esp+Ch] [ebp+8h]
  float v25; // [esp+Ch] [ebp+8h]
  float v26; // [esp+Ch] [ebp+8h]
  float v28; // [esp+Ch] [ebp+8h]

  result = 0.0; /*0x7070b1*/
  v3 = a2; /*0x7070bd*/
  if ( a2 != 0.0 || 0.0 != a1 ) /*0x7070d1*/
  {
    v4 = a1; /*0x7070d9*/
    v13 = 0.0; /*0x7070db*/
    v14 = fabs(a1); /*0x7070e2*/
    v5 = v14; /*0x7070e6*/
    v15 = fabs(v3); /*0x7070ee*/
    if ( v15 >= v5 ) /*0x7070fd*/
    {
      v28 = v4 / v3; /*0x7071ec*/
      v6 = v28; /*0x7071fa*/
      if ( v28 != 0.0 ) /*0x7071ff*/
        goto LABEL_7; /*0x7071ff*/
      v11 = 0.0; /*0x707207*/
      if ( v3 <= 0.0 ) /*0x707210*/
        return unk_B3F9A4; /*0x707214*/
      return (float)v11; /*0x70721e*/
    }
    else
    {
      v16 = v3 / v4; /*0x707107*/
      v6 = v16; /*0x70710b*/
      if ( v16 > 0.0 ) /*0x707116*/
      {
        v7 = unk_B3F99C; /*0x70711c*/
LABEL_6:
        v13 = v7; /*0x707122*/
LABEL_7:
        v17 = v6 * v6; /*0x707125*/
        v8 = v17; /*0x70712d*/
        v18 = dbl_A7DED8 * v17; /*0x707139*/
        v19 = v18 - dbl_A7DED0; /*0x707147*/
        v20 = v19 * v8; /*0x707151*/
        v21 = v20 + dbl_A7DEC8; /*0x70715f*/
        v22 = v21 * v8; /*0x707169*/
        v23 = v22 - dbl_A7DEC0; /*0x707177*/
        v24 = v8 * v23; /*0x70717f*/
        v25 = v24 + dbl_A7DEB8; /*0x70718d*/
        v26 = v6 * v25; /*0x707195*/
        if ( v13 != 0.0 ) /*0x7071a7*/
          v26 = v13 - v26; /*0x7071ad*/
        v12 = unk_B3F9A4; /*0x70722a*/
        if ( v4 < 0.0 ) /*0x707233*/
        {
          if ( v3 < 0.0 ) /*0x70723e*/
            v26 = v26 - unk_B3F9A4; /*0x707246*/
          v12 = unk_B3F9A4; /*0x70724a*/
        }
        if ( a1 <= 0.0 || v3 >= 0.0 ) /*0x70725e*/
          return v26; /*0x707274*/
        return (float)(v12 + v26); /*0x70726d*/
      }
      if ( v6 < 0.0 ) /*0x7071ba*/
      {
        v7 = -unk_B3F99C; /*0x7071c2*/
        goto LABEL_6; /*0x7071c4*/
      }
      v9 = v4 > 0.0; /*0x7071cd*/
      v10 = unk_B3F99C; /*0x7071d1*/
      if ( !v9 ) /*0x7071da*/
        return (float)-v10; /*0x7071dc*/
      return (float)v10; /*0x7071e2*/
    }
  }
  return result; /*0x7070d8*/
}
