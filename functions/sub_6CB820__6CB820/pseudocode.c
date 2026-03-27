float *__thiscall sub_6CB820(float *this, int a2, float *a3)
{
  double v3; // st7
  int v6; // eax
  float v8[4]; // [esp+10h] [ebp-10h] BYREF
  float v9; // [esp+24h] [ebp+4h]
  float v10; // [esp+24h] [ebp+4h]
  float v11; // [esp+24h] [ebp+4h]
  float v12; // [esp+24h] [ebp+4h]

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
  v9 = -flt_A7DEB4;
  if ( v9 == *(this + 7) || v9 == a3[7] )
  {
    *(float *)(a2 + 0x1C) = v9;
  }
  else
  {
    v10 = a3[7] * *(this + 7);
    sub_471560((float *)a2, v10);
  }
  v11 = -flt_A7DEB4;
  if ( v11 == *(this + 4) || v11 == a3[4] )
  {
    *(float *)(a2 + 0x10) = v11;
  }
  else
  {
    sub_714CF0(this + 3, v8, a3 + 3);
    sub_715340(v8);
    sub_471430((_DWORD *)a2, v8);
  }
  v12 = -flt_A7DEB4;
  if ( v12 == *this || v12 == *a3 )
  {
    *(float *)a2 = v12;
    return (float *)a2;
  }
  else
  {
    v8[0] = *a3 + *this;
    v8[1] = a3[1] + *(this + 1);
    v8[2] = a3[2] + *(this + 2);
    sub_471390((_DWORD *)a2, v8);
    return (float *)a2;
  }
}
