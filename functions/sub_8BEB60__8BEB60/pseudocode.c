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

  if ( a2 ) /*0x8beb9e*/
  {
    v3 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x26); /*0x8bebb3*/
    v3->m128_i16[2] = 0x40; /*0x8bebb5*/
    v11 = *(float *)(a2 + 0x10); /*0x8bebc2*/
    v4 = *(_WORD **)(a2 + 4); /*0x8bebc6*/
    v10 = *(float *)(a2 + 0x14); /*0x8bebcf*/
    v5 = *(float *)(a2 + 0x18); /*0x8bebd7*/
    v13 = 0; /*0x8bebda*/
    v8 = v5; /*0x8bebe2*/
    v9 = *(float *)(a2 + 0x1C); /*0x8bebe9*/
    v12.m128_f32[0] = v11; /*0x8bebf1*/
    v12.m128_f32[1] = v10; /*0x8bebf9*/
    v12.m128_f32[2] = v8; /*0x8bec01*/
    v12.m128_f32[3] = v9; /*0x8bec09*/
    v6 = sub_8BE730(v3, v4, &v12, *(float *)(a2 + 0x20), *(float *)(a2 + 0x24)); /*0x8bec23*/
    v7 = *(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C); /*0x8bec27*/
    v13 = 0xFFFFFFFF; /*0x8bec2d*/
    v7(this, v6); /*0x8bec35*/
    if ( v6->m128_i16[2] ) /*0x8bec37*/
    {
      if ( !--v6->m128_i16[3] ) /*0x8bec43*/
        (*(void (__thiscall **)(__m128 *, int))v6->m128_i32[0])(v6, 1); /*0x8bec54*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8bec5e*/
  }
}
