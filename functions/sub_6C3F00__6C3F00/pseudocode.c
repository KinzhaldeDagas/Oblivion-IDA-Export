NiTimeController *sub_6C3F00()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u);
  result = 0;
  if ( v0 )
  {
    sub_6CE1D0(v0);
    v0->vtbl = (NiTimeControllerVtbl *)&NiTransformController::`vftable';
    return v0;
  }
  return result;
}
