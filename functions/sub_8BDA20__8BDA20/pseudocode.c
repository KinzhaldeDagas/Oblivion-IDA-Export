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

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x26);
    *(_WORD *)(v3 + 4) = 0x60;
    v7 = *(_DWORD *)(a2 + 8);
    v6 = *(_WORD **)(a2 + 4);
    v10 = 0;
    v4 = (__m128 *)sub_90FA70((_DWORD *)v3, v6, v7, 0);
    v4[5].m128_f32[1] = *(float *)(a2 + 0x34);
    v5 = *(float *)(a2 + 0x38);
    v10 = 0xFFFFFFFF;
    v4[5].m128_f32[2] = v5;
    v4[5].m128_f32[0] = *(float *)(a2 + 0x30);
    v4[5].m128_i8[0xC] = *(_BYTE *)(a2 + 0x3C);
    v4[5].m128_i8[0xD] = *(_BYTE *)(a2 + 0x3D);
    v8.m128_f32[0] = *(float *)(a2 + 0x20);
    v8.m128_f32[1] = *(float *)(a2 + 0x24);
    v8.m128_f32[2] = *(float *)(a2 + 0x28);
    v8.m128_f32[3] = *(float *)(a2 + 0x2C);
    v9.m128_f32[0] = *(float *)(a2 + 0x10);
    v9.m128_f32[1] = *(float *)(a2 + 0x14);
    v9.m128_f32[2] = *(float *)(a2 + 0x18);
    v9.m128_f32[3] = *(float *)(a2 + 0x1C);
    sub_90FAC0(v4, &v9, &v8);
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( v4->m128_i16[2] )
    {
      if ( !--v4->m128_i16[3] )
        (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
