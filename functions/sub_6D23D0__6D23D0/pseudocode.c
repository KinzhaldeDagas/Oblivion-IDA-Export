NiTimeController *sub_6D23D0()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u);
  result = 0;
  if ( v0 )
  {
    sub_6EC180(v0);
    v0->vtbl = (NiTimeControllerVtbl *)&NiAlphaController::`vftable';
    return v0;
  }
  return result;
}
