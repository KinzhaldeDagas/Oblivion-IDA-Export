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

  v2 = 0; /*0x91d90e*/
  v3 = (__m128 *)a2[3]; /*0x91d911*/
  v13 = 0; /*0x91d916*/
  v14.m128_i32[3] = 0; /*0x91d91a*/
  do /*0x91d971*/
  {
    v5 = (double)v13; /*0x91d920*/
    v6 = *(this + 0xFFFFFFFC); /*0x91d92c*/
    v11 = unk_BA8454; /*0x91d931*/
    v14.m128_f32[0] = sin(v5); /*0x91d93f*/
    v14.m128_f32[1] = cos(v5); /*0x91d947*/
    v14.m128_f32[2] = sin(v5 * flt_A31E2C); /*0x91d953*/
    v15 = _mm_add_ps(*v3, v14); /*0x91d95f*/
    (*(void (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v6 + 0x1C))( /*0x91d966*/
      v6,
      v3,
      &v15,
      0xFF008000,
      v11);
    v13 = ++v2; /*0x91d96d*/
  }
  while ( v2 < 0x14 ); /*0x91d971*/
  if ( *(_BYTE *)(*a2 + 0x18) == 1 ) /*0x91d97c*/
  {
    v7 = *a2 + *(_DWORD *)(*a2 + 0x10); /*0x91d981*/
    if ( v7 ) /*0x91d983*/
      *(_WORD *)(v7 + 0x8E) = 0; /*0x91d985*/
  }
  v9 = *(this + 0xFFFFFFFC); /*0x91d99e*/
  v8 = (__m128 *)a2[3]; /*0x91d994*/
  v12 = unk_BA8454; /*0x91d9a4*/
  v16 = _mm_add_ps(*v8, v8[1]); /*0x91d9b2*/
  return (*(int (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v9 + 0x1C))( /*0x91d9bf*/
           v9,
           v8,
           &v16,
           0xFFFF0000,
           v12);
}
