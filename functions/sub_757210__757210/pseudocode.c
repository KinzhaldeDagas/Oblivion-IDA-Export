NiTimeController *__stdcall sub_757210(int a1)
{
  NiTimeController *v1; // eax
  NiTimeController *v2; // esi

  v1 = (NiTimeController *)FormHeapAlloc(0x48u);
  v2 = v1;
  if ( v1 )
  {
    sub_75F510(v1);
    v2->vtbl = (NiTimeControllerVtbl *)&NiPSysGravityStrengthCtlr::`vftable';
    sub_75F5A0(v2, a1);
    return v2;
  }
  else
  {
    sub_75F5A0(0, a1);
    return 0;
  }
}
