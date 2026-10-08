NiObject *sub_755690()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x755693*/
  v1 = v0; /*0x755698*/
  if ( !v0 ) /*0x75569f*/
    return 0; /*0x7556b2*/
  sub_752BF0(v0); /*0x7556a3*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysPositionModifier::`vftable'; /*0x7556a8*/
  return v1; /*0x7556b0*/
}
