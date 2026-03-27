int __thiscall sub_91D9D0(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  __m128 *v3; // edi
  long double v5; // st7
  int v6; // ecx
  int v7; // eax
  int i; // ecx
  int v9; // ecx
  __m128 *v10; // eax
  int v11; // ecx
  int v13; // [esp+0h] [ebp-44h]
  int v14; // [esp+0h] [ebp-44h]
  int v15; // [esp+10h] [ebp-34h]
  __m128 v16; // [esp+14h] [ebp-30h]
  __m128 v17; // [esp+24h] [ebp-20h] BYREF
  __m128 v18; // [esp+34h] [ebp-10h] BYREF

  v2 = 0;
  v3 = (__m128 *)a2[4];
  v15 = 0;
  v16.m128_i32[3] = 0;
  do
  {
    v5 = (double)v15;
    v6 = *(this + 0xFFFFFFFC);
    v13 = dword_BA8454;
    v16.m128_f32[0] = sin(v5);
    v16.m128_f32[1] = cos(v5);
    v16.m128_f32[2] = sin(v5 * flt_A31E2C);
    v17 = _mm_add_ps(*v3, v16);
    (*(void (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v6 + 0x1C))(
      v6,
      v3,
      &v17,
      0xFFFF0000,
      v13);
    v15 = ++v2;
  }
  while ( v2 < 0x14 );
  v7 = *a2;
  for ( i = *(_DWORD *)(*a2 + 0xC); i; i = *(_DWORD *)(i + 0xC) )
    v7 = i;
  if ( *(_BYTE *)(v7 + 0x18) == 1 )
  {
    v9 = v7 + *(_DWORD *)(v7 + 0x10);
    if ( v9 )
      *(_WORD *)(v9 + 0x8E) = 0;
  }
  v11 = *(this + 0xFFFFFFFC);
  v10 = (__m128 *)a2[4];
  v14 = dword_BA8454;
  v18 = _mm_add_ps(*v10, v10[1]);
  return (*(int (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v11 + 0x1C))(
           v11,
           v10,
           &v18,
           0xFFFF0000,
           v14);
}
