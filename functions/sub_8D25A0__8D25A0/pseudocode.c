void __thiscall sub_8D25A0(void *this, float *a2)
{
  signed int v3; // ebp
  __m128 *v4; // esi
  _DWORD *v5; // [esp+20h] [ebp-18h]

  if ( a2 )
  {
    v3 = *((_DWORD *)a2 + 3);
    v5 = *((_DWORD **)a2 + 2);
    v4 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x24);
    v4->m128_i16[2] = 0x50;
    sub_917720(v4, v5, v3, 0x10, (_DWORD *)a2 + 5, SLODWORD(flt_B2FFE4));
    v4->m128_i32[0] = (__int32)&hkCharControllerShape::`vftable';
    v4->m128_f32[3] = a2[1];
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( v4->m128_i16[2] )
    {
      if ( !--v4->m128_i16[3] )
        (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1);
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
