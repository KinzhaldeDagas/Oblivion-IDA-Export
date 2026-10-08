NiObject *sub_6E1C00()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x6e1c25*/
  v1 = v0; /*0x6e1c2a*/
  if ( !v0 ) /*0x6e1c3b*/
    return 0; /*0x6e1c85*/
  NiObject_constr(v0); /*0x6e1c3f*/
  v1->__vftable = (NiObjectVtbl *)&NiTransformData::`vftable'; /*0x6e1c44*/
  LOWORD(v1[1].__vftable) = 0; /*0x6e1c4a*/
  v1[4].__vftable = 0; /*0x6e1c4e*/
  v1[2].__vftable = 0; /*0x6e1c51*/
  LOBYTE(v1[3].members.m_uiRefCount) = 0; /*0x6e1c54*/
  HIWORD(v1[1].__vftable) = 0; /*0x6e1c57*/
  v1[4].members.m_uiRefCount = 0; /*0x6e1c5b*/
  v1[2].members.m_uiRefCount = 0; /*0x6e1c5e*/
  BYTE1(v1[3].members.m_uiRefCount) = 0; /*0x6e1c61*/
  LOWORD(v1[1].members.m_uiRefCount) = 0; /*0x6e1c64*/
  v1[5].__vftable = 0; /*0x6e1c68*/
  v1[3].__vftable = 0; /*0x6e1c6b*/
  BYTE2(v1[3].members.m_uiRefCount) = 0; /*0x6e1c6e*/
  return v1; /*0x6e1c73*/
}
