NiTimeController *sub_758220()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x758223*/
  v1 = v0; /*0x758228*/
  if ( !v0 ) /*0x75822f*/
    return 0; /*0x758242*/
  sub_75F510(v0); /*0x758233*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterDeclinationCtlr::`vftable'; /*0x758238*/
  return v1; /*0x758240*/
}
