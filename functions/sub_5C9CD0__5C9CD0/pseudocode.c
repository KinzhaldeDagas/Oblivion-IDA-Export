// Character-creation Randomize Face path. Calls TESNPC_RandomizeFaceGen with all preserve flags false, rebuilds the player face, then synchronizes UI Age and UI-labeled Complexion from matrix channel 0 geometry only. Channel 1 texture controls are not surfaced separately, and Hair Length synchronization is omitted.
void __cdecl RaceSexMenu_ExecuteRandomizeFace()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v2; // esi
  TESNPC *v3; // edi
  double v4; // st5
  double v5; // st5
  const char *v6; // eax
  Tile *ControlTile; // eax
  double v8; // st7
  int v9; // ecx
  Tile *v10; // ebp
  double SexMorphBase; // st7
  const char *v12; // eax
  Tile *v13; // eax
  double v14; // st7
  int v15; // ecx
  Tile *v16; // edi
  BSStringT v17; // [esp-Ch] [ebp-A4h] BYREF
  BSStringT v18; // [esp-4h] [ebp-9Ch] BYREF
  float a3; // [esp+18h] [ebp-80h]
  double ControlValue; // [esp+1Ch] [ebp-7Ch]
  double v21; // [esp+24h] [ebp-74h]
  FaceGenHeadParameters a1; // [esp+2Ch] [ebp-6Ch] BYREF
  unsigned int v23; // [esp+94h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x5c9cff*/
  if ( OpenMenuTile ) /*0x5c9d0b*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5c9d1f*/
    v2 = (float *)OblivionDynamicCast( /*0x5c9d2a*/
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &RaceSexMenu `RTTI Type Descriptor',
                    0);
    if ( v2 ) /*0x5c9d31*/
    {
      v3 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c9d48*/
      TESNPC_RandomizeFaceGen(v3, 0, 0, 0);     // RaceSexMenu_ExecuteRandomizeFace passes all preserve flags false to TESNPC_RandomizeFaceGen in native executable. PF 1.19.16 only ORs third preserveHairLength flag with opt-in INI setting. Age and sex-morph flags and native refresh remain unchanged. This allows face reroll with current hair length. /*0x5c9d4e*/
      RaceSexMenu_RefreshPlayerFace(v2);        // Vanilla Randomize Face refreshes the actor head after NPC hairLength mutation, then updates Age/Complexion sliders; no explicit Hair > Length slider update in this function. Compare NPC+0x1CC, menu+0x874, Hair > Length Tile user0 before/after randomize to demonstrate stale UI. /*0x5c9d55*/
      ArrayConstructor( /*0x5c9d6d*/
        (char *)&a1,
        0x18u,
        4,
        (void (__thiscall *)(char *))FaceGenMatrix_Construct,
        (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
      v23 = 0; /*0x5c9d79*/
      TESNPC_BuildAbsoluteFaceGenParameters(v3, &a1); /*0x5c9d80*/
      a3 = FaceGenHeadParameters_GetControlValue(&a1, 0, 0); /*0x5c9d91*/
      v21 = 1.0 - 0.0; /*0x5c9da2*/
      v4 = a3; /*0x5c9da6*/
      a3 = COERCE_FLOAT(&v18); /*0x5c9daa*/
      v5 = v4 - dbl_A492F0; /*0x5c9dae*/
      *(_DWORD *)&v17.m_dataLen = 0; /*0x5c9db4*/
      v2[0x220] = v21 * (v5 / dbl_A3F3D0) + 0.0; /*0x5c9dbf*/
      v17.m_data = (char *)g_gameSetting_sAge; /*0x5c9dca*/
      v18 = 0; /*0x5c9dcb*/
      BSStringT_Set(&v18, v17.m_data, *(unsigned int *)&v17.m_dataLen); /*0x5c9dd5*/
      v6 = (const char *)g_gameSetting_sMain; /*0x5c9dda*/
      LODWORD(ControlValue) = &v17; /*0x5c9de4*/
      LOBYTE(v23) = 1; /*0x5c9dea*/
      v17.m_data = 0; /*0x5c9df2*/
      v17.m_dataLen = 0; /*0x5c9df4*/
      v17.m_bufLen = 0; /*0x5c9df8*/
      BSStringT_Set(&v17, v6, 0); /*0x5c9dfc*/
      LOBYTE(v23) = 0; /*0x5c9e03*/
      ControlTile = RaceSexMenu_FindControlTile(v2, v17, v18); /*0x5c9e0a*/
      v8 = v2[0x220]; /*0x5c9e0f*/
      *(_DWORD *)&v18.m_dataLen = v9; /*0x5c9e15*/
      a3 = v8; /*0x5c9e16*/
      v10 = ControlTile; /*0x5c9e20*/
      Tile_SetFloat(ControlTile, 0xFB1u, flt_A6D2D8);// First Age Tile_SetFloat call (E8 -> 0x58CEB0). Missing Age Tile produces null and native setter dereferences. PF 1.19.12 guards all three Age calls as a group, independently of native confirmation JMP and category guard ownership. /*0x5c9e2c*/
      Tile_SetFloat(v10, 0xFB1u, a3);           // Second unconditional Age user3 write; assumes the localized control lookup succeeded. /*0x5c9e40*/
      Tile_SetFloat(v10, 0xFB1u, 0.0);          // Third unconditional Age user3 write; assumes the localized control lookup succeeded. /*0x5c9e52*/
      ControlValue = FaceGenHeadParameters_GetControlValue(&a1, 1, 0); /*0x5c9e64*/
      SexMorphBase = TESNPC_GetSexMorphBase(v3); /*0x5c9e6d*/
      a3 = ControlValue - SexMorphBase; /*0x5c9e7b*/
      LODWORD(ControlValue) = &v18; /*0x5c9e7f*/
      *(_DWORD *)&v17.m_dataLen = 0; /*0x5c9e87*/
      v2[0x221] = (a3 - kFaceGenPolarNegativeTwo) * dbl_A3C770 * v21 + dbl_A2FC68; /*0x5c9e9e*/
      v17.m_data = (char *)g_gameSetting_sComplexion; /*0x5c9ea9*/
      v18 = 0; /*0x5c9eaa*/
      BSStringT_Set(&v18, v17.m_data, *(unsigned int *)&v17.m_dataLen); /*0x5c9eb4*/
      v12 = (const char *)g_gameSetting_sMain; /*0x5c9eb9*/
      a3 = COERCE_FLOAT(&v17); /*0x5c9ec3*/
      LOBYTE(v23) = 2; /*0x5c9ec9*/
      v17.m_data = 0; /*0x5c9ed1*/
      v17.m_dataLen = 0; /*0x5c9ed3*/
      v17.m_bufLen = 0; /*0x5c9ed7*/
      BSStringT_Set(&v17, v12, 0); /*0x5c9edb*/
      LOBYTE(v23) = 0; /*0x5c9ee2*/
      v13 = RaceSexMenu_FindControlTile(v2, v17, v18); /*0x5c9ee9*/
      v14 = v2[0x221]; /*0x5c9eee*/
      *(_DWORD *)&v18.m_dataLen = v15; /*0x5c9ef4*/
      a3 = v14; /*0x5c9ef5*/
      v16 = v13; /*0x5c9eff*/
      Tile_SetFloat(v13, 0xFB1u, flt_A6D2D8);   // First Complexion Tile_SetFloat call (E8 -> 0x58CEB0). Missing Complexion Tile produces null. PF 1.19.12 guards all three Complexion calls as a group after verifying native targets; independent of other optional hook availability. /*0x5c9f0b*/
      Tile_SetFloat(v16, 0xFB1u, a3);           // Second unconditional Complexion user3 write; assumes the localized control lookup succeeded. /*0x5c9f1f*/
      Tile_SetFloat(v16, 0xFB1u, 0.0);          // Third unconditional Complexion user3 write; assumes the localized control lookup succeeded. /*0x5c9f31*/
      v23 = 0xFFFFFFFF; /*0x5c9f44*/
      _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c9f4f*/
    }
  }
}
