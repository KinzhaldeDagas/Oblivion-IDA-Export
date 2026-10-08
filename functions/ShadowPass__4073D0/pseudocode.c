// Strict retail shadow lifecycle: builds the engine active list, admits player/process actors within the native map budget, partitions lights, renders maps/receivers, and performs native cleanup. No TESObjectSTAT cell enumeration occurs here.
void __thiscall ShadowPass(NiDX9Renderer *renderer)
{
  BOOL v1; // eax
  _DWORD *ShadowSceneNode; // eax
  BSRenderedTexture *v3; // eax
  int v4; // edi
  int *v5; // ebp
  Ni2DBuffer **v6; // ebx
  BSRenderedTexture *v7; // esi
  PlayerCharacter *v8; // ecx
  NiNode *PlayerNode; // eax
  Actor *i; // esi
  volatile LONG *v11; // eax
  NiCullingProcess *cullingProcess; // ecx
  NiNode *nodeSkyRoot; // eax
  char m_flags; // cl
  float *v15; // esi
  int v16; // ebp
  void (__thiscall ***v17)(_DWORD, int); // edi
  bool v18; // bl
  void (__thiscall ***v19)(_DWORD, int); // edi
  _DWORD *v20; // eax
  bool v21; // bl
  void (__thiscall ***v22)(_DWORD, int); // edi
  _DWORD *v23; // eax
  int v24; // ecx
  _DWORD *v25; // edx
  int v26; // edi
  _DWORD *v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // esi
  NiNode *v31; // eax
  double v32; // st7
  Sky *GlobalObject; // eax
  float v34; // [esp+18h] [ebp-60h]
  char v35; // [esp+2Ch] [ebp-4Ch]
  bool v36; // [esp+2Dh] [ebp-4Bh]
  char v37; // [esp+2Eh] [ebp-4Ah]
  char v38; // [esp+2Fh] [ebp-49h]
  int v39; // [esp+30h] [ebp-48h]
  BSRenderedTexture *v40; // [esp+34h] [ebp-44h]
  int v41; // [esp+38h] [ebp-40h]
  Ni2DBuffer **v42; // [esp+3Ch] [ebp-3Ch]
  ShadowSceneLight *v43; // [esp+40h] [ebp-38h]
  NiNode *v44; // [esp+40h] [ebp-38h]
  int v45; // [esp+44h] [ebp-34h] BYREF
  int v46; // [esp+48h] [ebp-30h]
  NiCullingProcess *v47; // [esp+4Ch] [ebp-2Ch]
  int v48; // [esp+50h] [ebp-28h] BYREF
  int v49; // [esp+54h] [ebp-24h] BYREF
  int v50; // [esp+58h] [ebp-20h] BYREF
  int v51; // [esp+5Ch] [ebp-1Ch] BYREF
  int v52; // [esp+60h] [ebp-18h] BYREF
  float v53; // [esp+64h] [ebp-14h]
  int v54; // [esp+74h] [ebp-4h]

  v39 = 0;                                      // First ShadowPass readiness condition: BSSM shader package version must be >= 3. /*0x4073e4*/
  if ( MEMORY[0xB42F48] >= 3 && (v1 = (MEMORY[0xB42F40] & 0x10) != 0, (MEMORY[0xB42F40] & 0x10) != 0) && unk_B333B8 )// Second ShadowPass readiness condition: BSShaderFeatureMask bit 0x10 must be set. /*0x407407*/
  {
    MEMORY[0xB42F40] &= ~0x10u; /*0x407409*/
    g_bShadowMapDisableLatched = v1; /*0x407412*/
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x407417*/
    ShadowSceneNode_DiscardAllActiveShadowMaps(ShadowSceneNode); /*0x407421*/
    BSTextureManager__ReserveFrustumShadowTextures(MEMORY[0xB42F50], ::renderer, 0); /*0x40742e*/
  }
  else if ( g_bShadowMapDisableLatched ) /*0x407437*/
  {
    if ( !unk_B333B8 ) /*0x40743b*/
    {
      MEMORY[0xB42F40] |= 0x10u; /*0x40743d*/
      v3 = (BSRenderedTexture *)g_iActorShadowCountInteriorSetting; /*0x407443*/
      g_bShadowMapDisableLatched = 0; /*0x407448*/
      if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x407454*/
        v3 = (BSRenderedTexture *)g_iActorShadowCountExteriorSetting; /*0x40745a*/
      BSTextureManager__ReserveFrustumShadowTextures(MEMORY[0xB42F50], ::renderer, v3); /*0x40746d*/
    }
  }
  BSShaderAccumulator_GetOrCreateGlobal(); /*0x407472*/
  if ( unk_B42CDB || MEMORY[0xB42F48] < 3 || (MEMORY[0xB42F40] & 0x10) == 0 ) /*0x4074a1*/
    goto LABEL_97;                              // Complete-pass feature gate: a clear shadow-map bit 0x10 exits before any native shadow admission/presentation. /*0x4074a1*/
  v4 = 0; /*0x4074b1*/
  v5 = ProcessLists__TrimShadowCandidateListToLimit((int *)&MEMORY[0xB3BD00]);// Trim the ProcessLists shadow candidate list to the native candidate cap; the returned BSSimpleList is then consumed in order until the interior/exterior map budget is exhausted. /*0x4074b4*/
  v6 = (Ni2DBuffer **)GetShadowSceneNode(0); /*0x4074bb*/
  v42 = v6; /*0x4074c2*/
  ShadowSceneNode_DiscardActiveMapsAndMarkSourcesCulled(v6);// ShadowPass frame cleanup: releases stale active-light shadow-map/receiver presentation state before admission. /*0x4074c6*/
  v7 = (BSRenderedTexture *)g_iActorShadowCountInteriorSetting; /*0x4074d3*/
  if ( !MEMORY[0xB333A0]->currentInteriorCell ) // Read current cell/world mode once from [0x00B333A0]+0x34 to select the exterior or interior actor-shadow count setting. /*0x4074d0*/
    v7 = (BSRenderedTexture *)g_iActorShadowCountExteriorSetting; /*0x4074db*/
  v40 = v7;                                     // Latch the selected exterior/interior shadow-map count in pass-local state. /*0x4074ef*/
  BSTextureManager__ReserveFrustumShadowTextures(MEMORY[0xB42F50], ::renderer, v7);// Reserve exactly the setting-derived shadow-map count through BSTextureManager_ReserveShadowMaps. /*0x4074f3*/
  if ( !v7 )                                    // The selected interior/exterior actor-shadow count is the exact map/admission budget; zero takes the active-list reset path. /*0x4074fa*/
  {
    ShadowSceneNode_ResetActiveLightList(v6);   // Count-zero terminal path: reset the active ShadowSceneLight list and exit before player, actor, receiver, or map rendering work. /*0x4074fe*/
    goto LABEL_97; /*0x407503*/
  }
  v8 = reference; /*0x407508*/
  v43 = 0; /*0x407515*/
  if ( !reference->isThirdPerson ) /*0x40750e*/
  {
    if ( !sub_65D650() ) /*0x407522*/
      goto LABEL_27; /*0x407522*/
    v8 = reference; /*0x407528*/
  }
  if ( (!v8->vtbl->super.GetMountedHorse((Actor *)v8) /*0x407581*/
     || reference->vtbl->super.super.super.GetSleepState((TESObjectREFR *)reference) != kSitSleep_Sitting
     && reference->vtbl->super.super.super.GetSleepState((TESObjectREFR *)reference) != kSitSleep_SittingIn
     && reference->vtbl->super.super.super.GetSleepState((TESObjectREFR *)reference) != kSitSleep_SittingOut)
    && !Actor_GetRefractionAmount((Actor *)reference) )
  {
    v47 = (NiCullingProcess *)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Invisibility); /*0x40759c*/
    if ( (double)(int)v47 == 0.0 ) /*0x4075af*/
    {
      PlayerNode = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x4075b8*/
      v43 = ShadowSceneNodeAddShadowCaster(v6, (volatile LONG *)PlayerNode);// Retail AddShadowCaster call for the player NiNode, subject to native pass state and remaining budget. /*0x4075c5*/
      v4 = 1; /*0x4075c9*/
    }
  }
LABEL_27:
  for ( i = (Actor *)*v5; *v5; i = (Actor *)*v5 ) /*0x4075ce*/
  {
    if ( v4 >= (int)v40 ) /*0x4075e4*/
      break; /*0x4075e4*/
    if ( i->vtbl->super.super.GetNiNode((TESObjectREFR *)i) ) /*0x4075f4*/
    {                                           // Apply Oblivion's base actor shadow eligibility gate (process-derived state plus ExtraGhost rejection) before the separate sitting, refraction, invisibility, and budget gates.
      if ( Actor__PassesBaseShadowEligibility(i) ) /*0x4075fc*/
      {
        if ( (!i->vtbl->GetMountedHorse(i) || i->vtbl->super.super.GetSleepState((TESObjectREFR *)i) != kSitSleep_Sitting) /*0x407628*/
          && !Actor_GetRefractionAmount(i) )
        {
          v47 = (NiCullingProcess *)i->vtbl->GetActorValue(i, kActorVal_Invisibility); /*0x40763f*/
          if ( (double)(int)v47 == 0.0 ) /*0x407652*/
          {
            v11 = (volatile LONG *)i->vtbl->super.super.GetNiNode((TESObjectREFR *)i); /*0x40765e*/
            ShadowSceneNodeAddShadowCaster(v6, v11);// Retail AddShadowCaster call for process-list Actor NiNodes, subject to remaining native budget. /*0x407663*/
            ++v4; /*0x407668*/
          }
        }
      }
    }
    v5 = (int *)v5[1]; /*0x40766b*/
    if ( !v5 ) /*0x407670*/
      break; /*0x407670*/
  }
  ShadowSceneNode_SeedAndPartitionActiveLights(v6, (int)v43);// Seed/partition active lights after native player/process-actor admission. No retail per-reference interior/static enumerator occurs in this interval. /*0x407684*/
  v44 = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x407698*/
  if ( v44 ) /*0x40769c*/
  {
    cullingProcess = g_WorldSceneReceiverRoot->cullingProcess; /*0x4076a7*/
    cullingProcess->Camera = g_WorldSceneReceiverRoot->camera; /*0x4076b3*/
    v47 = cullingProcess; /*0x4076c3*/
    v35 = unk_B35C00 & 1; /*0x4076d1*/
    TES__ShowCellNode((TESObjectCELL **)MEMORY[0xB333A0], 0, 0, 1);// Temporarily hide loaded Actor cell nodes during shadow-light culling/receiver preparation; prior mask state is restored at 0x4079E2. /*0x4076d5*/
    v36 = (unk_B35C00 & 8) != 0; /*0x4076ef*/
    TES__ShowCellNode((TESObjectCELL **)MEMORY[0xB333A0], 3u, 0, 1);// Temporarily hide loaded Water Quad cell nodes during shadow-light culling/receiver preparation; prior mask state is restored at 0x4079FA. /*0x4076f3*/
    nodeSkyRoot = MEMORY[0xB333A0]->sky->nodeSkyRoot; /*0x407700*/
    m_flags = nodeSkyRoot->members.super.m_flags; /*0x407703*/
    nodeSkyRoot->members.super.m_flags |= 1u; /*0x407706*/
    v37 = m_flags & 1; /*0x40770d*/
    LOBYTE(nodeSkyRoot) = v44->members.super.m_flags; /*0x407715*/
    v44->members.super.m_flags |= 1u; /*0x407718*/
    v38 = (unsigned __int8)nodeSkyRoot & 1; /*0x40771e*/
    v53 = *(float *)&unk_B36094; /*0x407729*/
    byte_B0727C = 0; /*0x40772d*/
    LOBYTE(v46) = 0; /*0x407734*/
    if ( unk_B36094 ) /*0x407739*/
    {
      LOBYTE(v46) = *(_BYTE *)(unk_B36094 + 0x18) & 1; /*0x407748*/
      if ( !byte_B06F14 ) /*0x40774c*/
        *(_WORD *)(unk_B36094 + 0x18) |= 1u; /*0x40774e*/
    }
    v15 = (float *)ShadowSceneNode_BeginActiveLightIteration(v6);// Begin native saved-next iteration over the prepared active ShadowSceneLight list. /*0x40775b*/
    v41 = 0; /*0x40775f*/
    if ( v15 ) /*0x407767*/
    {
      while ( 1 ) /*0x40777c*/
      {
        v16 = *ShadowSceneLight_GetLightRef(v15, &v48); /*0x40777c*/
        if ( v48 ) /*0x407784*/
        {
          v17 = (void (__thiscall ***)(_DWORD, int))v48; /*0x407786*/
          if ( !InterlockedDecrement((volatile LONG *)(v48 + 4)) ) /*0x40778c*/
            (**v17)(v17, 1); /*0x4077a2*/
        }
        if ( !v16 ) /*0x4077a6*/
          goto LABEL_84; /*0x4077a6*/
        v18 = 0; /*0x4077ed*/
        if ( flt_B2C680 > (double)v15[0x38] || v15[0x37] > 0.1000000014901161 ) /*0x4077d2*/
        {
          v39 |= 1u; /*0x4077e2*/
          if ( (*(_BYTE *)(*ShadowSceneLight_GetLightRef(v15, &v49) + 0x18) & 1) != 0 ) /*0x4077eb*/
            v18 = 1; /*0x4077d2*/
        }
        if ( (v39 & 1) != 0 ) /*0x4077f8*/
        {
          v19 = (void (__thiscall ***)(_DWORD, int))v49; /*0x4077fa*/
          v39 &= ~1u; /*0x4077fe*/
          if ( v49 ) /*0x407805*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v49 + 4)) ) /*0x40780b*/
            {
              if ( v19 ) /*0x407817*/
                (**v19)(v19, 1); /*0x407821*/
            }
          }
        }
        if ( v18 ) /*0x407825*/
        {
          if ( (*(_BYTE *)(*((_DWORD *)v15 + 0x4C) + 0x18) & 1) != 0 ) /*0x407831*/
          {
            ShadowSceneLight_UpdateTransitionState(v15, 0.0, COERCE_FLOAT(1));// Transition branch passes mode 1 when the direct source is also culled. /*0x407835*/
          }
          else
          {
            if ( v41 < (int)v40 ) /*0x40783f*/
            {
              v20 = ShadowSceneLight_GetLightRef(v15, &v50); /*0x407848*/
              *(_WORD *)(*v20 + 0x18) &= ~1u; /*0x40784f*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v50); /*0x407859*/
            }
            ShadowSceneLight_UpdateTransitionState(v15, 0.0, 0.0);// Transition branch passes mode 0 after the resolved source clears the native budget/state gate. /*0x407868*/
          }
        }
        v21 = 0; /*0x4078a0*/
        if ( v41 < (int)v40 ) /*0x407875*/
        {
          v39 |= 2u; /*0x407885*/
          if ( (*(_BYTE *)(*ShadowSceneLight_GetLightRef(v15, &v45) + 0x18) & 1) == 0 /*0x40789a*/
            && (*(_BYTE *)(*((_DWORD *)v15 + 0x4C) + 0x18) & 1) == 0 )
          {
            v21 = 1;                            // Before projector setup, ShadowPass requires both backing NiLight and exact caster-root AppCulled bits to be clear. /*0x407875*/
          }
        }
        v22 = (void (__thiscall ***)(_DWORD, int))v45; /*0x4078a7*/
        if ( (v39 & 2) != 0 ) /*0x4078ab*/
        {
          v39 &= ~2u; /*0x4078ad*/
          if ( v45 ) /*0x4078b4*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v45 + 4)) ) /*0x4078ba*/
            {
              if ( v22 ) /*0x4078c6*/
                (**v22)(v22, 1); /*0x4078d0*/
            }
          }
        }
        if ( !v21 ) /*0x4078d4*/
          break;                                // Pre-render predicate gate before projection, CullProcess, and receiver association. /*0x4078d4*/
        v23 = *((_DWORD **)v15 + 0x4C); /*0x4078da*/
        v24 = v23[8]; /*0x4078e0*/
        v25 = (_DWORD *)v23[9]; /*0x4078e3*/
        v26 = v23[0xA]; /*0x4078e6*/
        v54 = v23[0xB]; /*0x4078ef*/
        ShadowSceneLight_UpdatePerSourceProjection((int)v15, v25, 0.0, v24, (int)v25, v26);// Sole direct ShadowPass call to ShadowSceneLight_UpdatePerSourceProjection; projection commits before culling and receiver reconciliation. /*0x407901*/
        ShadowSceneLight_CullProcess(v15, (int)v47);// Run ShadowSceneLight_CullProcess at its true entry 0x007D6390. /*0x40790d*/
        if ( *((_WORD *)v15 + 0x8C) == 0xFF || v15[0x36] < 0.05 )// Reject this light when committed visibility/fade light+0xD8 is below 0.05. /*0x40792e*/
        {
          v27 = ShadowSceneLight_GetLightRef(v15, &v51); /*0x407971*/
          *(_WORD *)(*v27 + 0x18) |= 1u;        // Set source NiAVObject flags+0x18 bit0 on this consumed/culled path. /*0x407978*/
          v28 = v51; /*0x40797d*/
          goto LABEL_81; /*0x407981*/
        }
        ++v41;                                  // Increment the native accepted-light count before receiver reconciliation. /*0x407930*/
        ShadowSceneLight_BeginReceiverReconciliation((Ni2DBuffer **)v15);// Begin receiver reconciliation by seeding/reusing the fence at +0x148 and cursor at +0x144. /*0x407937*/
        ShadowSceneLight_AddToScene(v15, g_WorldSceneReceiverRoot);// Associate the native world scene receiver root through ShadowSceneLight_AddToScene. /*0x407945*/
        if ( g_bShadowSourceAsReceiverSetting ) // Test the native self-shadow/source-as-receiver setting. /*0x407951*/
          ShadowSceneLight_AddToScene(v15, *((_BYTE **)v15 + 0x4C));// When enabled, submit the exact caster root light+0x130 as an additional receiver root. /*0x40795c*/
        ShadowSceneLight_RemoveStaleReceivers((int **)v15);// Finalize receiver reconciliation by removing the stale cursor tail. /*0x407963*/
LABEL_84:
        v15 = (float *)ShadowSceneNode_NextActiveLight(v42);// Advance the native saved-next active-light iterator. /*0x4079bc*/
        if ( !v15 ) /*0x4079c9*/
          goto LABEL_85; /*0x4079c9*/
      }
      v29 = ShadowSceneLight_GetLightRef(v15, &v52); /*0x40798a*/
      *(_WORD *)(*v29 + 0x18) |= 1u;            // Set source NiAVObject flags+0x18 bit0 on this consumed/culled path. /*0x407991*/
      v28 = v52; /*0x407996*/
LABEL_81:
      if ( v28 ) /*0x40799c*/
      {
        v30 = (void (__thiscall ***)(_DWORD, int))v28; /*0x40799e*/
        if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) ) /*0x4079a4*/
          (**v30)(v30, 1); /*0x4079ba*/
      }
      goto LABEL_84; /*0x4079ba*/
    }
LABEL_85:
    if ( !v35 ) /*0x4079d4*/
      TES__ShowCellNode((TESObjectCELL **)MEMORY[0xB333A0], 0, 1, 1); /*0x4079e2*/
    if ( !v36 ) /*0x4079ec*/
      TES__ShowCellNode((TESObjectCELL **)MEMORY[0xB333A0], 3u, 1, 1); /*0x4079fa*/
    v31 = MEMORY[0xB333A0]->sky->nodeSkyRoot; /*0x407a0d*/
    if ( v37 ) /*0x407a10*/
      v31->members.super.m_flags |= 1u; /*0x407a12*/
    else
      v31->members.super.m_flags &= ~1u; /*0x407a19*/
    if ( v53 != 0.0 ) /*0x407a25*/
      sub_404CD0((_WORD *)LODWORD(v53), v46); /*0x407a2c*/
    byte_B0727C = 1;                            // Restore native culling-process state byte 0x00B0727C to 1 immediately before active shadow-map rendering. /*0x407a33*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x407a3a*/
    ShadowSceneNode_RenderActiveShadowLights_Mode5(v42, (int)v47);// Render the prepared active-light list only after projection, culling, and receiver reconciliation finish. /*0x407a4b*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x407a52*/
    if ( v38 ) /*0x407a63*/
      v44->members.super.m_flags |= 1u; /*0x407a65*/
    else
      v44->members.super.m_flags &= ~1u; /*0x407a6c*/
  }
LABEL_97:
  if ( MEMORY[0xB430AD] ) /*0x407a79*/
  {
    if ( !InterfaceManager_IsMenuMode() /*0x407aa3*/
      || InterfaceManager::IsOpenedMenuDialogue()
      || sub_572E30(2)
      || Sky_CreateOrGetGlobalObject()->unk100 )
    {
      v53 = flt_B06530 * MEMORY[0xB33E9C]; /*0x407ab9*/
      v32 = v53; /*0x407abd*/
      v34 = v53; /*0x407ac1*/
      GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x407ac4*/
      Sky__RenderReflectionCubeMapIfNeeded(GlobalObject, v32, v34); /*0x407acb*/
    }
  }
}
