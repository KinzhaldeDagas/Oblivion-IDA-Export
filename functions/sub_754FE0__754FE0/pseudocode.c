NiObject *sub_754FE0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x34u); /*0x754fe3*/
  v1 = v0; /*0x754fe8*/
  if ( !v0 ) /*0x754fef*/
    return 0; /*0x755007*/
  sub_75E800(v0); /*0x754ff3*/
  *(float *)&v1[6].__vftable = 0.0; /*0x754ffa*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysRadialFieldModifier::`vftable'; /*0x754ffd*/
  return v1; /*0x755005*/
}
