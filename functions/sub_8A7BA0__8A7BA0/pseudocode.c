void __thiscall sub_8A7BA0(float *this, float *a2)
{
  double v3; // st6
  double v4; // st6
  double v5; // st6
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]
  float v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+0h] [ebp-8h]
  float v10; // [esp+4h] [ebp-4h]
  float v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+4h] [ebp-4h]
  float v13; // [esp+Ch] [ebp+4h]
  float v14; // [esp+Ch] [ebp+4h]
  float v15; // [esp+Ch] [ebp+4h]
  float v16; // [esp+Ch] [ebp+4h]
  float v17; // [esp+Ch] [ebp+4h]
  float v18; // [esp+Ch] [ebp+4h]
  float v19; // [esp+Ch] [ebp+4h]
  float v20; // [esp+Ch] [ebp+4h]
  float v21; // [esp+Ch] [ebp+4h]
  float v22; // [esp+Ch] [ebp+4h]
  float v23; // [esp+Ch] [ebp+4h]
  float v24; // [esp+Ch] [ebp+4h]

  v7 = *(this + 0x28); /*0x8a7bb3*/
  v10 = *(this + 0x20); /*0x8a7bbc*/
  v3 = *a2; /*0x8a7bc2*/
  if ( v3 >= 0.0 ) /*0x8a7bcd*/
  {
    v15 = v3 + v7; /*0x8a7bf8*/
    v16 = v15 - v10; /*0x8a7c04*/
    if ( v16 > 0.0 ) /*0x8a7c13*/
      *a2 = *a2 - v16; /*0x8a7c17*/
  }
  else
  {
    v13 = v3 - v7; /*0x8a7bd2*/
    v14 = v13 + v10; /*0x8a7bde*/
    if ( v14 < 0.0 ) /*0x8a7bed*/
      *a2 = *a2 - v14; /*0x8a7bf1*/
  }
  v8 = *(this + 0x29); /*0x8a7c2a*/
  v11 = *(this + 0x21); /*0x8a7c33*/
  v4 = a2[1]; /*0x8a7c37*/
  if ( v4 >= 0.0 ) /*0x8a7c42*/
  {
    v19 = v4 + v8; /*0x8a7c6f*/
    v20 = v19 - v11; /*0x8a7c7b*/
    if ( v20 > 0.0 ) /*0x8a7c8a*/
      a2[1] = a2[1] - v20; /*0x8a7c8f*/
  }
  else
  {
    v17 = v4 - v8; /*0x8a7c47*/
    v18 = v17 + v11; /*0x8a7c53*/
    if ( v18 < 0.0 ) /*0x8a7c62*/
      a2[1] = a2[1] - v18; /*0x8a7c67*/
  }
  v9 = *(this + 0x2A); /*0x8a7ca3*/
  v12 = *(this + 0x22); /*0x8a7cac*/
  v5 = a2[2]; /*0x8a7cb0*/
  if ( v5 < 0.0 ) /*0x8a7cbb*/
  {
    v21 = v5 - v9; /*0x8a7cc0*/
    v22 = v21 + v12; /*0x8a7ccc*/
    v6 = v22; /*0x8a7cd8*/
    if ( v22 >= 0.0 ) /*0x8a7cdd*/
      return; /*0x8a7cdd*/
    goto LABEL_13; /*0x8a7cdd*/
  }
  v23 = v5 + v9; /*0x8a7cee*/
  v24 = v23 - v12; /*0x8a7cfa*/
  v6 = v24; /*0x8a7d06*/
  if ( v24 > 0.0 ) /*0x8a7d0b*/
LABEL_13:
    a2[2] = a2[2] - v6; /*0x8a7cdf*/
}
