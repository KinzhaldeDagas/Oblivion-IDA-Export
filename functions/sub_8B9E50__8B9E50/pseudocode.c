int __thiscall sub_8B9E50(void *this, int a2)
{
  __m128 *v3; // eax
  __m128 *v4; // esi

  v3 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC0, 0x31); /*0x8b9e88*/
  v3->m128_i16[2] = 0xC0; /*0x8b9e8a*/
  v4 = sub_8B9CA0(v3, a2); /*0x8b9ea8*/
  (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8b9eba*/
  if ( v4->m128_i16[2] ) /*0x8b9ebc*/
  {
    if ( !--v4->m128_i16[3] ) /*0x8b9ec8*/
      (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1); /*0x8b9ed9*/
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8b9ee5*/
}
