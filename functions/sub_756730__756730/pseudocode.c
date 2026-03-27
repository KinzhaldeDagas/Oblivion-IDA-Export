NiTimeController *sub_756730()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_75F2C0(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysModifierActiveCtlr::`vftable';
  return v1;
}
