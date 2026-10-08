NiTimeController *sub_6C3F00()
{
  NiTimeController *v0; // esi
  NiTimeController *result; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6c3f29*/
  result = 0; /*0x6c3f32*/
  if ( v0 ) /*0x6c3f3a*/
  {
    NiSingleInterpController_Construct(v0); /*0x6c3f3e*/
    v0->vtbl = (NiTimeControllerVtbl *)&NiTransformController::`vftable'; /*0x6c3f43*/
    return v0; /*0x6c3f49*/
  }
  return result; /*0x6c3f4b*/
}
