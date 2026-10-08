NiObject *sub_740A10()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x740a34*/
  v1 = v0; /*0x740a39*/
  if ( !v0 ) /*0x740a4c*/
    return 0; /*0x740a7c*/
  sub_721350(v0); /*0x740a50*/
  v1->__vftable = (NiObjectVtbl *)&NiIntegersExtraData::`vftable'; /*0x740a55*/
  v1[2].__vftable = 0; /*0x740a5b*/
  v1[1].members.m_uiRefCount = 0; /*0x740a62*/
  return v1; /*0x740a6b*/
}
