NiObject *sub_6E4520()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e4545*/
  v1 = v0; /*0x6e454a*/
  if ( !v0 ) /*0x6e455b*/
    return 0; /*0x6e4587*/
  NiObject_constr(v0); /*0x6e455f*/
  v1->__vftable = (NiObjectVtbl *)&NiColorData::`vftable'; /*0x6e4564*/
  v1[1].__vftable = 0; /*0x6e456a*/
  v1[1].members.m_uiRefCount = 0; /*0x6e456d*/
  v1[2].__vftable = 0; /*0x6e4570*/
  return v1; /*0x6e4575*/
}
