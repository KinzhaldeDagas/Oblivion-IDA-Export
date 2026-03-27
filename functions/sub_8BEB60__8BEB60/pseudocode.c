void __thiscall sub_8BEB60(void *this, int a2)
{
  __m128 *v3; // eax
  _WORD *v4; // edx
  double v5; // st7
  __m128 *v6; // edi
  void (__thiscall *v7)(void *, __m128 *); // edx
  float v8; // [esp+20h] [ebp-44h]
  float v9; // [esp+24h] [ebp-40h]
  float v10; // [esp+28h] [ebp-3Ch]
  float v11; // [esp+2Ch] [ebp-38h]
  __m128 v12; // [esp+34h] [ebp-30h] BYREF
  unsigned int v13; // [esp+60h] [ebp-4h]

  if ( a2 )
  {
    v3 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x26);
    v3->m128_i16[2] = 0x40;
    v11 = *(float *)(a2 + 0x10);
    v4 = *(_WORD **)(a2 + 4);
    v10 = *(float *)(a2 + 0x14);
    v5 = *(float *)(a2 + 0x18);
    v13 = 0;
    v8 = v5;
    v9 = *(float *)(a2 + 0x1C);
    v12.m128_f32[0] = v11;
    v12.m128_f32[1] = v10;
    v12.m128_f32[2] = v8;
    v12.m128_f32[3] = v9;
    v6 = sub_8BE730(v3, v4, &v12, *(float *)(a2 + 0x20), *(float *)(a2 + 0x24));
    v7 = *(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C);
    v13 = 0xFFFFFFFF;
    v7(this, v6);
    if ( v6->m128_i16[2] )
    {
      if ( !--v6->m128_i16[3] )
        (*(void (__thiscall **)(__m128 *, int))v6->m128_i32[0])(v6, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
