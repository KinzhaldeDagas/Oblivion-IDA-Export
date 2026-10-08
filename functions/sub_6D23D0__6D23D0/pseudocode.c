NiTimeController *sub_6D23D0()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6d23f9*/
  result = 0; /*0x6d2402*/
  if ( v0 ) /*0x6d240a*/
  {
    sub_6EC180(v0); /*0x6d240e*/
    v0->vtbl = (NiTimeControllerVtbl *)&NiAlphaController::`vftable'; /*0x6d2413*/
    return v0; /*0x6d2419*/
  }
  return result; /*0x6d241b*/
}
