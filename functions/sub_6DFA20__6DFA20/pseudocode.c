void __thiscall sub_6DFA20(_DWORD *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  _DWORD **v4; // ebx

  v2 = arg0; /*0x6dfa23*/
  sub_700750((NiTriBasedGeomData *)this, (int)arg0); /*0x6dfa2a*/
  NiTMap_GetAt(*v2, (int)this, &arg0); /*0x6dfa37*/
  v4 = arg0; /*0x6dfa3f*/
  if ( NiTMap_GetAt(*v2, *(this + 4), &arg0) ) /*0x6dfa4b*/
    v4[4] = arg0; /*0x6dfa5a*/
  else
    v4[4] = (_DWORD *)*(this + 4); /*0x6dfa66*/
}
