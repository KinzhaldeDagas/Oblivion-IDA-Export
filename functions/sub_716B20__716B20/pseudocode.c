NiObject *sub_716B20()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u); /*0x716b44*/
  v1 = v0; /*0x716b49*/
  if ( !v0 ) /*0x716b5c*/
    return 0; /*0x716b85*/
  sub_721350(v0); /*0x716b60*/
  v1->__vftable = (NiObjectVtbl *)&NiStringExtraData::`vftable'; /*0x716b65*/
  v1[1].members.m_uiRefCount = 0; /*0x716b6b*/
  return v1; /*0x716b74*/
}
