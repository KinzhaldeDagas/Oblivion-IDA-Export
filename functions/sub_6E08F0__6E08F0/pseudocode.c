NiTimeController *sub_6E08F0()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6e0919*/
  result = 0; /*0x6e0922*/
  if ( v0 ) /*0x6e092a*/
  {
    sub_6EC180(v0); /*0x6e092e*/
    v0->vtbl = (NiTimeControllerVtbl *)&NiLightDimmerController::`vftable'; /*0x6e0933*/
    return v0; /*0x6e0939*/
  }
  return result; /*0x6e093b*/
}
