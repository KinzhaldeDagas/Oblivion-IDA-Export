void __thiscall sub_89EE00(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  __m128 *v3; // eax
  __m128 v4; // xmm0
  int v5; // edi
  __m128 *v6; // eax

  v1 = (_DWORD *)*(this + 4);
  if ( v1 )
  {
    v2 = v1[2];
    if ( v2 )
      v3 = (__m128 *)(*(_DWORD *)(v2 + 0x50) + 0xD0);
    else
      v3 = (__m128 *)&stru_BA7A40;
    v4 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0);
    if ( (_mm_movemask_ps(_mm_cmplt_ps(v4, _mm_and_ps(_mm_sub_ps(*v3, *(__m128 *)0xBA7A40), *(__m128 *)0xA372D0))) & 7) != 0 )
    {
      if ( v2 )
      {
        sub_89F570(v1);
        sub_8A6410(v2);
        (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v2 + 0x50) + 0x54))(
          *(_DWORD *)(v2 + 0x50),
          &stru_BA7A40);
        sub_89F570(v1);
      }
    }
    v5 = v1[2];
    if ( v5 )
      v6 = (__m128 *)(*(_DWORD *)(v5 + 0x50) + 0xE0);
    else
      v6 = (__m128 *)&stru_BA7A40;
    if ( (_mm_movemask_ps(_mm_cmplt_ps(v4, _mm_and_ps(_mm_sub_ps(*v6, *(__m128 *)0xBA7A40), *(__m128 *)0xA372D0))) & 7) != 0 )
    {
      if ( v5 )
      {
        sub_89F570(v1);
        sub_8A6410(v5);
        (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v5 + 0x50) + 0x58))(
          *(_DWORD *)(v5 + 0x50),
          &stru_BA7A40);
        sub_89F570(v1);
      }
    }
  }
}
