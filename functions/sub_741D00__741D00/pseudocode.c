NiObject *sub_741D00()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u); /*0x741d24*/
  v1 = v0; /*0x741d29*/
  if ( !v0 ) /*0x741d3c*/
    return 0; /*0x741d62*/
  sub_721350(v0); /*0x741d40*/
  v1->__vftable = (NiObjectVtbl *)&NiBooleanExtraData::`vftable'; /*0x741d45*/
  LOBYTE(v1[1].members.m_uiRefCount) = 0; /*0x741d4b*/
  return v1; /*0x741d51*/
}
