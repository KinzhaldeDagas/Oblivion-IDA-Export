char sub_508240()
{
  TES *v0; // ecx
  unsigned __int8 v1; // al
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *v3; // eax
  TESWorldSpace *v4; // eax
  TESWorldSpace *v5; // eax
  float *v6; // eax

  v0 = MEMORY[0xB333A0]; /*0x508247*/
  v1 = OB_RendererGlobalState_010201A0.pad_1DB[3] == 0; /*0x50824d*/
  OB_RendererGlobalState_010201A0.pad_1DB[3] = v1; /*0x508250*/
  bDisplayLODLand = v1; /*0x508255*/
  CurrentWorldspace = TES::GetCurrentWorldspace(v0); /*0x50825a*/
  TESWorldSpace_GetRootTerrainLODQuadMap(CurrentWorldspace); /*0x508261*/
  if ( sub_4E9F40() ) /*0x508266*/
  {
    Interface_ConsolePrint("LOD land is now disabled."); /*0x508297*/
    v4 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x5082a5*/
    TESWorldSpace_GetRootTerrainLODQuadMap(v4); /*0x5082ac*/
    sub_4EB0E0(0); /*0x5082b3*/
  }
  else
  {
    Interface_ConsolePrint("LOD land is now being displayed."); /*0x508274*/
    v3 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x508282*/
    TESWorldSpace_GetRootTerrainLODQuadMap(v3); /*0x508289*/
    sub_4EB0E0(1); /*0x508290*/
  }
  v5 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x5082c1*/
  TESWorldSpace_GetRootTerrainLODQuadMap(v5); /*0x5082c8*/
  v6 = reference->vtbl->super.super.super.GetPos(reference); /*0x5082db*/
  DistantLOD_UpdateLandLODAtPosition(*(_DWORD *)v6, v6[1], *((_DWORD *)v6 + 2), 0); /*0x5082f4*/
  return 1; /*0x5082fe*/
}
