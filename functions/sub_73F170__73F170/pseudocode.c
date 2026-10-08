NiObject *sub_73F170()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x5Cu); /*0x73f195*/
  v1 = v0; /*0x73f19a*/
  if ( v0 ) /*0x73f1ab*/
  {
    sub_728770(v0); /*0x73f1af*/
    HIWORD(v1[5].members.m_uiRefCount) = HIWORD(v1[5].members.m_uiRefCount) & 0xFFF | 0x8000; /*0x73f1c0*/
    v1->__vftable = (NiObjectVtbl *)&NiParticlesData::`vftable'; /*0x73f1c4*/
    v1[8].members.m_uiRefCount = 0; /*0x73f1ca*/
    LOWORD(v1[9].__vftable) = 0; /*0x73f1cd*/
    v1[9].members.m_uiRefCount = 0; /*0x73f1d1*/
    v1[0xA].__vftable = 0; /*0x73f1d4*/
    v1[0xA].members.m_uiRefCount = 0; /*0x73f1d7*/
    v1[0xB].__vftable = 0; /*0x73f1da*/
    LOBYTE(v1[8].__vftable) = 1; /*0x73f1dd*/
    return v1; /*0x73f1e1*/
  }
  else
  {
    *(_BYTE *)0x40 = 1; /*0x73f1f7*/
    return 0; /*0x73f1f5*/
  }
}
