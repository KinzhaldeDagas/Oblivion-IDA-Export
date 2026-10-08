NiExtraDataController *sub_6E26A0()
{
  NiExtraDataController *v0; // eax
  NiExtraDataController *v1; // esi

  v0 = (NiExtraDataController *)FormHeapAlloc(0x50u); /*0x6e26c4*/
  v1 = v0; /*0x6e26c9*/
  if ( !v0 ) /*0x6e26dc*/
    return 0; /*0x6e270c*/
  NiExtraDataController::NiExtraDataController(v0); /*0x6e26e0*/
  *(_DWORD *)v1 = &NiFloatsExtraDataPoint3Controller::`vftable'; /*0x6e26e5*/
  *((_DWORD *)v1 + 0x12) = 0xFFFFFFFF; /*0x6e26eb*/
  *((_DWORD *)v1 + 0x13) = 0; /*0x6e26f2*/
  return v1; /*0x6e26fb*/
}
