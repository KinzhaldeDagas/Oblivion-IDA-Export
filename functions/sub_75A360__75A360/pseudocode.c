NiObject *sub_75A360()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x24u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1->__vftable = (NiObjectVtbl *)&NiPSysColorModifier::`vftable';
  v1[3].__vftable = 0;
  *(float *)&v1[3].members.m_uiRefCount = 0.0;
  *(float *)&v1[4].__vftable = 0.0;
  return v1;
}
