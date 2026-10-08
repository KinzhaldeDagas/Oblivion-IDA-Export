NiObject *sub_6EAE90()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x44u); /*0x6eaeb4*/
  v1 = v0; /*0x6eaeb9*/
  if ( !v0 ) /*0x6eaecc*/
    return 0; /*0x6eaf14*/
  sub_6CC4E0(v0); /*0x6eaed0*/
  v1->__vftable = (NiObjectVtbl *)&NiBlendColorInterpolator::`vftable'; /*0x6eaed5*/
  v1[6].__vftable = (NiObjectVtbl *)dword_B24FD4; /*0x6eaee0*/
  v1[6].members.m_uiRefCount = dword_B24FD8; /*0x6eaee9*/
  v1[7].__vftable = (NiObjectVtbl *)dword_B24FDC; /*0x6eaef2*/
  v1[7].members.m_uiRefCount = dword_B24FE0; /*0x6eaefa*/
  LOBYTE(v1[8].__vftable) = 0; /*0x6eaefd*/
  return v1; /*0x6eaf03*/
}
