NiTimeController *__stdcall sub_6D45A0(int a1)
{
  NiTimeController *v1; // eax
  NiTimeController *v2; // esi

  v1 = (NiTimeController *)FormHeapAlloc(0x40u);
  v2 = v1;
  if ( v1 )
  {
    sub_6EC630(v1);
    v2->vtbl = (NiTimeControllerVtbl *)&NiVisController::`vftable';
  }
  else
  {
    v2 = 0;
  }
  sub_6ECB60(v2, a1);
  return v2;
}
