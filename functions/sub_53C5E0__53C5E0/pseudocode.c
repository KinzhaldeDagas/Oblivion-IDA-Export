char __cdecl sub_53C5E0(Sky *a1)
{
  TESClimate *firstClimate; // eax
  unsigned int v2; // esi
  unsigned int v3; // eax

  firstClimate = a1->firstClimate;
  if ( !firstClimate )
    return 0;
  if ( (*((_BYTE *)firstClimate + 0x55) & 0x3F) == 0 )
    return 0;
  v2 = *((_BYTE *)firstClimate + 0x55) & 0x3F;
  v3 = TimeGlobals_GetGameDaysPassed(&TimeGlobals) % (8 * v2) / v2;
  if ( v3 == dword_B365BC )
    return 0;
  dword_B365BC = v3;
  return 1;
}
