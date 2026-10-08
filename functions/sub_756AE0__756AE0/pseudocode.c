NiTimeController *sub_756AE0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756ae3*/
  v1 = v0; /*0x756ae8*/
  if ( !v0 ) /*0x756aef*/
    return 0; /*0x756b02*/
  sub_75F510(v0); /*0x756af3*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotAngleVarCtlr::`vftable'; /*0x756af8*/
  return v1; /*0x756b00*/
}
