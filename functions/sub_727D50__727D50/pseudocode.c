NiObject *sub_727D50()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x34u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_726010(v0);
  v1->__vftable = (NiObjectVtbl *)&BSPackedAdditionalGeometryData::`vftable';
  v1[5].members.m_uiRefCount = 0;
  v1[6].__vftable = 0;
  return v1;
}
