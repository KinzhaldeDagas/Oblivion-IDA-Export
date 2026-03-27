int __thiscall sub_8B9E50(void *this, int a2)
{
  __m128 *v3; // eax
  __m128 *v4; // esi

  v3 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC0, 0x31);
  v3->m128_i16[2] = 0xC0;
  v4 = sub_8B9CA0(v3, a2);
  (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v4);
  if ( v4->m128_i16[2] )
  {
    if ( !--v4->m128_i16[3] )
      (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1);
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
}
