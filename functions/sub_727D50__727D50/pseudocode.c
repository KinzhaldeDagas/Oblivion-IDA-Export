NiObject *sub_727D50()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x34u); /*0x727d74*/
  v1 = v0; /*0x727d79*/
  if ( !v0 ) /*0x727d8c*/
    return 0; /*0x727dbc*/
  sub_726010(v0); /*0x727d90*/
  v1->__vftable = (NiObjectVtbl *)&BSPackedAdditionalGeometryData::`vftable'; /*0x727d95*/
  v1[5].members.m_uiRefCount = 0; /*0x727d9b*/
  v1[6].__vftable = 0; /*0x727da2*/
  return v1; /*0x727dab*/
}
