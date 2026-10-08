void __thiscall sub_89EE00(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  __m128 *v3; // eax
  __m128 v4; // xmm0
  int v5; // edi
  __m128 *v6; // eax

  v1 = (_DWORD *)*(this + 4); /*0x89ee0a*/
  if ( v1 ) /*0x89ee10*/
  {
    v2 = v1[2]; /*0x89ee16*/
    if ( v2 ) /*0x89ee1b*/
      v3 = (__m128 *)(*(_DWORD *)(v2 + 0x50) + 0xD0); /*0x89ee20*/
    else
      v3 = (__m128 *)&unk_BA7A40; /*0x89ee27*/
    v4 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0); /*0x89ee45*/
    if ( (_mm_movemask_ps(_mm_cmplt_ps(v4, _mm_and_ps(_mm_sub_ps(*v3, *(__m128 *)0xBA7A40), *(__m128 *)0xA372D0))) & 7) != 0 ) /*0x89ee5a*/
    {
      if ( v2 ) /*0x89ee5e*/
      {
        bhkRefObject_UpdateHavokObject(v1); /*0x89ee62*/
        sub_8A6410(v2); /*0x89ee69*/
        (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v2 + 0x50) + 0x54))( /*0x89ee7b*/
          *(_DWORD *)(v2 + 0x50),
          &unk_BA7A40);
        bhkRefObject_UpdateHavokObject(v1); /*0x89ee7f*/
      }
    }
    v5 = v1[2]; /*0x89ee89*/
    if ( v5 ) /*0x89ee8e*/
      v6 = (__m128 *)(*(_DWORD *)(v5 + 0x50) + 0xE0); /*0x89ee93*/
    else
      v6 = (__m128 *)&unk_BA7A40; /*0x89ee9a*/
    if ( (_mm_movemask_ps(_mm_cmplt_ps(v4, _mm_and_ps(_mm_sub_ps(*v6, *(__m128 *)0xBA7A40), *(__m128 *)0xA372D0))) & 7) != 0 ) /*0x89eeba*/
    {
      if ( v5 ) /*0x89eebe*/
      {
        bhkRefObject_UpdateHavokObject(v1); /*0x89eec2*/
        sub_8A6410(v5); /*0x89eec9*/
        (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v5 + 0x50) + 0x58))( /*0x89eedb*/
          *(_DWORD *)(v5 + 0x50),
          &unk_BA7A40);
        bhkRefObject_UpdateHavokObject(v1); /*0x89eedf*/
      }
    }
  }
}
