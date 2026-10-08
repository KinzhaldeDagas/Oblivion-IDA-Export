NiExtraDataController *sub_6E2BC0()
{
  NiExtraDataController *v0; // eax
  NiExtraDataController *v1; // esi

  v0 = (NiExtraDataController *)FormHeapAlloc(0x50u); /*0x6e2be4*/
  v1 = v0; /*0x6e2be9*/
  if ( !v0 ) /*0x6e2bfc*/
    return 0; /*0x6e2c2c*/
  NiExtraDataController::NiExtraDataController(v0); /*0x6e2c00*/
  *(_DWORD *)v1 = &NiFloatsExtraDataController::`vftable'; /*0x6e2c05*/
  *((_DWORD *)v1 + 0x12) = 0xFFFFFFFF; /*0x6e2c0b*/
  *((_DWORD *)v1 + 0x13) = 0; /*0x6e2c12*/
  return v1; /*0x6e2c1b*/
}
