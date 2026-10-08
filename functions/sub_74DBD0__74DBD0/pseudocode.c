NiObject *sub_74DBD0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x28u); /*0x74dbd4*/
  v1 = v0; /*0x74dbd9*/
  if ( !v0 ) /*0x74dbe2*/
    return 0; /*0x74dc13*/
  sub_752BF0(v0); /*0x74dbe6*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysMeshUpdateModifier::`vftable'; /*0x74dbeb*/
  LOWORD(v1[4].__vftable) = 0; /*0x74dbf1*/
  HIWORD(v1[4].__vftable) = 0; /*0x74dbf5*/
  LOWORD(v1[4].members.m_uiRefCount) = 0; /*0x74dbf9*/
  v1[3].members.m_uiRefCount = 0; /*0x74dbfd*/
  v1[3].__vftable = (NiObjectVtbl *)&NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x74dc01*/
  HIWORD(v1[4].members.m_uiRefCount) = 1; /*0x74dc08*/
  return v1; /*0x74dc00*/
}
