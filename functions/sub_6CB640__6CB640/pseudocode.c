float *__thiscall sub_6CB640(float *this, int a2, NiPoint3 *a3)
{
  double v3; // st7
  float v6; // eax
  double v7; // st7
  NiTransform *v8; // eax
  float v10; // [esp+10h] [ebp-50h]
  float v11; // [esp+14h] [ebp-4Ch]
  float v12; // [esp+18h] [ebp-48h]
  float v13; // [esp+1Ch] [ebp-44h]
  float v14[3]; // [esp+20h] [ebp-40h] BYREF
  NiTransform v15; // [esp+2Ch] [ebp-34h] BYREF
  float v16; // [esp+64h] [ebp+4h]
  float v17; // [esp+64h] [ebp+4h]
  float v18; // [esp+64h] [ebp+4h]
  float v19; // [esp+64h] [ebp+4h]

  v3 = flt_A79E10; /*0x6cb648*/
  *(_DWORD *)a2 = dword_B24260; /*0x6cb653*/
  *(_DWORD *)(a2 + 4) = dword_B24264; /*0x6cb65e*/
  *(_DWORD *)(a2 + 8) = dword_B24268; /*0x6cb667*/
  *(float *)(a2 + 0xC) = flt_B3CBA4; /*0x6cb66f*/
  *(float *)(a2 + 0x10) = flt_B3CBA8; /*0x6cb678*/
  *(float *)(a2 + 0x14) = flt_B3CBAC; /*0x6cb681*/
  v6 = flt_B3CBB0; /*0x6cb684*/
  *(float *)(a2 + 0x1C) = v3; /*0x6cb689*/
  *(float *)(a2 + 0x18) = v6; /*0x6cb68e*/
  v10 = 1.0; /*0x6cb691*/
  v16 = -flt_A7DEB4; /*0x6cb69e*/
  if ( v16 == *(this + 7) || v16 == a3[2].y ) /*0x6cb6c6*/
  {
    *(float *)(a2 + 0x1C) = v16; /*0x6cb6ec*/
  }
  else
  {
    v17 = a3[2].y * *(this + 7); /*0x6cb6d3*/
    sub_471560((float *)a2, v17); /*0x6cb6de*/
    v10 = *(float *)(a2 + 0x1C); /*0x6cb6e6*/
  }
  v18 = -flt_A7DEB4; /*0x6cb6fd*/
  v7 = *(this + 4); /*0x6cb706*/
  qmemcpy(&v15.rot.data[1][1], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6cb711*/
  if ( v18 == v7 || v18 == a3[1].y ) /*0x6cb730*/
  {
    *(float *)(a2 + 0x10) = v18; /*0x6cb76a*/
  }
  else
  {
    sub_714CF0(this + 3, (float *)&v15, &a3[1].x); /*0x6cb742*/
    sub_715340((float *)&v15); /*0x6cb74b*/
    sub_471430((_DWORD *)a2, (float *)&v15); /*0x6cb757*/
    sub_47C600((NiTransform *)(this + 3), (NiTransform *)&v15.rot.data[1][1]); /*0x6cb763*/
  }
  v19 = -flt_A7DEB4; /*0x6cb776*/
  if ( v19 == *this || v19 == a3->x ) /*0x6cb799*/
  {
    *(float *)a2 = v19; /*0x6cb805*/
    return (float *)a2; /*0x6cb808*/
  }
  else
  {
    v8 = sub_7101F0((NiTransform *)&v15.rot.data[1][1], &v15, a3); /*0x6cb7a7*/
    v11 = v8->rot.data[0][0] * v10; /*0x6cb7ba*/
    v12 = v8->rot.data[0][1] * v10; /*0x6cb7c3*/
    v13 = v10 * v8->rot.data[0][2]; /*0x6cb7cf*/
    v14[0] = *this + v11; /*0x6cb7da*/
    v14[1] = *(this + 1) + v12; /*0x6cb7e5*/
    v14[2] = *(this + 2) + v13; /*0x6cb7f0*/
    sub_471390((_DWORD *)a2, v14); /*0x6cb7f4*/
    return (float *)a2; /*0x6cb7fb*/
  }
}
