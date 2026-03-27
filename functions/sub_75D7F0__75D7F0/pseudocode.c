NiObject *sub_75D7F0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x84u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_7597F0(v0);
  v1->__vftable = (NiObjectVtbl *)&NiMeshPSysData::`vftable';
  v1[0xD].__vftable = 0;
  LOWORD(v1[0xF].members.m_uiRefCount) = 0;
  HIWORD(v1[0xF].members.m_uiRefCount) = 0;
  LOWORD(v1[0x10].__vftable) = 0;
  v1[0xF].__vftable = 0;
  v1[0xE].members.m_uiRefCount = (UInt32)&NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable';
  HIWORD(v1[0x10].__vftable) = 1;
  return v1;
}
