NiTimeController *sub_756730()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756733*/
  v1 = v0; /*0x756738*/
  if ( !v0 ) /*0x75673f*/
    return 0; /*0x756752*/
  sub_75F2C0(v0); /*0x756743*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysModifierActiveCtlr::`vftable'; /*0x756748*/
  return v1; /*0x756750*/
}
