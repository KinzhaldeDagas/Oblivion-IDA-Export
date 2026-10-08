NiObject *sub_73F0D0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x5Cu); /*0x73f0f5*/
  v1 = v0; /*0x73f0fa*/
  if ( !v0 ) /*0x73f10b*/
    return 0; /*0x73f154*/
  sub_728770(v0); /*0x73f10f*/
  HIWORD(v1[5].members.m_uiRefCount) = HIWORD(v1[5].members.m_uiRefCount) & 0xFFF | 0x8000; /*0x73f120*/
  v1->__vftable = (NiObjectVtbl *)&NiParticlesData::`vftable'; /*0x73f124*/
  v1[8].members.m_uiRefCount = 0; /*0x73f12a*/
  LOWORD(v1[9].__vftable) = 0; /*0x73f12d*/
  v1[9].members.m_uiRefCount = 0; /*0x73f131*/
  v1[0xA].__vftable = 0; /*0x73f134*/
  v1[0xA].members.m_uiRefCount = 0; /*0x73f137*/
  v1[0xB].__vftable = 0; /*0x73f13a*/
  LOBYTE(v1[8].__vftable) = 0; /*0x73f13d*/
  return v1; /*0x73f142*/
}
