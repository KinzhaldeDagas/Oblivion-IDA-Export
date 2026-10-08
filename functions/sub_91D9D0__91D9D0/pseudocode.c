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

  v2 = 0; /*0x91d9de*/
  v3 = (__m128 *)a2[4]; /*0x91d9e1*/
  v15 = 0; /*0x91d9e6*/
  v16.m128_i32[3] = 0; /*0x91d9ea*/
  do /*0x91da41*/
  {
    v5 = (double)v15; /*0x91d9f0*/
    v6 = *(this + 0xFFFFFFFC); /*0x91d9fc*/
    v13 = unk_BA8454; /*0x91da01*/
    v16.m128_f32[0] = sin(v5); /*0x91da0f*/
    v16.m128_f32[1] = cos(v5); /*0x91da17*/
    v16.m128_f32[2] = sin(v5 * flt_A31E2C); /*0x91da23*/
    v17 = _mm_add_ps(*v3, v16); /*0x91da2f*/
    (*(void (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v6 + 0x1C))( /*0x91da36*/
      v6,
      v3,
      &v17,
      0xFFFF0000,
      v13);
    v15 = ++v2; /*0x91da3d*/
  }
  while ( v2 < 0x14 ); /*0x91da41*/
  v7 = *a2; /*0x91da46*/
  for ( i = *(_DWORD *)(*a2 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x91da4d*/
    v7 = i; /*0x91da50*/
  if ( *(_BYTE *)(v7 + 0x18) == 1 ) /*0x91da5d*/
  {
    v9 = v7 + *(_DWORD *)(v7 + 0x10); /*0x91da62*/
    if ( v9 ) /*0x91da64*/
      *(_WORD *)(v9 + 0x8E) = 0; /*0x91da66*/
  }
  v11 = *(this + 0xFFFFFFFC); /*0x91da7f*/
  v10 = (__m128 *)a2[4]; /*0x91da75*/
  v14 = unk_BA8454; /*0x91da85*/
  v18 = _mm_add_ps(*v10, v10[1]); /*0x91da93*/
  return (*(int (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v11 + 0x1C))( /*0x91da9e*/
           v11,
           v10,
           &v18,
           0xFFFF0000,
           v14);
}
