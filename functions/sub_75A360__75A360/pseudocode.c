NiObject *sub_75A360()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x24u); /*0x75a363*/
  v1 = v0; /*0x75a368*/
  if ( !v0 ) /*0x75a36f*/
    return 0; /*0x75a391*/
  sub_752BF0(v0); /*0x75a373*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysColorModifier::`vftable'; /*0x75a37a*/
  v1[3].__vftable = 0; /*0x75a380*/
  *(float *)&v1[3].members.m_uiRefCount = 0.0; /*0x75a387*/
  *(float *)&v1[4].__vftable = 0.0; /*0x75a38a*/
  return v1; /*0x75a38f*/
}
