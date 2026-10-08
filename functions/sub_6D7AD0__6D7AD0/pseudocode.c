NiObject *sub_6D7AD0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x6d7af5*/
  v1 = v0; /*0x6d7afa*/
  if ( !v0 ) /*0x6d7b0b*/
    return 0; /*0x6d7b37*/
  NiObject_constr(v0); /*0x6d7b0f*/
  v1->__vftable = (NiObjectVtbl *)&NiStringPalette::`vftable'; /*0x6d7b14*/
  v1[1].__vftable = 0; /*0x6d7b1a*/
  v1[1].members.m_uiRefCount = 0; /*0x6d7b1d*/
  v1[2].__vftable = 0; /*0x6d7b20*/
  return v1; /*0x6d7b25*/
}
