NiObject *sub_75D7F0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x84u); /*0x75d7f7*/
  v1 = v0; /*0x75d7fc*/
  if ( !v0 ) /*0x75d805*/
    return 0; /*0x75d83f*/
  sub_7597F0(v0); /*0x75d809*/
  v1->__vftable = (NiObjectVtbl *)&NiMeshPSysData::`vftable'; /*0x75d80e*/
  v1[0xD].__vftable = 0; /*0x75d814*/
  LOWORD(v1[0xF].members.m_uiRefCount) = 0; /*0x75d817*/
  HIWORD(v1[0xF].members.m_uiRefCount) = 0; /*0x75d81b*/
  LOWORD(v1[0x10].__vftable) = 0; /*0x75d81f*/
  v1[0xF].__vftable = 0; /*0x75d826*/
  v1[0xE].members.m_uiRefCount = (UInt32)&NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'; /*0x75d82a*/
  HIWORD(v1[0x10].__vftable) = 1; /*0x75d831*/
  return v1; /*0x75d829*/
}
