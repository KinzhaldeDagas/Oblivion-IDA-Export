NiTimeController *__stdcall sub_6D2350(int a1)
{
  NiTimeController *v1; // eax
  NiTimeController *v2; // esi

  v1 = (NiTimeController *)FormHeapAlloc(0x40u);
  v2 = v1;
  if ( v1 )
  {
    sub_6EC180(v1);
    v2->vtbl = (NiTimeControllerVtbl *)&NiAlphaController::`vftable';
  }
  else
  {
    v2 = 0;
  }
  sub_6ECB60(v2, a1);
  return v2;
}
