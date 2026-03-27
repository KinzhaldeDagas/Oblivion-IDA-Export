NiObject *sub_75A9E0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x20u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1->__vftable = (NiObjectVtbl *)&NiPSysBoundUpdateModifier::`vftable';
  LOWORD(v1[3].__vftable) = 0;
  HIWORD(v1[3].__vftable) = 0;
  v1[3].members.m_uiRefCount = 0;
  return v1;
}
