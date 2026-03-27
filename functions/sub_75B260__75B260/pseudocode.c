NiObject *sub_75B260()
{
  NiObject *v0; // eax
  NiObject *v1; // esi
  int v2; // edx

  v0 = (NiObject *)FormHeapAlloc(0x38u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1->__vftable = (NiObjectVtbl *)&NiPSysBombModifier::`vftable';
  v1[3].__vftable = 0;
  v1[3].members.m_uiRefCount = dword_B258D0;
  v1[4].__vftable = (NiObjectVtbl *)dword_B258D4;
  v2 = dword_B258D8;
  *(float *)&v1[5].__vftable = 0.0;
  *(float *)&v1[5].members.m_uiRefCount = 0.0;
  v1[4].members.m_uiRefCount = v2;
  v1[6].__vftable = 0;
  v1[6].members.m_uiRefCount = 0;
  return v1;
}
