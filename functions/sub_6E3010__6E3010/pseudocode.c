NiExtraDataController *sub_6E3010()
{
  NiExtraDataController *v0; // esi
  NiExtraDataController *result; // eax

  v0 = (NiExtraDataController *)FormHeapAlloc(0x48u); /*0x6e3039*/
  result = 0; /*0x6e3042*/
  if ( v0 ) /*0x6e304a*/
  {
    NiExtraDataController::NiExtraDataController(v0); /*0x6e304e*/
    *(_DWORD *)v0 = &NiFloatExtraDataController::`vftable'; /*0x6e3053*/
    return v0; /*0x6e3059*/
  }
  return result; /*0x6e305b*/
}
