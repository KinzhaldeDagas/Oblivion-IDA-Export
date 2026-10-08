int __thiscall sub_8DEC30(float *this, int a2, float *a3)
{
  double v4; // st7
  float *v5; // edi
  int v6; // ebp
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  int i; // eax
  int v11; // edx
  int j; // ebp
  _DWORD *v13; // ecx
  int result; // eax
  float v15; // [esp+18h] [ebp+8h]

  v4 = a3[1] - *a3; /*0x8dec3c*/
  *(float *)(a2 + 0x160) = *(this + 2); /*0x8dec43*/
  v5 = (float *)(a2 + 0x160); /*0x8dec4f*/
  v6 = 0; /*0x8dec55*/
  *(float *)(a2 + 0x164) = v4 + *(this + 2); /*0x8dec57*/
  *(float *)(a2 + 0x168) = v4; /*0x8dec5a*/
  *(float *)(a2 + 0x16C) = fConstant_1 / v4; /*0x8dec65*/
  v7 = *(_DWORD *)(a2 + 0x3C); /*0x8dec68*/
  v8 = *(float *)(a2 + 0x160) - *a3; /*0x8dec71*/
  v15 = v8; /*0x8dec73*/
  *(float *)(a2 + 0xC) = v8 + *(float *)(a2 + 0xC); /*0x8dec7a*/
  *(float *)(a2 + 0x10) = v15 + *(float *)(a2 + 0x10); /*0x8dec84*/
  *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0x160); /*0x8dec89*/
  *(_DWORD *)(a2 + 0x18) = *(_DWORD *)(a2 + 0x164); /*0x8dec8f*/
  if ( v7 > 0 ) /*0x8dec92*/
  {
    do /*0x8decc4*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v6); /*0x8dec97*/
      for ( i = 0; i < *(_DWORD *)(v9 + 0x38); *(float *)(v11 + 0x5C) = v15 + *(float *)(v11 + 0x5C) ) /*0x8deca1*/
        v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i++) + 0x50); /*0x8decad*/
      ++v6; /*0x8decc1*/
    }
    while ( v6 < *(_DWORD *)(a2 + 0x3C) ); /*0x8decc4*/
  }
  for ( j = 0; j < *(_DWORD *)(a2 + 0x3C); ++j ) /*0x8deccd*/
    sub_8E77F0(*(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * j), a3[1], *(_DWORD *)(a2 + 0x164), *(_DWORD **)(a2 + 0x74)); /*0x8dece3*/
  (*(void (__thiscall **)(_DWORD, int, float))(**(_DWORD **)(a2 + 8) + 0x20))( /*0x8decfe*/
    *(_DWORD *)(a2 + 8),
    a2,
    COERCE_FLOAT(LODWORD(v15)));
  *a3 = *v5; /*0x8ded05*/
  a3[1] = *(float *)(a2 + 0x164); /*0x8ded0a*/
  a3[2] = *(float *)(a2 + 0x168); /*0x8ded10*/
  a3[3] = *(float *)(a2 + 0x16C); /*0x8ded16*/
  v13 = (_DWORD *)(*(_DWORD *)(a2 + 0x74) + 0x10); /*0x8ded1e*/
  *v13 = *(_DWORD *)v5; /*0x8ded21*/
  v13[1] = *(_DWORD *)(a2 + 0x164); /*0x8ded26*/
  v13[2] = *(_DWORD *)(a2 + 0x168); /*0x8ded2c*/
  result = *(_DWORD *)(a2 + 0x16C); /*0x8ded2f*/
  v13[3] = result; /*0x8ded35*/
  return result; /*0x8ded32*/
}
