NiObject *sub_730920()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u); /*0x730944*/
  v1 = v0; /*0x730949*/
  if ( !v0 ) /*0x73095c*/
    return 0; /*0x730985*/
  sub_721350(v0); /*0x730960*/
  v1->__vftable = (NiObjectVtbl *)&NiIntegerExtraData::`vftable'; /*0x730965*/
  v1[1].members.m_uiRefCount = 0; /*0x73096b*/
  return v1; /*0x730974*/
}
