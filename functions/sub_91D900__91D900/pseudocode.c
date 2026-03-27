int __thiscall sub_91D900(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  __m128 *v3; // edi
  long double v5; // st7
  int v6; // ecx
  int v7; // eax
  __m128 *v8; // eax
  int v9; // ebx
  int v11; // [esp+0h] [ebp-44h]
  int v12; // [esp+0h] [ebp-44h]
  int v13; // [esp+10h] [ebp-34h]
  __m128 v14; // [esp+14h] [ebp-30h]
  __m128 v15; // [esp+24h] [ebp-20h] BYREF
  __m128 v16; // [esp+34h] [ebp-10h] BYREF

  v2 = 0;
  v3 = (__m128 *)a2[3];
  v13 = 0;
  v14.m128_i32[3] = 0;
  do
  {
    v5 = (double)v13;
    v6 = *(this + 0xFFFFFFFC);
    v11 = dword_BA8454;
    v14.m128_f32[0] = sin(v5);
    v14.m128_f32[1] = cos(v5);
    v14.m128_f32[2] = sin(v5 * flt_A31E2C);
    v15 = _mm_add_ps(*v3, v14);
    (*(void (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v6 + 0x1C))(
      v6,
      v3,
      &v15,
      0xFF008000,
      v11);
    v13 = ++v2;
  }
  while ( v2 < 0x14 );
  if ( *(_BYTE *)(*a2 + 0x18) == 1 )
  {
    v7 = *a2 + *(_DWORD *)(*a2 + 0x10);
    if ( v7 )
      *(_WORD *)(v7 + 0x8E) = 0;
  }
  v9 = *(this + 0xFFFFFFFC);
  v8 = (__m128 *)a2[3];
  v12 = dword_BA8454;
  v16 = _mm_add_ps(*v8, v8[1]);
  return (*(int (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v9 + 0x1C))(
           v9,
           v8,
           &v16,
           0xFFFF0000,
           v12);
}
