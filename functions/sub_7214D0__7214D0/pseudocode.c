NiObject *sub_7214D0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0xCu); /*0x7214f4*/
  v1 = v0; /*0x7214f9*/
  if ( !v0 ) /*0x72150c*/
    return 0; /*0x721535*/
  NiObject_constr(v0); /*0x721510*/
  v1->__vftable = (NiObjectVtbl *)&NiExtraData::`vftable'; /*0x721515*/
  v1[1].__vftable = 0; /*0x72151b*/
  return v1; /*0x721524*/
}
