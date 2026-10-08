void __thiscall sub_8C8B60(void *this, _DWORD *a2)
{
  signed int v3; // esi
  __m128 *v4; // eax
  __m128 *v5; // esi
  char *v6; // [esp+20h] [ebp-18h]

  if ( a2 ) /*0x8c8b8f*/
  {
    v3 = a2[3]; /*0x8c8ba0*/
    v6 = (char *)a2[2]; /*0x8c8ba5*/
    v4 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x24); /*0x8c8bb3*/
    v4->m128_i16[2] = 0x50; /*0x8c8bb5*/
    v5 = sub_917720(v4, v6, v3, 0x10, a2 + 5, SLODWORD(flt_B2FFE4)); /*0x8c8bf3*/
    v5->m128_f32[3] = flt_B2EFC4; /*0x8c8bf5*/
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v5); /*0x8c8c07*/
    if ( v5->m128_i16[2] ) /*0x8c8c09*/
    {
      if ( !--v5->m128_i16[3] ) /*0x8c8c14*/
        (*(void (__thiscall **)(__m128 *, int))v5->m128_i32[0])(v5, 1); /*0x8c8c25*/
    }
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c8c2f*/
  }
}
