NiObject *sub_73CD30()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x73cd54*/
  v1 = v0; /*0x73cd59*/
  if ( !v0 ) /*0x73cd6c*/
    return 0; /*0x73cd9c*/
  sub_721350(v0); /*0x73cd70*/
  v1->__vftable = (NiObjectVtbl *)&NiStringsExtraData::`vftable'; /*0x73cd75*/
  v1[2].__vftable = 0; /*0x73cd7b*/
  v1[1].members.m_uiRefCount = 0; /*0x73cd82*/
  return v1; /*0x73cd8b*/
}
