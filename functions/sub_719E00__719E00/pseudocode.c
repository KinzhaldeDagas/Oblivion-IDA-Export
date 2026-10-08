NiObject *sub_719E00()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x50u); /*0x719e25*/
  v1 = v0; /*0x719e2a*/
  if ( !v0 ) /*0x719e3b*/
    return 0; /*0x719e68*/
  sub_732DD0(v0); /*0x719e3f*/
  v1->__vftable = (NiObjectVtbl *)&NiTriStripsData::`vftable'; /*0x719e44*/
  LOWORD(v1[8].members.m_uiRefCount) = 0; /*0x719e4a*/
  v1[9].__vftable = 0; /*0x719e4e*/
  v1[9].members.m_uiRefCount = 0; /*0x719e51*/
  return v1; /*0x719e56*/
}
