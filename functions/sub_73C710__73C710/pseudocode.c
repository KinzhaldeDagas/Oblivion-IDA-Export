NiObject *sub_73C710()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x73c734*/
  v1 = v0; /*0x73c739*/
  if ( !v0 ) /*0x73c74c*/
    return 0; /*0x73c783*/
  sub_721350(v0); /*0x73c750*/
  v1->__vftable = (NiObjectVtbl *)&NiSwitchStringExtraData::`vftable'; /*0x73c755*/
  v1[2].__vftable = 0; /*0x73c75b*/
  v1[1].members.m_uiRefCount = 0; /*0x73c762*/
  v1[2].members.m_uiRefCount = 0xFFFFFFFF; /*0x73c769*/
  return v1; /*0x73c772*/
}
