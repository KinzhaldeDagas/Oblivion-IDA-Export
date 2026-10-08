void __thiscall sub_8BDA20(void *this, int a2)
{
  int v3; // eax
  __m128 *v4; // edi
  double v5; // st7
  _WORD *v6; // [esp-Ch] [ebp-60h]
  int v7; // [esp-8h] [ebp-5Ch]
  __m128 v8; // [esp+14h] [ebp-40h] BYREF
  __m128 v9; // [esp+24h] [ebp-30h] BYREF
  unsigned int v10; // [esp+50h] [ebp-4h]

  if ( a2 ) /*0x8bda5e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x26); /*0x8bda73*/
    *(_WORD *)(v3 + 4) = 0x60; /*0x8bda75*/
    v7 = *(_DWORD *)(a2 + 8); /*0x8bda87*/
    v6 = *(_WORD **)(a2 + 4); /*0x8bda88*/
    v10 = 0; /*0x8bda8b*/
    v4 = (__m128 *)sub_90FA70((_DWORD *)v3, v6, v7, 0); /*0x8bda9b*/
    v4[5].m128_f32[1] = *(float *)(a2 + 0x34); /*0x8bda9d*/
    v5 = *(float *)(a2 + 0x38); /*0x8bdaa4*/
    v10 = 0xFFFFFFFF; /*0x8bdaa7*/
    v4[5].m128_f32[2] = v5; /*0x8bdaaf*/
    v4[5].m128_f32[0] = *(float *)(a2 + 0x30); /*0x8bdab5*/
    v4[5].m128_i8[0xC] = *(_BYTE *)(a2 + 0x3C); /*0x8bdabb*/
    v4[5].m128_i8[0xD] = *(_BYTE *)(a2 + 0x3D); /*0x8bdac1*/
    v8.m128_f32[0] = *(float *)(a2 + 0x20); /*0x8bdac7*/
    v8.m128_f32[1] = *(float *)(a2 + 0x24); /*0x8bdad3*/
    v8.m128_f32[2] = *(float *)(a2 + 0x28); /*0x8bdadd*/
    v8.m128_f32[3] = *(float *)(a2 + 0x2C); /*0x8bdae4*/
    v9.m128_f32[0] = *(float *)(a2 + 0x10); /*0x8bdaeb*/
    v9.m128_f32[1] = *(float *)(a2 + 0x14); /*0x8bdaf2*/
    v9.m128_f32[2] = *(float *)(a2 + 0x18); /*0x8bdaf9*/
    v9.m128_f32[3] = *(float *)(a2 + 0x1C); /*0x8bdb00*/
    sub_90FAC0(v4, &v9, &v8); /*0x8bdb04*/
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8bdb11*/
    if ( v4->m128_i16[2] ) /*0x8bdb13*/
    {
      if ( !--v4->m128_i16[3] ) /*0x8bdb1f*/
        (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1); /*0x8bdb30*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8bdb3a*/
  }
}
