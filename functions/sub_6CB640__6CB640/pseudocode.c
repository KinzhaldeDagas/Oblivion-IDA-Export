float *__thiscall sub_6CB640(float *this, int a2, NiPoint3 *a3)
{
  double v3; // st7
  int v6; // eax
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

  v3 = flt_A79E10;
  *(_DWORD *)a2 = dword_B24260;
  *(_DWORD *)(a2 + 4) = dword_B24264;
  *(_DWORD *)(a2 + 8) = dword_B24268;
  *(_DWORD *)(a2 + 0xC) = dword_B3CBA4;
  *(_DWORD *)(a2 + 0x10) = dword_B3CBA8;
  *(_DWORD *)(a2 + 0x14) = dword_B3CBAC;
  v6 = dword_B3CBB0;
  *(float *)(a2 + 0x1C) = v3;
  *(_DWORD *)(a2 + 0x18) = v6;
  v10 = 1.0;
  v16 = -flt_A7DEB4;
  if ( v16 == *(this + 7) || v16 == a3[2].y )
  {
    *(float *)(a2 + 0x1C) = v16;
  }
  else
  {
    v17 = a3[2].y * *(this + 7);
    sub_471560((float *)a2, v17);
    v10 = *(float *)(a2 + 0x1C);
  }
  v18 = -flt_A7DEB4;
  v7 = *(this + 4);
  qmemcpy(&v15.rot.data[1][1], &stru_B26AF0[0xA].unk2C, 0x24u);
  if ( v18 == v7 || v18 == a3[1].y )
  {
    *(float *)(a2 + 0x10) = v18;
  }
  else
  {
    sub_714CF0(this + 3, (float *)&v15, &a3[1].x);
    sub_715340((float *)&v15);
    sub_471430((_DWORD *)a2, (float *)&v15);
    sub_47C600((NiTransform *)(this + 3), (NiTransform *)&v15.rot.data[1][1]);
  }
  v19 = -flt_A7DEB4;
  if ( v19 == *this || v19 == a3->x )
  {
    *(float *)a2 = v19;
    return (float *)a2;
  }
  else
  {
    v8 = sub_7101F0((NiTransform *)&v15.rot.data[1][1], &v15, a3);
    v11 = v8->rot.data[0][0] * v10;
    v12 = v8->rot.data[0][1] * v10;
    v13 = v10 * v8->rot.data[0][2];
    v14[0] = *this + v11;
    v14[1] = *(this + 1) + v12;
    v14[2] = *(this + 2) + v13;
    sub_471390((_DWORD *)a2, v14);
    return (float *)a2;
  }
}
