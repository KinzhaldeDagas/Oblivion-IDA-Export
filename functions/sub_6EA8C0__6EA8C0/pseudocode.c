NiObject *sub_6EA8C0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x40u); /*0x6ea8e4*/
  v1 = v0; /*0x6ea8e9*/
  if ( !v0 ) /*0x6ea8fc*/
    return 0; /*0x6ea93c*/
  sub_6CC4E0(v0); /*0x6ea900*/
  v1->__vftable = (NiObjectVtbl *)&NiBlendPoint3Interpolator::`vftable'; /*0x6ea905*/
  v1[6].__vftable = (NiObjectVtbl *)dword_B24FC8; /*0x6ea910*/
  v1[6].members.m_uiRefCount = dword_B24FCC; /*0x6ea919*/
  v1[7].__vftable = (NiObjectVtbl *)dword_B24FD0; /*0x6ea922*/
  LOBYTE(v1[7].members.m_uiRefCount) = 0; /*0x6ea925*/
  return v1; /*0x6ea92b*/
}
