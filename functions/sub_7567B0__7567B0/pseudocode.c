NiTimeController *__stdcall sub_7567B0(int a1)
{
  NiTimeController *v1; // eax
  NiTimeController *v2; // esi

  v1 = (NiTimeController *)FormHeapAlloc(0x48u);
  v2 = v1;
  if ( v1 )
  {
    sub_75F2C0(v1);
    v2->vtbl = (NiTimeControllerVtbl *)&NiPSysModifierActiveCtlr::`vftable';
    sub_75F5A0(v2, a1);
    return v2;
  }
  else
  {
    sub_75F5A0(0, a1);
    return 0;
  }
}
