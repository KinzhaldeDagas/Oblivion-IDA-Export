NiObject *sub_727F20()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x727f44*/
  v1 = v0; /*0x727f49*/
  if ( !v0 ) /*0x727f5c*/
    return 0; /*0x727f8c*/
  sub_721350(v0); /*0x727f60*/
  v1->__vftable = (NiObjectVtbl *)&NiBinaryExtraData::`vftable'; /*0x727f65*/
  v1[2].__vftable = 0; /*0x727f6b*/
  v1[1].members.m_uiRefCount = 0; /*0x727f72*/
  return v1; /*0x727f7b*/
}
