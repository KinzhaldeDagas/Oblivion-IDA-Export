NiTimeController *sub_6D4620()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6d4649*/
  result = 0; /*0x6d4652*/
  if ( v0 ) /*0x6d465a*/
  {
    sub_6EC630(v0); /*0x6d465e*/
    v0->vtbl = (NiTimeControllerVtbl *)&NiVisController::`vftable'; /*0x6d4663*/
    return v0; /*0x6d4669*/
  }
  return result; /*0x6d466b*/
}
