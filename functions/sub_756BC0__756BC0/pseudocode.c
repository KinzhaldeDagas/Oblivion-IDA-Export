NiTimeController *sub_756BC0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756bc3*/
  v1 = v0; /*0x756bc8*/
  if ( !v0 ) /*0x756bcf*/
    return 0; /*0x756be2*/
  sub_75F510(v0); /*0x756bd3*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotAngleCtlr::`vftable'; /*0x756bd8*/
  return v1; /*0x756be0*/
}
