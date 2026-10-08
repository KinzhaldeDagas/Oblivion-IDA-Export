// HighProcess package-procedure action 5. Its completed/idle branch performs the first random-social scan while the separate +0x230 idle-window timer is positive; it does not test conversationScanCooldown. A nonpositive idle timer skips one scan update and is reseeded to 1.000..5.999 seconds.
void __thiscall HighProcess::UpdatePackageProcedureAction5(HighProcess *this, Actor *actor)
{
  double v2; // st0
  double v3; // st1
  double v4; // st2
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  char **v11; // ebp
  ExtraDataList ****v13; // eax
  ExtraDataList ****v14; // ebx
  double v15; // st7
  char v16; // al
  UInt32 *p_unk0B0; // ebp
  TESObjectREFR *v18; // ecx
  bool v19; // zf
  TESObjectREFR *furniture; // ecx
  int v21; // ebx
  int v22; // eax
  int v23; // edx
  ActorAnimData *v24; // eax
  ExtraDataList **v25; // eax
  MiddleHighProcess_vtbl *v26; // eax
  ActorAnimData *v27; // eax
  BaseExtraList *v28; // ebp
  UInt32 *p_unk03C; // ebx
  UInt32 v30; // eax
  UInt32 unk044; // eax
  TESObjectREFR *v32; // eax
  TESObjectREFR **v33; // eax
  BSExtraDataVtbl *Owner; // eax
  MiddleHighProcess_vtbl *v35; // edi
  ActorVtbl *v36; // eax
  TESObjectCELL *v37; // ebp
  int *v38; // eax
  double v39; // st7
  float *v40; // eax
  void (__thiscall *Unk_159)(LowProcess *__hidden); // edx
  MiddleHighProcess_vtbl *v42; // eax
  int v43; // ebp
  TESForm *v44; // eax
  ActorAnimData *v45; // eax
  MiddleHighProcess_vtbl *v46; // edi
  DetectionList *detectionList; // eax
  DetectionList::Data *data; // eax
  Actor *v49; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  double v51; // st7
  TESObjectCELL *v52; // eax
  LowProcess *process; // ecx
  LowProcess *v54; // eax
  TESPackage *editorPackage; // eax
  char v56; // al
  MiddleHighProcess_vtbl *v57; // edx
  char v58; // bl
  LowProcess *v59; // eax
  LowProcess *v60; // ebx
  BSExtraData *v61; // eax
  TESPackage *CurrentPackage; // eax
  float a5; // [esp+24h] [ebp-3Ch]
  char v64; // [esp+28h] [ebp-38h]
  char v65; // [esp+2Ch] [ebp-34h]
  int v66; // [esp+30h] [ebp-30h]
  int v67; // [esp+34h] [ebp-2Ch]
  int v68; // [esp+38h] [ebp-28h]
  int v69; // [esp+3Ch] [ebp-24h]
  TESPackage *v70; // [esp+40h] [ebp-20h]
  float v71; // [esp+40h] [ebp-20h]
  int v72; // [esp+40h] [ebp-20h]
  int v73; // [esp+44h] [ebp-1Ch]
  DetectionList *i; // [esp+44h] [ebp-1Ch]
  int a2; // [esp+48h] [ebp-18h] BYREF
  int v76; // [esp+4Ch] [ebp-14h]
  int v77; // [esp+50h] [ebp-10h]
  int v78[3]; // [esp+54h] [ebp-Ch] BYREF
  TESChildCELL *v79; // [esp+64h] [ebp+4h]
  float v80; // [esp+64h] [ebp+4h]
  float v81; // [esp+64h] [ebp+4h]
  float v82; // [esp+64h] [ebp+4h]
  float v83; // [esp+64h] [ebp+4h]
  float v84; // [esp+64h] [ebp+4h]
  float v85; // [esp+64h] [ebp+4h]
  float v86; // [esp+64h] [ebp+4h]

  v11 = (char **)this->GetCurrentPackage(this); /*0x62da23*/
  v70 = (TESPackage *)v11; /*0x62da2f*/
  if ( this->Unk_2F(this) || !Actor::HasNPCBaseForm(actor) )
  {
    v43 = sub_566D00(v11, (int)actor); /*0x62deff*/
    if ( !Actor::HasNPCBaseForm(actor) ) /*0x62df01*/
    {
      if ( v43 ) /*0x62df0c*/
      {
        if ( (*(_DWORD *)(v43 + 8) & 0x20) == 0 /*0x62df29*/
          && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v43 + 0x170))(v43) + 4) == 0x19 )
        {
          actor->vtbl->Unk_B3(actor, (TESObjectREFR *)v43, 1); /*0x62df3a*/
          this->usedItem = (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v43 + 0x170))(v43); /*0x62df49*/
          v44 = (TESForm *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v43 + 0x170))(v43, v43 + 0x44, 1); /*0x62df5d*/
          Actor_EquipIngredient_((PlayerCharacter *)actor, v7, v8, v9, v44, 0, v66);// RadiantAI: alternate path equips selected edible ingredient after acquire scan. /*0x62df62*/
          this->Unk_164(this, actor); /*0x62df72*/
        }
      }
    }
    if ( actor->vtbl->super.super.GetAnimData(actor) )
    {
      v45 = actor->vtbl->super.super.GetAnimData(actor); /*0x62df92*/
      if ( ActorAnimData_IsIdleInactive(v45) )
      {                                         // Read action-5 idle-window timer (+0x230). Positive enters the decrement-and-social-scan branch; zero/negative performs the alternate idle action and reseeds the timer instead.
        if ( ((double (__thiscall *)(HighProcess *))this->Unk_87)(this) > *(float *)&SrcStr )
        {
          v83 = ((double (__thiscall *)(HighProcess *))this->Unk_87)(this);// Positive action-5 idle timer: read +0x230 so the following code can subtract the frame delta. /*0x62e02c*/
          v84 = v83 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62e045*/
          ((void (__thiscall *)(HighProcess *, _DWORD))this->Unk_88)(this, LODWORD(v84));// Store action5IdleTimer - frameDelta, then immediately scan detection candidates. This timer creates only a one-update reseed gap at expiry; it is not HighProcess.conversationScanCooldown. /*0x62e050*/
          detectionList = this->detectionList;  // Action-5 social scan begins after decrementing the positive +0x230 idle timer. No read of conversationScanCooldown occurs in this handler, so its later 60-second write does not gate this action-5 scan. /*0x62e052*/
          this->unk1D0 = 0; /*0x62e05a*/
          for ( i = detectionList; i; detectionList = i )
          {
            data = detectionList->data; /*0x62e070*/
            if ( !data ) /*0x62e074*/
              break; /*0x62e074*/
            v49 = data->actor; /*0x62e07e*/
            if ( *(_DWORD *)&data->detectionState == 3
              && !v49->vtbl->super.super.IsDead((TESObjectREFR *)v49, 0)// Unlike the action-1 scan, action 5 rejects dead candidates before radius, recent-target, and chance processing.
              && v49 != actor
              && v49 != (Actor *)reference
              && Actor_IsNPC(v49) )
            {
              v71 = flt_A57EF8;                 // First random-conversation scan starts with an engine cap of 200.0 units, then selects fAISocialRadiusToTriggerConversation or its interior variant. /*0x62e0cb*/
              v85 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x5E]);// Random-conversation scan loads exterior social radius; interior cells substitute fAISocialRadiusToTriggerConversationInterior. /*0x62e0d8*/
              DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x62e0dc*/
              if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x62e0e3*/
                v85 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x60]); /*0x62e0f8*/
              if ( v85 < fConst_200 )           // Observed Oblivion radius quirk: if the selected cell-specific radius is below 200, the effective threshold is replaced with the EXTERIOR radius. Thus exterior uses min(200, exterior); interior uses 200 when interior>=200, but exterior when interior<200. /*0x62e10b*/
                v71 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x5E]); /*0x62e119*/
              if ( v71 >= TesObjectREF_GetDistance((TESObjectREFR *)v49, (TESObjectREFR *)actor, 0)
                && Actor::CanStartSocialConversationWith(v49, actor) )
              {
                v51 = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&this->recentSocialTargets)
                    ? *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[8])
                    : this->recentSocialTargetCooldown - *(float *)&MEMORY[0xB33E90][0xC];// Recent-target timer behavior: empty HighProcess.recentSocialTargets initializes recentSocialTargetCooldown from fAItalktosameNPCtimer (120s); otherwise each candidate reaching this block subtracts one frame delta. Multiple candidates can therefore decrement it multiple times in one scan invocation.
                this->recentSocialTargetCooldown = v51; /*0x62e173*/
                if ( this->recentSocialTargetCooldown <= 0.0 ) /*0x62e186*/
                  BSSimpleList_Clear(&this->recentSocialTargets.data);// When HighProcess+0x198 expires, clear the recent-social-target list at +0x190. Candidate membership is checked before the conversation chance threshold. /*0x62e18a*/
                v72 = Game_RandomLargeInteger(0) % (int)0xFFFFFF9C;// Compiler-expanded rand() % 100 produces the 0..99 social-conversation chance roll. /*0x62e1b1*/
                if ( !BSSimpleList::Contains((BSSimpleList_VoidPtr *)&this->recentSocialTargets, v49) )// Rejects actors already present in the HighProcess recent-social-target list; the list is cleared only after its cooldown expires. /*0x62e1b8*/
                {
                  v86 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x62]);// Uses fAISocialchanceForConversation, or the interior variant, as a strict percent threshold for this candidate. /*0x62e1cf*/
                  v52 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x62e1d3*/
                  if ( TESObjectCELL_IsInterior(v52) ) /*0x62e1da*/
                    v86 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x64]); /*0x62e1ef*/
                  if ( v86 > (double)v72 ) /*0x62e202*/
                  {
                    BSSimpleList_PushFront(&this->recentSocialTargets.data, (int)v49);// Candidate is recorded in recentSocialTargets immediately after radius/chance pass, before final eligibility. A later-ineligible candidate remains suppressed until recentSocialTargetCooldown expires and clears the list. /*0x62e228*/
                    ((void (__thiscall *)(LowProcess *, Actor *))v49->members.super.process->Unk_5A)( /*0x62e239*/
                      v49->members.super.process,
                      actor);                   // Calls candidate.process->RememberSocialTarget(initiator), making the recent-target exclusion symmetric before final eligibility and before StartConversationPackage.
                    if ( Actor::HasNPCBaseForm(v49) /*0x62e281*/
                      && !v49->vtbl->super.super.HasFatigue((TESObjectREFR *)v49)
                      && !Actor::IsSleeping(v49)
                      && Actor::GetDeadState(v49) != 3
                      && Actor::CanStartSocialConversationWith(v49, actor) )
                    {
                      process = v49->members.super.process; /*0x62e28e*/
                      if ( process ) /*0x62e293*/
                      {
                        if ( !((unsigned __int8 (__thiscall *)(LowProcess *))process->Unk_7F)(process) /*0x62e2c4*/
                          && v49 != (Actor *)reference
                          && !v49->vtbl->super.super.IsDead((TESObjectREFR *)v49, 0) )
                        {
                          if ( v49->vtbl->super.super.GetNiNode((TESObjectREFR *)v49) ) /*0x62e2d9*/
                          {
                            v54 = v49->members.super.process; /*0x62e2e3*/
                            if ( v54 ) /*0x62e2e8*/
                            {
                              editorPackage = v54->editorPackage; /*0x62e2ee*/
                              if ( !editorPackage || !TESPackage::IsTemporaryOverrideType(editorPackage) )// Reject candidate when its current package is a temporary/internal override type such as Combat, Alarm, Flee, Trespass, Dialogue, Spectator, ReactToDead, mount/dismount, Vampire Feed, Surface, or Movement Blocked. /*0x62e2f7*/
                              {
                                v56 = ((int (__thiscall *)(Actor *, Actor *, _DWORD, _DWORD))actor->vtbl->Unk_BD)( /*0x62e313*/
                                        actor,
                                        v49,
                                        0,
                                        0);     // Authoritative ambient start: Actor::StartConversationPackage(initiator, candidate, false, null). Null startingTopic resolves stock HELLO FormID 000000D2; ANY (000000D3) is data-linked rather than hardcoded, and dialogue creation ultimately falls back to GOODBYE (000000D4) on failure.
                                v57 = this->__vftable; /*0x62e317*/
                                this->unk1D8 = 0.0; /*0x62e319*/
                                v58 = v56; /*0x62e323*/
                                ((void (__thiscall *)(HighProcess *, _DWORD))v57->Unk_88)(this, 0.0); /*0x62e32d*/
                                this->conversationScanCooldown = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[0xA]);// After every StartConversationPackage attempt, successful or not, action 5 writes fAItalktoNPCtimer (60s) to conversationScanCooldown. This handler never reads that field; the write gates the separate action-1 scan. /*0x62e33d*/
                                if ( v58 ) /*0x62e343*/
                                {
                                  if ( !Actor::GetCurrentPackage(v49) /*0x62e364*/
                                    || (Actor::GetCurrentPackage(v49)->members.packageFlags & 0x1000) == 0 )
                                  {
                                    v59 = v49->members.super.process; /*0x62e366*/
                                    if ( v59->editorPackage ) /*0x62e369*/
                                    {
                                      if ( !TESPackage_IsRuntimePackage(v59->editorPackage) ) /*0x62e372*/
                                      {
                                        v60 = v49->members.super.process; /*0x62e37b*/
                                        v65 = v60->GetUnk01C(v60); /*0x62e38e*/
                                        v64 = v60->Unk_2F(v60); /*0x62e39b*/
                                        v61 = (BSExtraData *)v60->GetUnk02C(v60); /*0x62e3a2*/
                                        sub_4268B0( /*0x62e3b0*/
                                          &v49->members.super.super.baseExtraList,
                                          v60->editorPackage,
                                          v60->editorPackProcedure,
                                          v61,
                                          v64,
                                          v65);
                                      }
                                    }
                                    CurrentPackage = Actor::GetCurrentPackage(actor); /*0x62e3bb*/
                                    Actor_AddPackage_(v49, CurrentPackage, 0, 1);// Partner handoff: install the initiator's DialoguePackage pointer as the candidate process's editorPackage (setCurrent=false, markDynamic=true), then signal the partner process via the following virtual call. Both actors reference the same runtime DialoguePackage. /*0x62e3c3*/
                                    ((void (__thiscall *)(LowProcess *, Actor *, int))v49->members.super.process->Unk_61)( /*0x62e3d9*/
                                      v49->members.super.process,
                                      actor,
                                      1);
                                  }
                                }
                                this->unk1D8 = 0.0; /*0x62e3dd*/
                              }
                            }
                          }
                        }
                      }
                    }
                    return; /*0x62e3dd*/
                  }
                }
              }
            }
            i = i->next; /*0x62e20d*/
          }
        }
        else
        {
          sub_520F00((int)this->usedItem); /*0x62dfc0*/
          this->Unk_12(this, (UInt32)actor); /*0x62dfd0*/
          v46 = this->__vftable; /*0x62dfd2*/
          v82 = (double)(Game_RandomLargeInteger(0) % 0x1388) * dbl_A30E40 + dbl_A2F928; /*0x62dfff*/
          ((void (__thiscall *)(HighProcess *, _DWORD))v46->Unk_88)(this, LODWORD(v82));// Nonpositive action-5 idle timer: set +0x230 to rand()%5000 * 0.001 + 1.0 (1.000..5.999 seconds) and return without running the social scan this update. /*0x62e00a*/
          sub_520F00(0); /*0x62e00e*/
        }
      }
    }
  }
  else
  {
    sub_5E4400(actor); /*0x62da52*/
    v14 = v13; /*0x62da57*/
    v79 = (TESChildCELL *)v13; /*0x62da5b*/
    if ( v13 ) /*0x62da5f*/
    {
      v15 = sub_566DC0((TESPackage *)v11, kTerrainLODQuadRayDirectionZ, v8, actor, 0, kTerrainLODQuadRayDirectionZ); /*0x62da74*/
      if ( !v16 && !this->furniture ) /*0x62da7d*/
      {
        this->SetCurrentPackProcedure(this, kProcedure_TRAVEL); /*0x62da92*/
        return; /*0x62da9b*/
      }
      if ( !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) && !this->furniture ) /*0x62daae*/
      {
        if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&this->unk0B0) ) /*0x62dabc*/
          sub_6553E0(this, (TESObjectREFR *)actor, COERCE_FLOAT(1)); /*0x62daca*/
      }
      if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 4 ) /*0x62dade*/
      {
        v27 = actor->vtbl->super.super.GetAnimData(actor); /*0x62dc8b*/
        this->usedItem = (TESForm *)v14[2]; /*0x62dc90*/
        v28 = 0; /*0x62dc95*/
        if ( *v14 ) /*0x62dc93*/
          v28 = (BaseExtraList *)**v14; /*0x62dc9b*/
        if ( !v27 || ActorAnimData_IsIdleInactive(v27) ) /*0x62dca3*/
          Actor_EquipIngredient_((PlayerCharacter *)actor, v7, v8, v15, (TESForm *)v14[2], v28, 1);// RadiantAI: state 4 path equips selected edible ingredient from actor inventory/package location result. /*0x62dcb5*/
        this->Unk_2E(this, 1); /*0x62dcc6*/
        BSSimpleList_Clear(&this->unk0B0); /*0x62dcce*/
      }
      else
      {
        if ( !this->furniture ) /*0x62dae4*/
        {
          p_unk0B0 = &this->unk0B0; /*0x62daf1*/
          if ( BSSimpleList_Count(&this->unk0B0) ) /*0x62daf9*/
          {
            v18 = (TESObjectREFR *)*p_unk0B0; /*0x62db02*/
            v19 = *p_unk0B0 == 0; /*0x62db05*/
            for ( this->furniture = (TESObjectREFR *)*p_unk0B0; !v19; this->furniture = (TESObjectREFR *)*p_unk0B0 ) /*0x62db0d*/
            {
              if ( sub_4DB9A0(v18) ) /*0x62db10*/
                break; /*0x62db17*/
              BSSimpleList_Remove((int *)&this->unk0B0, (int)this->furniture); /*0x62db22*/
              v18 = (TESObjectREFR *)*p_unk0B0; /*0x62db27*/
              v19 = *p_unk0B0 == 0; /*0x62db2a*/
            }
            furniture = this->furniture; /*0x62db34*/
            if ( furniture ) /*0x62db3c*/
            {
              if ( !TESObjectREFR_GetOwner(furniture) ) /*0x62db3e*/
              {
                v21 = BSSimpleList_Count(&this->unk0B0); /*0x62db50*/
                v22 = Game_RandomLargeInteger(0); /*0x62db52*/
                v23 = v22 % v21; /*0x62db58*/
                if ( v22 % v21 >= v21 ) /*0x62db5f*/
                  v23 = v21; /*0x62db61*/
                if ( v23 > 0 ) /*0x62db65*/
                {
                  do /*0x62db6d*/
                  {
                    --v23; /*0x62db67*/
                    p_unk0B0 = (UInt32 *)p_unk0B0[1]; /*0x62db6a*/
                  }
                  while ( v23 ); /*0x62db6d*/
                }
                v14 = (ExtraDataList ****)v79; /*0x62db72*/
                this->furniture = (TESObjectREFR *)*p_unk0B0; /*0x62db76*/
              }
            }
          }
        }
        this->SetUnk02C(this, this->furniture); /*0x62db8d*/
        v24 = actor->vtbl->super.super.GetAnimData(actor); /*0x62db99*/
        if ( !this->furniture ) /*0x62db9b*/
          goto LABEL_118; /*0x62db9b*/
        if ( !v24 || ActorAnimData_IsIdleInactive(v24) ) /*0x62dbaa*/
          ((void (__thiscall *)(HighProcess *, Actor *, _DWORD))this->Unk_146)(this, actor, 0); /*0x62dbc0*/
        if ( !this->furniture ) /*0x62dbc2*/
        {
LABEL_118:
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&this->unk0B0) ) /*0x62dbd3*/
          {
            v25 = 0; /*0x62dbde*/
            if ( *v14 ) /*0x62dbdc*/
              v25 = **v14; /*0x62dbe4*/
            this->usedItem = (TESForm *)v14[2]; /*0x62dbee*/
            Actor_EquipItem( /*0x62dbf9*/
              (PlayerCharacter *)actor,
              (unsigned __int16 *)&this->unk0B0,
              v7,
              v8,
              v5,
              v15,
              v2,
              v6,
              v4,
              v3,
              (TESForm *)v14[2],
              1,
              v25,
              1,
              0,
              v66,
              v67,
              v68,
              v69,
              (int)v70,
              v73,
              a2,
              v76,
              v77,
              v78[0],
              v78[1]);                          // RadiantAI: equips selected candidate item when no current target remains and candidate list is empty.
            this->Unk_2E(this, 1); /*0x62dc0a*/
            BSSimpleList_Clear(&this->unk0B0); /*0x62dc0e*/
            ((void (__thiscall *)(HighProcess *, _DWORD))this->Unk_88)(this, 0.0); /*0x62dc23*/
          }
        }
        if ( !sub_64ADA0((Actor *)this) ) /*0x62dc2e*/
          goto LABEL_42; /*0x62dc2e*/
        this->furniture = 0; /*0x62dc42*/
        sub_6FAEE0(&this->unk128, 0.0); /*0x62dc4c*/
        this->unk128.unkE = 0; /*0x62dc51*/
        this->unk128.unk00.x = g_zeroNiPoint3.x; /*0x62dc5d*/
        v26 = this->__vftable; /*0x62dc66*/
        this->unk128.unk00.y = g_zeroNiPoint3.y; /*0x62dc68*/
        this->unk128.unk00.z = g_zeroNiPoint3.z; /*0x62dc71*/
        ((void (__thiscall *)(HighProcess *, Actor *))v26->Unk_64)(this, actor); /*0x62dc7d*/
      }
      ((void (__thiscall *)(HighProcess *, _DWORD))this->Unk_88)(this, 0.0); /*0x62dce3*/
LABEL_42:
      if ( (this->GetMovementFlags(this) & 0x400) != 0 ) /*0x62dcf5*/
        ((void (__thiscall *)(HighProcess *, int, _DWORD))this->Unk_B0)(this, 0x400, 0); /*0x62dd0c*/
      return; /*0x62dd15*/
    }
    if ( this->follow ) /*0x62dd18*/
    {
      ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_148)(this, actor); /*0x62dd29*/
    }
    else
    {
      p_unk03C = &this->unk03C;                 // RadiantAI 2026-07-12: accepted-list handoff. Pops head from HighProcess+0x3C, stores selected candidate at +0x44, and marks candidate+0x10 selected. /*0x62dd39*/
      if ( this->unk040 || *p_unk03C ) /*0x62dd3e*/
      {
        v30 = *p_unk03C; /*0x62dd47*/
        this->unk044 = *p_unk03C; /*0x62dd49*/
        *(_DWORD *)(v30 + 0x10) = 1; /*0x62dd4c*/
        BSSimpleList_Remove((int *)&this->unk03C, this->unk044); /*0x62dd59*/
        unk044 = this->unk044; /*0x62dd5e*/
        v19 = *(_DWORD *)(unk044 + 0x1C) == 2;  // RadiantAI 2026-07-12: only response 2 is special here. ServicePurchase redirects to source actor or resolved type-0x23 owner actor; all other accepted responses target sourceRef directly. /*0x62dd61*/
        v32 = *(TESObjectREFR **)unk044; /*0x62dd65*/
        if ( v19 ) /*0x62dd67*/
        {
          v19 = !v32->vtbl->IsActor(v32); /*0x62dd75*/
          v33 = (TESObjectREFR **)this->unk044; /*0x62dd77*/
          if ( v19 ) /*0x62dd7c*/
          {
            Owner = TESObjectREFR_GetOwner(*v33); /*0x62dd95*/
            if ( Owner ) /*0x62dd9c*/
            {
              if ( LOBYTE(Owner->CompareTo) == 0x23 ) /*0x62dda6*/
              {
                v35 = this->__vftable; /*0x62ddac*/
                v36 = sub_675220((int)&qword_B3BB2C[0x75], (int)Owner); /*0x62ddb4*/
                v35->SetUnk02C(this, (TESObjectREFR *)v36); /*0x62ddc2*/
              }
            }
          }
          else
          {
            this->SetUnk02C(this, *v33); /*0x62dd89*/
          }
        }
        else
        {
          this->SetUnk02C(this, v32);           // RadiantAI 2026-07-12: HighProcess vtable +0xD0 -> 0x64AF50 sets follow/source target. Response code does not construct a crime record at this handoff. /*0x62ddd9*/
        }
      }
      else
      {
        v37 = sub_566A40(v11, actor); /*0x62dded*/
        v38 = (int *)actor->vtbl->super.super.GetPos(actor); /*0x62ddf9*/
        a2 = *v38; /*0x62ddff*/
        v76 = v38[1]; /*0x62de06*/
        v77 = v38[2]; /*0x62de0d*/
        if ( !v37 ) /*0x62de11*/
          v37 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x62de1a*/
        unk_B3B934 = 1; /*0x62de1e*/
        this->unk06C = 0x14;                    // RadiantAI: sets process/category filter to 0x14 before acquire scan; sub_568370 maps 0x14 to edible Ingredient/AlchemyItem food cases. /*0x62de25*/
        this->unk064 = 0; /*0x62de2c*/
        if ( TESObjectCELL_IsInterior(v37) ) /*0x62de33*/
          v39 = flt_A32048; /*0x62de3c*/
        else
          v39 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x5C]);// RadiantAI: outdoor acquire scan radius comes from fAIAcquireObjectDistance. /*0x62de4e*/
        v80 = v39; /*0x62de51*/
        a5 = v80; /*0x62de5f*/
        v40 = (float *)sub_566B30(v70, (int)v78, actor); /*0x62de6c*/
        v81 = v80 * dbl_A2FAA0; /*0x62de83*/
        sub_446B90( /*0x62de94*/
          v37,
          (float *)&a2,
          v81,
          v40,
          a5,
          (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
          (int)actor);                          // RadiantAI: scans cell/world references with callback sub_646600 to build acquire candidate entries.
        Unk_159 = this->Unk_159;                // RadiantAI: after food/acquire scan, calls HighProcess vtable +0x568 (0xA71D7C -> sub_635900) to score candidate entries with service/steal/pickpocket/fight logic. /*0x62de9b*/
        unk_B3B934 = 0; /*0x62dea4*/
        this->unk06C = 0; /*0x62deab*/
        ((void (__thiscall *)(HighProcess *, Actor *))Unk_159)(this, actor); /*0x62deb2*/
        if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&this->unk03C) ) /*0x62deb6*/
        {
          ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, actor); /*0x62dece*/
          v42 = this->__vftable; /*0x62ded6*/
          this->unk1E8 = flt_A417B4; /*0x62ded8*/
          ((void (__thiscall *)(HighProcess *, Actor *, int))v42->Unk_61)(this, actor, 1); /*0x62dee9*/
        }
      }
    }
  }
}
