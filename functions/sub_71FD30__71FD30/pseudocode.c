NiObject *sub_71FD30()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x58u); /*0x71fd55*/
  v1 = v0; /*0x71fd5a*/
  if ( !v0 ) /*0x71fd6b*/
    return 0; /*0x71fd9e*/
  sub_732DD0(v0); /*0x71fd6f*/
  v1->__vftable = (NiObjectVtbl *)&NiTriShapeData::`vftable'; /*0x71fd74*/
  v1[8].members.m_uiRefCount = 0; /*0x71fd7a*/
  v1[9].__vftable = 0; /*0x71fd7d*/
  v1[9].members.m_uiRefCount = 0; /*0x71fd80*/
  LOWORD(v1[0xA].__vftable) = 0; /*0x71fd83*/
  v1[0xA].members.m_uiRefCount = 0; /*0x71fd87*/
  return v1; /*0x71fd8c*/
}
