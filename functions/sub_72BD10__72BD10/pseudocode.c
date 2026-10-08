NiObject *sub_72BD10()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x72bd35*/
  v1 = v0; /*0x72bd3a*/
  if ( !v0 ) /*0x72bd4b*/
    return 0; /*0x72bd8d*/
  NiObject_constr(v0); /*0x72bd4f*/
  v1->__vftable = (NiObjectVtbl *)&NiSkinInstance::`vftable'; /*0x72bd54*/
  v1[1].__vftable = 0; /*0x72bd5a*/
  v1[1].members.m_uiRefCount = 0; /*0x72bd5d*/
  v1[2].__vftable = 0; /*0x72bd60*/
  v1[2].members.m_uiRefCount = 0; /*0x72bd63*/
  v1[3].__vftable = (NiObjectVtbl *)0xFFFFFFFF; /*0x72bd66*/
  v1[3].members.m_uiRefCount = 0; /*0x72bd6d*/
  v1[4].__vftable = 0; /*0x72bd70*/
  v1[4].members.m_uiRefCount = 0; /*0x72bd73*/
  v1[5].__vftable = 0; /*0x72bd76*/
  return v1; /*0x72bd7b*/
}
