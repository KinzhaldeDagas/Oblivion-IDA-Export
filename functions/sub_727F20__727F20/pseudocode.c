NiObject *sub_727F20()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_721350(v0);
  v1->__vftable = (NiObjectVtbl *)&NiBinaryExtraData::`vftable';
  v1[2].__vftable = 0;
  v1[1].members.m_uiRefCount = 0;
  return v1;
}
