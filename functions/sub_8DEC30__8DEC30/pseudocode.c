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

  v4 = a3[1] - *a3;
  *(float *)(a2 + 0x160) = *(this + 2);
  v5 = (float *)(a2 + 0x160);
  v6 = 0;
  *(float *)(a2 + 0x164) = v4 + *(this + 2);
  *(float *)(a2 + 0x168) = v4;
  *(float *)(a2 + 0x16C) = fConstant_1 / v4;
  v7 = *(_DWORD *)(a2 + 0x3C);
  v8 = *(float *)(a2 + 0x160) - *a3;
  v15 = v8;
  *(float *)(a2 + 0xC) = v8 + *(float *)(a2 + 0xC);
  *(float *)(a2 + 0x10) = v15 + *(float *)(a2 + 0x10);
  *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0x160);
  *(_DWORD *)(a2 + 0x18) = *(_DWORD *)(a2 + 0x164);
  if ( v7 > 0 )
  {
    do
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v6);
      for ( i = 0; i < *(_DWORD *)(v9 + 0x38); *(float *)(v11 + 0x5C) = v15 + *(float *)(v11 + 0x5C) )
        v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i++) + 0x50);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 0x3C) );
  }
  for ( j = 0; j < *(_DWORD *)(a2 + 0x3C); ++j )
    sub_8E77F0(*(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * j), a3[1], *(_DWORD *)(a2 + 0x164), *(_DWORD **)(a2 + 0x74));
  (*(void (__thiscall **)(_DWORD, int, float))(**(_DWORD **)(a2 + 8) + 0x20))(
    *(_DWORD *)(a2 + 8),
    a2,
    COERCE_FLOAT(LODWORD(v15)));
  *a3 = *v5;
  a3[1] = *(float *)(a2 + 0x164);
  a3[2] = *(float *)(a2 + 0x168);
  a3[3] = *(float *)(a2 + 0x16C);
  v13 = (_DWORD *)(*(_DWORD *)(a2 + 0x74) + 0x10);
  *v13 = *(_DWORD *)v5;
  v13[1] = *(_DWORD *)(a2 + 0x164);
  v13[2] = *(_DWORD *)(a2 + 0x168);
  result = *(_DWORD *)(a2 + 0x16C);
  v13[3] = result;
  return result;
}
