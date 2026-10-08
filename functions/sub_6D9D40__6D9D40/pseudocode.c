NiObject *sub_6D9D40()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d9d65*/
  v1 = v0; /*0x6d9d6a*/
  if ( !v0 ) /*0x6d9d7b*/
    return 0; /*0x6d9daa*/
  NiObject_constr(v0); /*0x6d9d7f*/
  v1->__vftable = (NiObjectVtbl *)&NiPosData::`vftable'; /*0x6d9d84*/
  v1[1].__vftable = 0; /*0x6d9d8a*/
  v1[1].members.m_uiRefCount = 0; /*0x6d9d8d*/
  v1[2].__vftable = 0; /*0x6d9d90*/
  LOBYTE(v1[2].members.m_uiRefCount) = 0; /*0x6d9d93*/
  return v1; /*0x6d9d98*/
}
