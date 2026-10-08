NiObject *sub_6E3440()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e3465*/
  v1 = v0; /*0x6e346a*/
  if ( !v0 ) /*0x6e347b*/
    return 0; /*0x6e34aa*/
  NiObject_constr(v0); /*0x6e347f*/
  v1->__vftable = (NiObjectVtbl *)&NiFloatData::`vftable'; /*0x6e3484*/
  v1[1].__vftable = 0; /*0x6e348a*/
  v1[1].members.m_uiRefCount = 0; /*0x6e348d*/
  v1[2].__vftable = 0; /*0x6e3490*/
  LOBYTE(v1[2].members.m_uiRefCount) = 0; /*0x6e3493*/
  return v1; /*0x6e3498*/
}
