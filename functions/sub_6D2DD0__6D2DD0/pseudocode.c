NiObject *sub_6D2DD0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d2df4*/
  v1 = v0; /*0x6d2df9*/
  if ( !v0 ) /*0x6d2e0c*/
    return 0; /*0x6d2e45*/
  sub_6EC220(v0); /*0x6d2e10*/
  v1->__vftable = (NiObjectVtbl *)&NiFloatInterpolator::`vftable'; /*0x6d2e15*/
  *(float *)&v1[1].members.m_uiRefCount = flt_A7C6B0; /*0x6d2e21*/
  v1[2].__vftable = 0; /*0x6d2e24*/
  v1[2].members.m_uiRefCount = 0; /*0x6d2e2b*/
  return v1; /*0x6d2e34*/
}
