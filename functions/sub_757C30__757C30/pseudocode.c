NiTimeController *sub_757C30()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757c33*/
  v1 = v0; /*0x757c38*/
  if ( !v0 ) /*0x757c3f*/
    return 0; /*0x757c52*/
  sub_75F510(v0); /*0x757c43*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterSpeedCtlr::`vftable'; /*0x757c48*/
  return v1; /*0x757c50*/
}
