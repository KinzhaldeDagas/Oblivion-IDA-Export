// Verified LandLOD update loop passes each quad's parent LandLOD node, maximum visibility distance, and view X/Y into TESTerrainLODQuad_Update; worldspace mode bit 0x4 and bDisplayLODLand gate the update.
void __cdecl DistantLOD_UpdateLandLODMap(
        unsigned int a1,
        float arg4,
        int a3,
        TESWorldSpaceTerrainLODQuadMap *terrainLODQuadRoots,
        int a5)
{
  TESWorldSpace *CurrentWorldspace; // edi
  TESWorldSpace *v6; // esi
  double v7; // st7
  double v8; // st7
  float v9; // ebp
  float v10; // ebx
  TESTerrainLODQuad_OblivionComplete_060 *v11; // ecx
  TES *v12; // eax
  void *valueOut; // [esp+24h] [ebp-2Ch] BYREF
  float maximumLODQuadDistance; // [esp+28h] [ebp-28h]
  MEF_U32PointerMapEntry32 *position[2]; // [esp+2Ch] [ebp-24h] BYREF
  unsigned int keyOut; // [esp+34h] [ebp-1Ch] BYREF
  float viewY; // [esp+38h] [ebp-18h]
  int v18; // [esp+4Ch] [ebp-4h]

  if ( !bForceHideLODLand && !MEMORY[0xB333A0]->currentInteriorCell ) /*0x4ea19c*/
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4ea1aa*/
    v6 = CurrentWorldspace; /*0x4ea1ae*/
    if ( CurrentWorldspace ) /*0x4ea1b0*/
    {
      for ( ; /*0x4ea1b4*/
            Shared_GetPointerAtOffset7C(CurrentWorldspace);
            CurrentWorldspace = (TESWorldSpace *)Shared_GetPointerAtOffset7C(CurrentWorldspace) )
      {
        ; /*0x4ea1c7*/
      }
      if ( TESWorldSpace_IsDistantLODModeEnabled(v6, 4u) || !unk_B3608F ) /*0x4ea1e1*/
      {
        if ( TESWorldSpace_IsDistantLODModeEnabled(v6, 4u) ) /*0x4ea202*/
        {
          if ( unk_B3608F ) /*0x4ea20b*/
          {
LABEL_14:
            if ( !(_BYTE)a5 ) /*0x4ea239*/
            {
              sub_43F720(MEMORY[0xB333A0], (int *)&keyOut, 0.0); /*0x4ea24c*/
              sub_7B4520(&keyOut); /*0x4ea256*/
            }
            position[1] = 0; /*0x4ea25e*/
            keyOut = a1; /*0x4ea266*/
            v18 = 0; /*0x4ea26a*/
            viewY = arg4; /*0x4ea272*/
            *(float *)position = sqrt(dbl_A3D0C0); /*0x4ea281*/
            maximumLODQuadDistance = COERCE_FLOAT(sub_483850()); /*0x4ea294*/
            v7 = (double)SLODWORD(maximumLODQuadDistance); /*0x4ea298*/
            if ( maximumLODQuadDistance < 0.0 ) /*0x4ea29c*/
              v7 = v7 + flt_A2FC78; /*0x4ea29e*/
            *(float *)position = v7 * dbl_A37650 * *(float *)position; /*0x4ea2ae*/
            v8 = fLODQuadMinLoadDistance; /*0x4ea2b2*/
            if ( *(float *)position >= v8 ) /*0x4ea2c3*/
              v8 = *(float *)position; /*0x4ea2c9*/
            maximumLODQuadDistance = v8; /*0x4ea2cf*/
            position[0] = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)terrainLODQuadRoots); /*0x4ea2dc*/
            if ( position[0] ) /*0x4ea2e0*/
            {
              v9 = viewY; /*0x4ea2e2*/
              v10 = *(float *)&keyOut; /*0x4ea2e6*/
              do /*0x4ea355*/
              {
                valueOut = 0; /*0x4ea301*/
                NiTMap_U32Pointer_GetNextEntry( /*0x4ea309*/
                  (MEF_U32PointerMapLayout32 *)terrainLODQuadRoots,
                  position,
                  &keyOut,
                  &valueOut);
                v11 = *(TESTerrainLODQuad_OblivionComplete_060 **)valueOut; /*0x4ea319*/
                v12 = MEMORY[0xB333A0]; /*0x4ea31b*/
                if ( unk_B3608F && !v12->currentInteriorCell && CurrentWorldspace == terrainLODQuadRoots[1].vtable ) /*0x4ea32b*/
                  TESTerrainLODQuad_Update(v11, v12->LandLOD, maximumLODQuadDistance, v10, v9, a5); /*0x4ea340*/
                else
                  TESTerrainLODQuad_AdvanceUnloadState(v11, v12->LandLOD); /*0x4ea34b*/
              }
              while ( position[0] ); /*0x4ea355*/
            }
            NiAVObject_InitializePropertyState((NiAVObject *)MEMORY[0xB333A0]->LandLOD); /*0x4ea35f*/
            NiNode_UpdateDynamicEffectState(MEMORY[0xB333A0]->LandLOD); /*0x4ea36d*/
            NiAVObject_UpdateNiAVObject((NiAVObject *)MEMORY[0xB333A0]->LandLOD, 0.0, 1); /*0x4ea383*/
            return; /*0x4ea383*/
          }
          if ( !bDisplayLODLand ) /*0x4ea219*/
            return; /*0x4ea219*/
          sub_4EB0E0(1); /*0x4ea221*/
        }
      }
      else
      {
        sub_4EB0E0(0); /*0x4ea1ea*/
        DistantLODLoaderTaskMap_Destroy(); /*0x4ea1f2*/
        DistantLODLoaderTaskMap_EnsureCreated(); /*0x4ea1f7*/
      }
    }
    if ( !unk_B3608F ) /*0x4ea22f*/
      return; /*0x4ea22f*/
    goto LABEL_14; /*0x4ea22f*/
  }
}
