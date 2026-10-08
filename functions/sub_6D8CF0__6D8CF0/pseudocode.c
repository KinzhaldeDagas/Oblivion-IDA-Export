NiObject *sub_6D8CF0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d8d15*/
  v1 = v0; /*0x6d8d1a*/
  if ( !v0 ) /*0x6d8d2b*/
    return 0; /*0x6d8d5a*/
  NiObject_constr(v0); /*0x6d8d2f*/
  v1->__vftable = (NiObjectVtbl *)&NiRotData::`vftable'; /*0x6d8d34*/
  v1[1].__vftable = 0; /*0x6d8d3a*/
  v1[1].members.m_uiRefCount = 0; /*0x6d8d3d*/
  v1[2].__vftable = 0; /*0x6d8d40*/
  LOBYTE(v1[2].members.m_uiRefCount) = 0; /*0x6d8d43*/
  return v1; /*0x6d8d48*/
}
