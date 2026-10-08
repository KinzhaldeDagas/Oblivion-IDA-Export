char __cdecl sub_53C5E0(Sky *a1)
{
  TESClimate *firstClimate; // eax
  unsigned int v2; // esi
  unsigned int v3; // eax

  firstClimate = a1->firstClimate; /*0x53c5e4*/
  if ( !firstClimate ) /*0x53c5e9*/
    return 0; /*0x53c5e9*/
  if ( (firstClimate->weatherAndMoonFlags & 0x3F00) == 0 ) /*0x53c5ef*/
    return 0; /*0x53c5ef*/
  v2 = HIBYTE(firstClimate->weatherAndMoonFlags) & 0x3F; /*0x53c5fb*/
  v3 = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]) % (8 * v2) / v2; /*0x53c615*/
  if ( v3 == unk_B365BC ) /*0x53c61e*/
    return 0; /*0x53c628*/
  unk_B365BC = v3; /*0x53c620*/
  return 1; /*0x53c627*/
}
