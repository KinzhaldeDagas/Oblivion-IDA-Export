NiObject *sub_6DA740()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x20u); /*0x6da764*/
  v1 = v0; /*0x6da769*/
  if ( !v0 ) /*0x6da77c*/
    return 0; /*0x6da7c6*/
  sub_6EC220(v0); /*0x6da780*/
  v1->__vftable = (NiObjectVtbl *)&NiPoint3Interpolator::`vftable'; /*0x6da785*/
  v1[1].members.m_uiRefCount = dword_B24FC8; /*0x6da790*/
  v1[2].__vftable = (NiObjectVtbl *)dword_B24FCC; /*0x6da799*/
  v1[2].members.m_uiRefCount = dword_B24FD0; /*0x6da7a2*/
  v1[3].__vftable = 0; /*0x6da7a5*/
  v1[3].members.m_uiRefCount = 0; /*0x6da7ac*/
  return v1; /*0x6da7b5*/
}
