NiTimeController *sub_6D4620()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u);
  result = 0;
  if ( v0 )
  {
    sub_6EC630(v0);
    v0->vtbl = (NiTimeControllerVtbl *)&NiVisController::`vftable';
    return v0;
  }
  return result;
}
