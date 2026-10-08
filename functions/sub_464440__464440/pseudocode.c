// Verified: LoadGame finalization (caller 466889) ensures incoming map at manager+4, walks current map at +0, reconciles extant forms through sub45F180/ResetObject and reconstructs missing moved references from their old locations, then destroys old current map and promotes incoming map to +0. Probable Fallout homolog BGSSaveLoadGame::RevertCurrentChanges 825F1938: same existing-form reconciliation, missing moved-reference handling, and final map swap. Fallout uses TESForm::Revert and BGSReconstructFormsInAllFilesMap; Oblivion uses sub45F180 plus source-file search at 45C4F0. Note: function also has a separate game/world initialization branch; the map reconciliation and swap are in the save-load branch.
TESWorldSpace *__userpurge TESSaveLoadGame_ReconcileExistingChanges@<eax>(
        TESSaveLoadGame_SerializationView *self@<ecx>,
        int arg2@<edi>,
        double arg3@<st2>,
        double arg4@<st1>,
        double arg5@<st0>,
        char initializationMode)
{
  InterfaceManager *Singleton; // eax
  int *v8; // eax
  int *v9; // eax
  DWORD (__stdcall *v10)(); // edi
  UInt32 mainThreadID; // esi
  UInt32 v12; // esi
  TESObjectCELL *DwordAtOffset40; // esi
  TESWorldSpace *result; // eax
  OblivionTESFormListNode *p_worldspaceList; // esi
  const char *v16; // eax
  NiTMap_TESCELL *v17; // eax
  MEF_U32PointerMapEntry32 *v18; // eax
  ChangesMap *v19; // eax
  char v20; // bl
  unsigned int bucketCount; // ecx
  unsigned int v22; // eax
  OblivionChangesMapNode **buckets; // esi
  OblivionChangesMapNode **v24; // edx
  MEF_U32PointerMapEntry32 *v25; // eax
  ChangesMap *currentChangesMap; // ecx
  unsigned int v27; // ebx
  TESForm *v28; // eax
  int v29; // esi
  unsigned int primaryLocationFormID; // esi
  NiTLargeArrayUInt32 *irefTable; // eax
  unsigned int fallbackLocationFormID; // edi
  unsigned int v33; // eax
  NiTLargeArrayUInt32 *v34; // eax
  TESForm *v35; // esi
  TESObjectCELL *CellAtCellCoord; // edi
  TESWorldSpace *v37; // eax
  TESObjectREFR *v38; // eax
  float v39; // [esp+0h] [ebp-68h]
  void *valueOut; // [esp+1Ch] [ebp-4Ch] BYREF
  int a1; // [esp+20h] [ebp-48h] BYREF
  int v43; // [esp+24h] [ebp-44h]
  int v44; // [esp+28h] [ebp-40h]
  MEF_U32PointerMapEntry32 *position; // [esp+2Ch] [ebp-3Ch] BYREF
  OblivionMovedReferenceInitialData data; // [esp+30h] [ebp-38h] BYREF
  int v47; // [esp+64h] [ebp-4h]
  char initializationModea; // [esp+6Ch] [ebp+4h]

  if ( MEMORY[0xB33398]->unk04 )
  {
    *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) = 1; /*0x46448b*/
    sub_4599B0((char)self, arg3, arg4, arg5); /*0x464492*/
    sub_463700((char *)self, arg2, arg3, arg4, arg5); /*0x464499*/
    self->currentChangesMap->vtbl->removeAllChanges(self->currentChangesMap); /*0x4644a6*/
    sub_462080((char *)self); /*0x4644aa*/
    TESSaveLoadGame_ProcessDeferredDeletions(self); /*0x4644b1*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x4644ba*/
    sub_57ECB0(Singleton, arg3, arg4); /*0x4644c4*/
    TravelPath_ClearAllDoorLinkMaps();          // Verified LowPath map lifecycle during save/load reference reconciliation: first TravelPath_ClearAllDoorLinkMaps releases old AStarWorldNodes, state slots, lists, nested maps, and the outer map. /*0x4644c9*/
    TravelPath_EnsureDoorLinkMapInitialized();  // Verified immediately after clearing old travel-link indices, TravelPath_EnsureDoorLinkMapInitialized recreates the outer space-link map for references being reconciled. /*0x4644ce*/
    sub_43F6E0((int)MEMORY[0xB333A0], arg3, arg4, arg5); /*0x4644d9*/
    sub_43F560(MEMORY[0xB333A0]); /*0x4644e4*/
    TESDataHandler_Clear(g_TESDataHandler); /*0x4644ef*/
    EffectSettingCollection_Reset(); /*0x4644f4*/
    sub_5B7150(); /*0x4644f9*/
    sub_5A6A80(); /*0x4644fe*/
    sub_5AD750(0); /*0x464505*/
    sub_44A2B0((char *)g_TESDataHandler, "Data\\"); /*0x464518*/
    v8 = (int *)FormHeapAlloc(0x804u); /*0x464522*/
    v47 = 0; /*0x464530*/
    if ( v8 ) /*0x464538*/
      v9 = PlayerCharacter_constr(v8, arg3, arg4); /*0x46453c*/
    else
      v9 = 0; /*0x464543*/
    v47 = 0xFFFFFFFF; /*0x46454b*/
    reference = (PlayerCharacter *)v9; /*0x464553*/
    TESForm_SetFormID((TESForm *)v9, 0x14, 1); /*0x464558*/
    v10 = GetCurrentThreadId; /*0x464563*/
    mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x464569*/
    if ( GetCurrentThreadId() == mainThreadID ) /*0x464570*/
      initializationModea = self->flags & 1; /*0x464578*/
    else
      initializationModea = (self->flags & 0x40000) != 0; /*0x464586*/
    v12 = MEMORY[0xB33398]->mainThreadID; /*0x464590*/
    if ( v10() == v12 ) /*0x464597*/
      self->flags &= ~1u; /*0x464599*/
    else
      self->flags &= ~0x40000u; /*0x46459f*/
    TESDataHandler_LoadFiles_((int)g_TESDataHandler, arg3, arg4, arg5, 0, 0);// Verified game/world initialization path: TESSaveLoadGame_ReconcileExistingChanges calls TESDataHandler_LoadFiles here, then reattaches the player to the saved cell and runs worldspace/LOD initialization. TESDataHandler_LoadFiles rebuilds each WorldSpace's derived SubSpace index from persistentCell, confirming a full load reconstructs +0x60. This does not prove that the CreateDuplicateForm path triggers a reload. /*0x4645b0*/
    sub_45A530(self, initializationModea); /*0x4645bc*/
    sub_5AD750(0); /*0x4645c3*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x4645de*/
    TESObjectREFR_ChangeCell((TESObjectREFR *)reference, 0); /*0x4645e0*/
    sub_447D80((int)g_TESDataHandler, arg3, arg4); /*0x4645eb*/
    TESObjectREFR_ChangeCell((TESObjectREFR *)reference, DwordAtOffset40); /*0x4645f7*/
    sub_4431F0(MEMORY[0xB333A0], arg3, (char)self, arg4, arg5, (TESWorldSpace *)g_TESDataHandler->worldspaceList.item); /*0x46460b*/
    result = (TESWorldSpace *)PrintToLog___("Initializing LOD land..."); /*0x464615*/
    p_worldspaceList = &g_TESDataHandler->worldspaceList; /*0x464623*/
    if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFF4 ) /*0x464626*/
    {
      do /*0x464682*/
      {
        if ( !p_worldspaceList->next && !p_worldspaceList->item ) /*0x464636*/
          break; /*0x464639*/
        result = (TESWorldSpace *)Shared_GetPointerAtOffset7C(p_worldspaceList->item); /*0x464641*/
        if ( !result ) /*0x464648*/
        {
          result = (TESWorldSpace *)TESWorldSpace_GetRootTerrainLODQuadMap((int)p_worldspaceList->item); /*0x46464c*/
          if ( result ) /*0x464653*/
          {
            v16 = p_worldspaceList->item->vtbl->GetEditorName(p_worldspaceList->item); /*0x46465f*/
            sub_40FEC0("Initializing LOD land for worldspace '%s'", v16); /*0x464667*/
            v17 = (NiTMap_TESCELL *)TESWorldSpace_GetRootTerrainLODQuadMap((int)p_worldspaceList->item); /*0x464671*/
            result = (TESWorldSpace *)TESWorldSpaceTerrainLODQuadMap_Initialize(v17); /*0x464678*/
          }
        }
        p_worldspaceList = p_worldspaceList->next; /*0x46467d*/
      }
      while ( p_worldspaceList ); /*0x464682*/
    }
  }
  else
  {
    if ( !self->incomingChangesMap ) /*0x46468b*/
    {
      v18 = (MEF_U32PointerMapEntry32 *)FormHeapAlloc(0x10u); /*0x464692*/
      position = v18; /*0x46469a*/
      v47 = 1; /*0x4646a0*/
      if ( v18 ) /*0x4646a8*/
        v19 = ChangesMap::ChangesMap((ChangesMap *)v18); /*0x4646ac*/
      else
        v19 = 0; /*0x4646b3*/
      v47 = 0xFFFFFFFF; /*0x4646b5*/
      self->incomingChangesMap = v19; /*0x4646bd*/
    }
    v20 = initializationMode; /*0x4646c0*/
    if ( !initializationMode ) /*0x4646c6*/
      sub_45EC50((int)self, arg3, arg4, arg5); /*0x4646ca*/
    self->flags |= 0x40u; /*0x4646cf*/
    if ( !initializationMode ) /*0x4646d5*/
      sub_463700((char *)self, 0, arg3, arg4, arg5); /*0x4646d9*/
    __asm { fld     dword ptr ds:0A379CCh } /*0x4646e1*/
    bucketCount = self->currentChangesMap->bucketCount; /*0x4646e7*/
    __asm { fstp    [esp+64h+var_50] } /*0x4646ea*/
    v22 = 0; /*0x4646ee*/
    if ( bucketCount ) /*0x4646f2*/
    {
      buckets = self->currentChangesMap->buckets; /*0x4646f4*/
      v24 = buckets; /*0x4646f7*/
      while ( !*v24 ) /*0x464702*/
      {
        ++v22; /*0x464708*/
        ++v24; /*0x46470b*/
        if ( v22 >= bucketCount ) /*0x464710*/
          goto LABEL_32; /*0x464710*/
      }
      v25 = (MEF_U32PointerMapEntry32 *)buckets[v22]; /*0x46479a*/
    }
    else
    {
LABEL_32:
      v25 = 0; /*0x464712*/
    }
    position = v25; /*0x464716*/
    if ( v25 )
    {
      do
      {
        if ( MEMORY[0xB33398]->exitToMainMenu ) /*0x464726*/
        {
          __asm { fld     [esp+64h+var_50] } /*0x46472c*/
          __asm
          {
            fadd    qword ptr ds:0A3B150h
            fstp    [esp+68h+var_50]
            fld     [esp+68h+var_50]
            fstp    [esp+68h+var_68]; float
          }
          sub_57B950((char)self, arg3, arg4, 2, v39); /*0x464744*/
        }
        currentChangesMap = self->currentChangesMap; /*0x46475b*/
        valueOut = 0; /*0x46475e*/
        a1 = 0; /*0x464762*/
        NiTMap_U32Pointer_GetNextEntry( /*0x464766*/
          (MEF_U32PointerMapLayout32 *)currentChangesMap,
          &position,
          (unsigned int *)&a1,
          &valueOut);
        v27 = a1; /*0x46476b*/
        v28 = TESForm_LookupByFormID(a1); /*0x464770*/
        if ( v28 != (TESForm *)reference )
        {
          if ( v28 )
          {
            TESSaveLoadGame_ResetFormForLoad(self, arg3, arg4, arg5, v28, (OblivionChangeData *)valueOut); /*0x464790*/
          }
          else if ( *(int *)valueOut < 0 )
          {
            v29 = *((_DWORD *)valueOut + 1); /*0x4647b2*/
            if ( v29 )
            {
              qmemcpy(&data, (const void *)(v29 + 4), sizeof(data)); /*0x4647c9*/
              primaryLocationFormID = data.primaryLocationFormID; /*0x4647cb*/
              if ( !TESDataHandler_IsFormIDCreated_(data.primaryLocationFormID) ) /*0x4647d6*/
              {
                irefTable = self->irefTable; /*0x4647df*/
                if ( primaryLocationFormID <= irefTable->count ) /*0x4647e5*/
                  primaryLocationFormID = irefTable->data[primaryLocationFormID]; /*0x4647ee*/
                else
                  primaryLocationFormID = 0; /*0x4647e7*/
              }
              fallbackLocationFormID = data.fallbackLocationFormID; /*0x4647f1*/
              data.primaryLocationFormID = primaryLocationFormID; /*0x4647fc*/
              if ( TESDataHandler_IsFormIDCreated_(data.fallbackLocationFormID) ) /*0x464800*/
              {
                v33 = fallbackLocationFormID; /*0x464809*/
              }
              else
              {
                v34 = self->irefTable; /*0x46480d*/
                if ( fallbackLocationFormID <= v34->count ) /*0x464813*/
                  v33 = v34->data[fallbackLocationFormID]; /*0x46481c*/
                else
                  v33 = 0; /*0x464815*/
              }
              data.fallbackLocationFormID = v33; /*0x464820*/
              v35 = TESForm_LookupByFormID(primaryLocationFormID); /*0x464835*/
              CellAtCellCoord = (TESObjectCELL *)OblivionDynamicCast( /*0x46484e*/
                                                   v35,
                                                   0,
                                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                   &TESObjectCELL `RTTI Type Descriptor',
                                                   0);
              v37 = (TESWorldSpace *)OblivionDynamicCast( /*0x464850*/
                                       v35,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESWorldSpace `RTTI Type Descriptor',
                                       0);
              if ( v37 )
              {
                __asm
                {
                  fld     [esp+64h+data.worldX]; Verified: source world X; used when source locator is a TESWorldSpace.
                  fistp   [esp+64h+var_40]
                  fld     [esp+64h+data.worldY]; Verified: source world Y; used when source locator is a TESWorldSpace.
                  fistp   [esp+64h+var_44]
                }
                CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v37, v44 >> 0xC, v43 >> 0xC); /*0x464883*/
              }
              if ( CellAtCellCoord ) /*0x464887*/
              {
                if ( TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) ) /*0x464892*/
                {
                  v38 = TESSaveLoadGame_RebuildReferenceFromLocationOverrides(v27, &data); /*0x4648a3*/
                  TESObjectCELL_AddReference(CellAtCellCoord, v38); /*0x4648ab*/
                }
              }
            }
          }
        }
      }
      while ( position );
      v20 = initializationMode; /*0x4648bc*/
    }
    self->currentChangesMap->vtbl->removeAllChanges(self->currentChangesMap); /*0x4648c8*/
    if ( self->currentChangesMap ) /*0x4648ca*/
      self->currentChangesMap->vtbl->destroy(self->currentChangesMap, 1u); /*0x4648d7*/
    result = (TESWorldSpace *)self->incomingChangesMap; /*0x4648d9*/
    self->flags &= ~0x40u; /*0x4648dc*/
    self->currentChangesMap = (ChangesMap *)result; /*0x4648e2*/
    self->incomingChangesMap = 0; /*0x4648e5*/
    if ( !v20 ) /*0x4648e8*/
      self[1].unknown1C[4] = 0; /*0x4648ea*/
  }
  return result; /*0x4648f0*/
}
