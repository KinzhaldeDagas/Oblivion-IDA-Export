float *__thiscall sub_6CB820(float *this, int a2, float *a3)
{
  double v3; // st7
  float v6; // eax
  float v8[4]; // [esp+10h] [ebp-10h] BYREF
  float v9; // [esp+24h] [ebp+4h]
  float v10; // [esp+24h] [ebp+4h]
  float v11; // [esp+24h] [ebp+4h]
  float v12; // [esp+24h] [ebp+4h]

  v3 = flt_A79E10; /*0x6cb828*/
  *(_DWORD *)a2 = dword_B24260; /*0x6cb834*/
  *(_DWORD *)(a2 + 4) = dword_B24264; /*0x6cb83f*/
  *(_DWORD *)(a2 + 8) = dword_B24268; /*0x6cb848*/
  *(float *)(a2 + 0xC) = flt_B3CBA4; /*0x6cb850*/
  *(float *)(a2 + 0x10) = flt_B3CBA8; /*0x6cb85d*/
  *(float *)(a2 + 0x14) = flt_B3CBAC; /*0x6cb866*/
  v6 = flt_B3CBB0; /*0x6cb869*/
  *(float *)(a2 + 0x1C) = v3; /*0x6cb86e*/
  *(float *)(a2 + 0x18) = v6; /*0x6cb871*/
  v9 = -flt_A7DEB4; /*0x6cb87c*/
  if ( v9 == *(this + 7) || v9 == a3[7] ) /*0x6cb8a0*/
  {
    *(float *)(a2 + 0x1C) = v9; /*0x6cb8bf*/
  }
  else
  {
    v10 = a3[7] * *(this + 7); /*0x6cb8ad*/
    sub_471560((float *)a2, v10); /*0x6cb8b8*/
  }
  v11 = -flt_A7DEB4; /*0x6cb8ca*/
  if ( v11 == *(this + 4) || v11 == a3[4] ) /*0x6cb8ee*/
  {
    *(float *)(a2 + 0x10) = v11; /*0x6cb91a*/
  }
  else
  {
    sub_714CF0(this + 3, v8, a3 + 3); /*0x6cb8fe*/
    sub_715340(v8); /*0x6cb907*/
    sub_471430((_DWORD *)a2, v8); /*0x6cb913*/
  }
  v12 = -flt_A7DEB4; /*0x6cb925*/
  if ( v12 == *this || v12 == *a3 ) /*0x6cb947*/
  {
    *(float *)a2 = v12; /*0x6cb97f*/
    return (float *)a2; /*0x6cb981*/
  }
  else
  {
    v8[0] = *a3 + *this; /*0x6cb956*/
    v8[1] = a3[1] + *(this + 1); /*0x6cb960*/
    v8[2] = a3[2] + *(this + 2); /*0x6cb96a*/
    sub_471390((_DWORD *)a2, v8); /*0x6cb96e*/
    return (float *)a2; /*0x6cb974*/
  }
}
