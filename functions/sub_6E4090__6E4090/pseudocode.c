NiExtraDataController *sub_6E4090()
{
  NiExtraDataController *v0; // esi
  NiExtraDataController *result; // eax

  v0 = (NiExtraDataController *)FormHeapAlloc(0x48u); /*0x6e40b9*/
  result = 0; /*0x6e40c2*/
  if ( v0 ) /*0x6e40ca*/
  {
    NiExtraDataController::NiExtraDataController(v0); /*0x6e40ce*/
    *(_DWORD *)v0 = &NiColorExtraDataController::`vftable'; /*0x6e40d3*/
    return v0; /*0x6e40d9*/
  }
  return result; /*0x6e40db*/
}
