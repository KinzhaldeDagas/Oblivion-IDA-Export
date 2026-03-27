NiObject *sub_741D00()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_721350(v0);
  v1->__vftable = (NiObjectVtbl *)&NiBooleanExtraData::`vftable';
  LOBYTE(v1[1].members.m_uiRefCount) = 0;
  return v1;
}
