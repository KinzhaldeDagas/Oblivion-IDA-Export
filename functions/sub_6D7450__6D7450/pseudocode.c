NiObject *sub_6D7450()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x6d7474*/
  v1 = v0; /*0x6d7479*/
  if ( !v0 ) /*0x6d748c*/
    return 0; /*0x6d74bc*/
  sub_721350(v0); /*0x6d7490*/
  v1->__vftable = (NiObjectVtbl *)&NiTextKeyExtraData::`vftable'; /*0x6d7495*/
  v1[1].members.m_uiRefCount = 0; /*0x6d749b*/
  v1[2].__vftable = 0; /*0x6d74a2*/
  return v1; /*0x6d74ab*/
}
