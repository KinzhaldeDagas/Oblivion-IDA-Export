NiObject *sub_6E8370()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e8394*/
  v1 = v0; /*0x6e8399*/
  if ( !v0 ) /*0x6e83ac*/
    return 0; /*0x6e83e4*/
  sub_6EC220(v0); /*0x6e83b0*/
  v1->__vftable = (NiObjectVtbl *)&NiBoolInterpolator::`vftable'; /*0x6e83b5*/
  LOBYTE(v1[1].members.m_uiRefCount) = byte_A7C6AC; /*0x6e83c0*/
  v1[2].__vftable = 0; /*0x6e83c3*/
  v1[2].members.m_uiRefCount = 0; /*0x6e83ca*/
  return v1; /*0x6e83d3*/
}
