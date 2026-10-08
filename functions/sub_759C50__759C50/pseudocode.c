NiObject *sub_759C50()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x68u); /*0x759c54*/
  v1 = v0; /*0x759c59*/
  if ( !v0 ) /*0x759c62*/
    return 0; /*0x759c85*/
  sub_73EE80(v0); /*0x759c66*/
  v1[0xB].members.m_uiRefCount = 0; /*0x759c6b*/
  v1[0xC].__vftable = 0; /*0x759c6e*/
  LOWORD(v1[0xC].members.m_uiRefCount) = 0; /*0x759c71*/
  HIWORD(v1[0xC].members.m_uiRefCount) = 0; /*0x759c75*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysData::`vftable'; /*0x759c7a*/
  return v1; /*0x759c79*/
}
