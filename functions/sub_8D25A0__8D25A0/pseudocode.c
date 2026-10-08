void __thiscall sub_8D25A0(void *this, float *a2)
{
  signed int v3; // ebp
  __m128 *v4; // esi
  char *v5; // [esp+20h] [ebp-18h]

  if ( a2 ) /*0x8d25cf*/
  {
    v3 = *((_DWORD *)a2 + 3); /*0x8d25e0*/
    v5 = *((char **)a2 + 2); /*0x8d25e5*/
    v4 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x24); /*0x8d25f0*/
    v4->m128_i16[2] = 0x50; /*0x8d25f2*/
    sub_917720(v4, v5, v3, 0x10, (_DWORD *)a2 + 5, SLODWORD(flt_B2FFE4)); /*0x8d262a*/
    v4->m128_i32[0] = (__int32)&hkCharControllerShape::`vftable'; /*0x8d262f*/
    v4->m128_f32[3] = a2[1]; /*0x8d2638*/
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8d264a*/
    if ( v4->m128_i16[2] ) /*0x8d264c*/
    {
      if ( !--v4->m128_i16[3] ) /*0x8d2657*/
        (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1); /*0x8d2668*/
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8d2672*/
  }
}
