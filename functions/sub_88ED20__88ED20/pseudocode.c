NiObject *sub_88ED20()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x28u); /*0x88ed44*/
  v1 = v0; /*0x88ed49*/
  if ( !v0 ) /*0x88ed5c*/
    return 0; /*0x88edaa*/
  sub_897600(v0); /*0x88ed60*/
  v1->__vftable = (NiObjectVtbl *)&bhkBlendCollisionObject::`vftable'; /*0x88ed67*/
  ++unk_BA7A1C; /*0x88ed6d*/
  *(float *)&v1[2].members.m_uiRefCount = 0.0; /*0x88ed74*/
  LOWORD(v1[1].members.m_uiRefCount) &= ~0x100u; /*0x88ed79*/
  *(float *)&v1[3].__vftable = 1.0; /*0x88ed7f*/
  v1[3].members.m_uiRefCount = 8; /*0x88ed82*/
  v1[4].__vftable = 0; /*0x88ed89*/
  v1[4].members.m_uiRefCount = 0; /*0x88ed90*/
  return v1; /*0x88ed99*/
}
