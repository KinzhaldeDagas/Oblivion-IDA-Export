int __cdecl InterfaceMgr_DebugTextLine(char *a1, float a2, float a3, int a4, int a5)
{
  float *v9; // eax
  float v11; // [esp+10h] [ebp-8h]

  if ( !InterfaceManager_GetSingleton(0, 1) || !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b8fc*/
    return 0; /*0x57b941*/
  v11 = kTerrainLODQuadRayDirectionZ; /*0x57b917*/
  v9 = sub_571F90(1); /*0x57b931*/
  return sub_5723E0((char *)v9, a1, a2, a3, a4, a5, v11, 0); /*0x57b940*/
}
