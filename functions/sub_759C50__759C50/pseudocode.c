NiObject *sub_759C50()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x68u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_73EE80(v0);
  v1[0xB].members.m_uiRefCount = 0;
  v1[0xC].__vftable = 0;
  LOWORD(v1[0xC].members.m_uiRefCount) = 0;
  HIWORD(v1[0xC].members.m_uiRefCount) = 0;
  v1->__vftable = (NiObjectVtbl *)&NiPSysData::`vftable';
  return v1;
}
