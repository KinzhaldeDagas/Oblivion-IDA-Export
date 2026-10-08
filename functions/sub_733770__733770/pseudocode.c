NiObject *__thiscall sub_733770(void *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u); /*0x733798*/
  v4 = v3; /*0x73379d*/
  if ( v3 ) /*0x7337ae*/
  {
    NiAccumulator_Constructor(v3); /*0x7337b2*/
    v4->__vftable = (NiObjectVtbl *)&NiBackToFrontAccumulator::`vftable'; /*0x7337b7*/
    v4[3].__vftable = 0; /*0x7337bd*/
    v4[2].__vftable = 0; /*0x7337c0*/
    v4[2].members.m_uiRefCount = 0; /*0x7337c3*/
    v4[1].members.m_uiRefCount = (UInt32)&NiTPointerList<NiGeometry *>::`vftable'; /*0x7337c6*/
    v4[3].members.m_uiRefCount = 0; /*0x7337cd*/
    v4[4].__vftable = 0; /*0x7337d0*/
    v4[4].members.m_uiRefCount = 0; /*0x7337d3*/
    v4[5].__vftable = 0; /*0x7337d6*/
    v4[5].members.m_uiRefCount = 0; /*0x7337d9*/
  }
  else
  {
    v4 = 0; /*0x7337de*/
  }
  sub_733850(this, (int)v4, a2); /*0x7337f0*/
  return v4; /*0x7337f7*/
}
