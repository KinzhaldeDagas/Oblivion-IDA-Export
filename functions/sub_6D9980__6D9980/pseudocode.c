NiObject *sub_6D9980()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x24u); /*0x6d99a4*/
  v1 = v0; /*0x6d99a9*/
  if ( !v0 ) /*0x6d99bc*/
    return 0; /*0x6d9a0e*/
  sub_6EC220(v0); /*0x6d99c0*/
  v1->__vftable = (NiObjectVtbl *)&NiQuaternionInterpolator::`vftable'; /*0x6d99c5*/
  *(float *)&v1[1].members.m_uiRefCount = flt_B3EBA0[0]; /*0x6d99d0*/
  *(float *)&v1[2].__vftable = flt_B3EBA0[1]; /*0x6d99d9*/
  *(float *)&v1[2].members.m_uiRefCount = flt_B3EBA0[2]; /*0x6d99e2*/
  *(float *)&v1[3].__vftable = flt_B3EBA0[3]; /*0x6d99ea*/
  v1[3].members.m_uiRefCount = 0; /*0x6d99ed*/
  v1[4].__vftable = 0; /*0x6d99f4*/
  return v1; /*0x6d99fd*/
}
