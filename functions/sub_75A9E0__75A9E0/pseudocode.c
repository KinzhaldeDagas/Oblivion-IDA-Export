NiObject *sub_75A9E0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x20u); /*0x75a9e3*/
  v1 = v0; /*0x75a9e8*/
  if ( !v0 ) /*0x75a9ef*/
    return 0; /*0x75aa15*/
  sub_752BF0(v0); /*0x75a9f3*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysBoundUpdateModifier::`vftable'; /*0x75a9f8*/
  LOWORD(v1[3].__vftable) = 0; /*0x75a9fe*/
  HIWORD(v1[3].__vftable) = 0; /*0x75aa04*/
  v1[3].members.m_uiRefCount = 0; /*0x75aa0a*/
  return v1; /*0x75aa13*/
}
