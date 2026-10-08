// HighProcess package-procedure action 1. Its random-social scan is explicitly gated by conversationScanCooldown, decrements that field once when gated or unsuccessful, and resets it to fAItalktoNPCtimer only after successful package creation. Its early radius gate unusually admits a dead candidate long enough to consume chance/recent-target suppression before final rejection.
void __thiscall HighProcess::UpdatePackageProcedureAction1(HighProcess *this, Actor *actor)
{
  double v2; // st6
  MiddleHighProcess_vtbl *v4; // eax
  int (*GetCurrentPackage)(void); // edx
  TESPackage *v6; // ebp
  int v7; // eax
  double v8; // st7
  TESPackageType type; // al
  int v10; // eax
  int v11; // ebx
  char v12; // al
  int v13; // eax
  MiddleHighProcess_vtbl *v14; // edx
  MiddleHighProcess_vtbl *v15; // edx
  char v16; // al
  char *location; // ebx
  ActorVtbl *vtbl; // edx
  float *v19; // eax
  float *unk030; // ebx
  char v21; // al
  double v22; // st7
  double v23; // st6
  double v24; // st7
  void (__thiscall **p_Unk_F6)(BaseProcess *__hidden); // ebp
  UInt32 DwordAtOffset40; // eax
  MiddleHighProcess_vtbl *v27; // eax
  int *v28; // ecx
  int v29; // eax
  Actor *v30; // ebp
  int v31; // eax
  double v32; // st7
  TESObjectCELL *v33; // eax
  double v34; // st7
  TESObjectCELL *v35; // eax
  LowProcess *process; // ecx
  LowProcess *v37; // eax
  TESPackage *editorPackage; // eax
  char *v39; // eax
  LowProcess *v40; // eax
  LowProcess *v41; // ebx
  BSExtraData *v42; // eax
  TESPackage *CurrentPackage; // eax
  float *v44; // eax
  TESObjectCELL *v45; // eax
  TESObjectCELL *v46; // eax
  bool v47; // c0
  ActorVtbl *v48; // edx
  TESObjectCELL *v49; // ebp
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v51; // eax
  double v52; // st7
  float *v53; // eax
  int *v54; // eax
  TESWorldSpace *v55; // eax
  TESForm *v56; // ebx
  float *(__thiscall *v57)(TESObjectREFR *); // eax
  int v58; // eax
  float v59; // edx
  float *v60; // eax
  int *v61; // eax
  int v62; // ebx
  Unk1BC *p_unk1BC; // ebp
  TESObjectREFR *v64; // ebp
  Unk128 *p_unk128; // ebx
  bool v66; // zf
  int v67; // eax
  Unk1BC *v68; // ecx
  void (__thiscall **v69)(BaseProcess *__hidden); // eax
  UInt32 v70; // eax
  char v71; // al
  UInt32 v72; // eax
  _DWORD *v73; // ecx
  int v74; // eax
  float *v75; // esi
  char *v76; // eax
  TESObjectCELL *v77; // eax
  double v78; // st7
  double v79; // st7
  float *v80; // eax
  float v81; // eax
  TESWorldSpace *v82; // eax
  TESObjectCELL *v83; // eax
  int *v84; // eax
  UInt32 unk8; // edx
  UInt32 unkC; // eax
  void (__thiscall **v87)(BaseProcess *__hidden); // ebx
  UInt32 v88; // eax
  double v89; // st7
  int v90; // eax
  char *v91; // eax
  void (__thiscall **v92)(BaseProcess *__hidden); // ebx
  UInt32 v93; // eax
  int v94; // eax
  TESObjectREFR *furniture; // ecx
  double v96; // st7
  MiddleHighProcess_vtbl *v97; // ebx
  int v98; // eax
  int v99; // eax
  char *a3; // [esp+28h] [ebp-1A4h]
  double a5; // [esp+2Ch] [ebp-1A0h]
  double a5a; // [esp+2Ch] [ebp-1A0h]
  TESObjectCELL *a5_4; // [esp+30h] [ebp-19Ch]
  float v104; // [esp+34h] [ebp-198h]
  char v105; // [esp+34h] [ebp-198h]
  float v106; // [esp+34h] [ebp-198h]
  double v107; // [esp+34h] [ebp-198h]
  float v108; // [esp+34h] [ebp-198h]
  double v109; // [esp+34h] [ebp-198h]
  int v110; // [esp+34h] [ebp-198h]
  TESWorldSpace *WorldSpace; // [esp+38h] [ebp-194h]
  char *Name; // [esp+38h] [ebp-194h]
  char v113; // [esp+38h] [ebp-194h]
  float v114; // [esp+38h] [ebp-194h]
  float v115; // [esp+38h] [ebp-194h]
  TESWorldSpace *v116; // [esp+38h] [ebp-194h]
  float v117; // [esp+38h] [ebp-194h]
  TESWorldSpace *v118; // [esp+38h] [ebp-194h]
  float v119; // [esp+38h] [ebp-194h]
  TESWorldSpace *v120; // [esp+38h] [ebp-194h]
  float FatigueFraction; // [esp+38h] [ebp-194h]
  char v122; // [esp+4Fh] [ebp-17Dh]
  float v123; // [esp+50h] [ebp-17Ch]
  float v124; // [esp+50h] [ebp-17Ch]
  float v125; // [esp+50h] [ebp-17Ch]
  float v126; // [esp+50h] [ebp-17Ch]
  float v127; // [esp+50h] [ebp-17Ch]
  int (__thiscall **v128)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [esp+50h] [ebp-17Ch]
  float v129; // [esp+50h] [ebp-17Ch]
  float v130; // [esp+50h] [ebp-17Ch]
  float v131; // [esp+54h] [ebp-178h]
  float v132; // [esp+54h] [ebp-178h]
  int v133; // [esp+54h] [ebp-178h]
  double v134; // [esp+58h] [ebp-174h] BYREF
  int a2; // [esp+60h] [ebp-16Ch] BYREF
  int v136; // [esp+64h] [ebp-168h]
  float v137; // [esp+68h] [ebp-164h]
  TESObjectCELL *a1; // [esp+6Ch] [ebp-160h]
  float v139; // [esp+70h] [ebp-15Ch]
  int v140; // [esp+74h] [ebp-158h] BYREF
  float v141; // [esp+78h] [ebp-154h]
  float v142; // [esp+7Ch] [ebp-150h]
  float pointXYZ; // [esp+80h] [ebp-14Ch] BYREF
  float v144; // [esp+84h] [ebp-148h]
  float v145; // [esp+88h] [ebp-144h]
  TESPackage *v146; // [esp+8Ch] [ebp-140h]
  int v147[3]; // [esp+90h] [ebp-13Ch] BYREF
  char Format[300]; // [esp+9Ch] [ebp-130h] BYREF

  v4 = this->__vftable; /*0x6384d0*/
  if ( this->dialogueActive )                   // RadiantAI action-1 does not run its normal package/social scan while HighProcess.dialogueActive is set; it dispatches the dialogue-update path at vslot +0x194 instead. /*0x6384c9*/
  {
    ((void (__stdcall *)(Actor *))v4->Unk_64)(actor); /*0x6384e3*/
    return; /*0x6384e5*/
  }
  GetCurrentPackage = (int (*)(void))v4->GetCurrentPackage; /*0x6384ea*/
  HIBYTE(v139) = 0; /*0x6384f0*/
  v6 = (TESPackage *)GetCurrentPackage(); /*0x6384f7*/
  v146 = v6; /*0x6384fb*/
  sub_566DB0(v6); /*0x6384ff*/
  LODWORD(v134) = v7; /*0x638506*/
  v8 = (double)v7; /*0x63850a*/
  if ( v7 < 0 ) /*0x63850e*/
    v8 = v8 + flt_A2FC78; /*0x638510*/
  v131 = v8; /*0x63851a*/
  v122 = 1; /*0x63851e*/
  if ( v6->members.procedureArrayIndex == 1 ) /*0x638523*/
    goto LABEL_18; /*0x638523*/
  type = v6->members.type; /*0x638529*/
  v122 = 0; /*0x63852e*/
  if ( type != kPackageType_Eat )
  {
    if ( type == kPackageType_Sleep ) /*0x6385c1*/
    {
      sub_566DC0(v6, kTerrainLODQuadRayDirectionZ, v2, actor, 0, kTerrainLODQuadRayDirectionZ); /*0x6385d2*/
      v15 = this->__vftable; /*0x6385d9*/
      if ( !v16 ) /*0x6385dd*/
      {
        ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))v15->Unk_61)(this, actor, 0xFFFFFFFE); /*0x6385e8*/
        return; /*0x6385ea*/
      }
      if ( ((int (__thiscall *)(HighProcess *))v15->GetSitSleepState)(this) == 9 ) /*0x6385fa*/
        goto LABEL_12; /*0x6385fa*/
    }
LABEL_18:
    *(float *)&a1 = 0.0; /*0x6385fc*/
    sub_566B30(v6, (int)&pointXYZ, actor); /*0x63860c*/
    location = (char *)v6->members.location; /*0x638611*/
    if ( location ) /*0x638616*/
    {
      *(float *)&a1 = COERCE_FLOAT(sub_5697E0(&v6->members.location->locationType)); /*0x638621*/
      if ( *(float *)&a1 == 0.0 && sub_569740(location) == 1 ) /*0x638631*/
      {
        vtbl = actor->vtbl; /*0x638633*/
        HIBYTE(v139) = 1; /*0x638635*/
        v19 = vtbl->super.super.GetPos((TESObjectREFR *)actor); /*0x638641*/
        pointXYZ = *v19; /*0x638645*/
        v144 = v19[1]; /*0x63864c*/
        v145 = v19[2]; /*0x638653*/
      }
    }
    if ( !this->unk030 || (unk030 = (float *)this->unk030, this->currentPackage) ) /*0x63865e*/
      unk030 = (float *)a1; /*0x638669*/
    if ( v131 >= dbl_A2FCC8 ) /*0x63867c*/
    {
      if ( v122 ) /*0x638798*/
        goto LABEL_42; /*0x638798*/
    }
    else if ( v122 ) /*0x638687*/
    {
      sub_566DC0(v6, kTerrainLODQuadRayDirectionZ, v2, actor, 0, kTerrainLODQuadRayDirectionZ); /*0x63869c*/
      if ( !v21 ) /*0x6386a3*/
        goto LABEL_12; /*0x6386a3*/
      if ( unk030 ) /*0x6386ab*/
      {
        if ( (*(int (__thiscall **)(float *))(*(_DWORD *)unk030 + 0x170))(unk030) == MEMORY[0xB35EB0] ) /*0x6386c3*/
        {
          v132 = unk030[0xA]; /*0x6386cc*/
          v22 = v132; /*0x6386da*/
          v23 = dbl_A3D5B0; /*0x6386df*/
          if ( v132 >= 0.0 ) /*0x6386e5*/
          {
            if ( v23 <= v22 ) /*0x63870b*/
            {
              unknown_libname_14(v23, v22); /*0x63870d*/
              v22 = v132; /*0x63871e*/
            }
          }
          else
          {
            unknown_libname_14(v23, v22); /*0x6386e7*/
            v132 = v132 + dbl_A3D5B0; /*0x6386fa*/
            v22 = v132; /*0x6386fe*/
          }
          *(float *)&v134 = 0.0; /*0x63872d*/
          v104 = v22; /*0x638732*/
          sub_683D80((int)actor, v104, (float *)&v134); /*0x638736*/
          v123 = v22; /*0x63873b*/
          v124 = fabs(v123); /*0x638748*/
          v24 = v124; /*0x63874c*/
          v125 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x63875c*/
          if ( v125 >= v24 ) /*0x63876b*/
            sub_5E05F0(actor, 0x30); /*0x638789*/
          else
            sub_685530(actor, v132, 1); /*0x638778*/
        }
      }
      return; /*0x638780*/
    }
    if ( this->unk1E8 <= 0.0 && this->unk0D0 ) /*0x6387a9*/
    {
      ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, actor); /*0x6387bd*/
      ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))this->Unk_61)(this, actor, 0xFFFFFFFF); /*0x6387cc*/
      this->unk1E8 = flt_A417B4; /*0x6387d4*/
      return; /*0x6387da*/
    }
    this->unk1E8 = this->unk1E8 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x6387eb*/
LABEL_42:
    if ( this->unk0D0 )
    {
      if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 4
        || !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this)
        || ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 9 )
      {
        if ( this->furniture && ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) != 4 ) /*0x638850*/
        {
          if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) /*0x63887f*/
            || TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)actor, &this->unk128.unk00.x) <= dbl_A2FCC8 )
          {
            if ( !((unsigned __int8 (__thiscall *)(HighProcess *, Actor *))this->Unk_6C)(this, actor) ) /*0x6388eb*/
            {
              sub_6FAEE0(&this->unk128, 0.0); /*0x6388ff*/
              this->unk128.unkE = 0; /*0x638904*/
              this->unk128.unk00.x = g_zeroNiPoint3.x; /*0x638910*/
              v27 = this->__vftable; /*0x638918*/
              this->unk128.unk00.y = g_zeroNiPoint3.y; /*0x63891c*/
              this->unk128.unk00.z = g_zeroNiPoint3.z; /*0x638929*/
              v27->SetSleepState(this, actor, 0, 0, 0x7F); /*0x638935*/
            }
          }
          else
          {
            if ( unk_B3B935 ) /*0x638881*/
              return; /*0x638881*/
            unk_B3B935 = 1; /*0x63888e*/
            p_Unk_F6 = &this->Unk_F6; /*0x63889d*/
            WorldSpace = TESObjectREFR_GetWorldSpace(this->furniture); /*0x6388ae*/
            DwordAtOffset40 = Shared_GetDwordAtOffset40(this->furniture); /*0x6388af*/
            if ( !((unsigned __int8 (__thiscall *)(HighProcess *, Actor *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))*p_Unk_F6)( /*0x6388d0*/
                    this,
                    actor,
                    LODWORD(this->unk128.unk00.x),
                    LODWORD(this->unk128.unk00.y),
                    LODWORD(this->unk128.unk00.z),
                    DwordAtOffset40,
                    WorldSpace) )
              return; /*0x6388d4*/
            v6 = v146; /*0x6388da*/
          }
        }
        *(float *)&v134 = TesObjectREF_GetDistance((TESObjectREFR *)actor, (TESObjectREFR *)reference, 0); /*0x638946*/
        if ( !Actor::HasNPCBaseForm(actor)
          || flt_B36778[0x6E] < (double)*(float *)&v134
          || this->conversationScanCooldown > 0.0
          || (v6->members.packageFlags & 0x1000) != 0
          || ((unsigned __int8 (__thiscall *)(HighProcess *))this->Unk_7F)(this)
          || !BYTE1(qword_B3BB2C[0x9B]) )       // Action-1 random social scan requires conversationScanCooldown <= 0, plus the surrounding package/global/process gates. Its timer is reset only after StartConversationPackage succeeds.
        {
          this->conversationScanCooldown = this->conversationScanCooldown - *(float *)&MEMORY[0xB33E90][0xC];// Action-1 gated/no-success epilogue: subtract exactly one frame delta from conversationScanCooldown. Candidate count does not multiply this decrement. /*0x638de6*/
        }
        else
        {
          LODWORD(v134) = this->detectionList; /*0x6389ba*/
          v28 = (int *)LODWORD(v134); /*0x6389b2*/
          if ( LODWORD(v134) )
          {
            do
            {
              v29 = *v28; /*0x6389c4*/
              if ( !*v28 ) /*0x6389c4*/
                break; /*0x6389c4*/
              v30 = *(Actor **)v29; /*0x6389d2*/
              if ( *(_DWORD *)(v29 + 4) == 3
                && *(_BYTE *)(v29 + 8)
                && v30 != actor
                && v30->members.super.process
                && v30 != (Actor *)reference )
              {
                if ( Actor_IsNPC(*(Actor **)v29)
                  && !((int (__thiscall *)(LowProcess *))v30->members.super.process->Unk_F3)(v30->members.super.process) )
                {
                  sub_566DB0(v146); /*0x638a2a*/
                  v32 = (double)v31; /*0x638a35*/
                  if ( v31 < 0 ) /*0x638a39*/
                    v32 = v32 + flt_A2FC78; /*0x638a3b*/
                  *(float *)&a1 = v32; /*0x638a46*/
                  if ( !v122 ) /*0x638a4a*/
                    *(float *)&a1 = flt_A57FB8; // Second scan's radius cap is 600.0 when the preceding mode flag is clear; otherwise a dynamic cap computed just above is retained. /*0x638a52*/
                  v126 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x5E]);// Second HighProcess social scan uses the same exterior/interior conversation-radius GameSettings. /*0x638a64*/
                  v33 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x638a68*/
                  if ( TESObjectCELL_IsInterior(v33) ) /*0x638a6f*/
                    v126 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x60]); /*0x638a84*/
                  if ( v126 < (double)*(float *)&a1 )// Second-scan Oblivion radius quirk: compare the selected exterior/interior social radius with the current cap; if selected radius is smaller, replace the cap with the EXTERIOR radius even in an interior cell. /*0x638a97*/
                    a1 = *(TESObjectCELL **)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x5E]); /*0x638aa5*/
                  if ( (double)*(float *)&a1 >= TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)v30, &pointXYZ)// If normal social eligibility fails, accept the candidate provisionally only when IsDead is true. Final eligibility later rejects death, but only after the pair may already be recorded in both recent-target lists.
                    && (Actor::CanStartSocialConversationWith(v30, actor)
                     || v30->vtbl->super.super.IsDead((TESObjectREFR *)v30, 0)) )
                  {
                    v34 = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&this->recentSocialTargets)
                        ? *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[8])
                        : this->recentSocialTargetCooldown - *(float *)&MEMORY[0xB33E90][0xC];// With a nonempty recent-target list, decrement recentSocialTargetCooldown once per candidate reaching this block; multiple candidates can consume multiple frame deltas during one scan, as in action 5.
                    this->recentSocialTargetCooldown = v34; /*0x638b14*/
                    if ( this->recentSocialTargetCooldown <= 0.0 ) /*0x638b27*/
                      BSSimpleList_Clear(&this->recentSocialTargets.data); /*0x638b2b*/
                    a1 = (TESObjectCELL *)(Game_RandomLargeInteger(0) % (int)0xFFFFFF9C);// Compiler-expanded rand() % 100 produces the second 0..99 social-conversation chance roll. /*0x638b52*/
                    if ( !BSSimpleList::Contains((BSSimpleList_VoidPtr *)&this->recentSocialTargets, v30) ) /*0x638b59*/
                    {
                      v127 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x62]);// Second social trigger uses the same exterior/interior fAISocialchanceForConversation threshold. /*0x638b70*/
                      v35 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x638b74*/
                      if ( TESObjectCELL_IsInterior(v35) ) /*0x638b7b*/
                        v127 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x64]); /*0x638b90*/
                      if ( v127 > (double)(int)a1 ) /*0x638ba3*/
                      {
                        BSSimpleList_PushFront(&this->recentSocialTargets.data, (int)v30);// Record the candidate before final eligibility. This includes the action-1 dead-candidate provisional path, so a dead or otherwise later-rejected actor can consume the random roll and remain suppressed until the recent-target timer clears the list. /*0x638bc4*/
                        ((void (__thiscall *)(LowProcess *, Actor *))v30->members.super.process->Unk_5A)( /*0x638bd5*/
                          v30->members.super.process,
                          actor);               // Second scan also records the initiator in the candidate's recentSocialTargets before final eligibility.
                        if ( !Actor::HasNPCBaseForm(v30) ) /*0x638bd9*/
                          break; /*0x638bd9*/
                        if ( v30->vtbl->super.super.HasFatigue((TESObjectREFR *)v30) ) /*0x638bf1*/
                          break; /*0x638bf1*/
                        if ( Actor::IsSleeping(v30) ) /*0x638bfd*/
                          break; /*0x638bfd*/
                        if ( Actor::GetDeadState(v30) == 3 ) /*0x638c14*/
                          break; /*0x638c14*/
                        if ( !Actor::CanStartSocialConversationWith(v30, actor) ) /*0x638c1d*/
                          break; /*0x638c1d*/
                        process = v30->members.super.process; /*0x638c2a*/
                        if ( !process ) /*0x638c2f*/
                          break; /*0x638c2f*/
                        if ( ((unsigned __int8 (__thiscall *)(LowProcess *))process->Unk_7F)(process) ) /*0x638c3d*/
                          break; /*0x638c3d*/
                        if ( v30 == (Actor *)reference ) /*0x638c4d*/
                          break; /*0x638c4d*/
                        if ( v30->vtbl->super.super.IsDead((TESObjectREFR *)v30, 0) ) /*0x638c60*/
                          break; /*0x638c60*/
                        if ( !v30->vtbl->super.super.GetNiNode((TESObjectREFR *)v30) ) /*0x638c75*/
                          break; /*0x638c75*/
                        v37 = v30->members.super.process; /*0x638c7f*/
                        if ( !v37 ) /*0x638c84*/
                          break; /*0x638c84*/
                        editorPackage = v37->editorPackage; /*0x638c8a*/
                        if ( editorPackage ) /*0x638c8f*/
                        {
                          if ( TESPackage::IsTemporaryOverrideType(editorPackage) ) /*0x638c93*/
                            break;              // Second social scan applies the same TESPackage::IsTemporaryOverrideType rejection before starting an ambient conversation. /*0x638c93*/
                        }
                        if ( !((unsigned __int8 (__thiscall *)(Actor *, Actor *, _DWORD, _DWORD))actor->vtbl->Unk_BD)( /*0x638caf*/
                                actor,
                                v30,
                                0,
                                0) )            // Second authoritative ambient handoff: Actor::StartConversationPackage(initiator, candidate, false, null), beginning at stock HELLO FormID 000000D2.
                          break; /*0x638cb3*/
                        this->unk1D8 = 0.0; /*0x638cc0*/
                        this->conversationScanCooldown = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[0xA]);// Action 1 reaches this write only after StartConversationPackage returned true; failed starts leave the cooldown unreset and fall through to the single frame-delta decrement at 0x638DDA. /*0x638ccd*/
                        if ( sub_579440() == (TESObjectREFR *)actor ) /*0x638cda*/
                        {
                          Name = TESObjectREFR_GetName((TESObjectREFR *)v30); /*0x638ce3*/
                          v39 = TESObjectREFR_GetName((TESObjectREFR *)actor); /*0x638ce6*/
                          _sprintf(Format, "%s wants to talk to  %s ", v39, Name); /*0x638cf6*/
                          Interface_ConsolePrint(Format); /*0x638d00*/
                        }
                        if ( !Actor::GetCurrentPackage(v30) /*0x638d22*/
                          || (Actor::GetCurrentPackage(v30)->members.packageFlags & 0x1000) == 0 )
                        {
                          v40 = v30->members.super.process; /*0x638d58*/
                          if ( v40->editorPackage ) /*0x638d5b*/
                          {
                            if ( !TESPackage_IsRuntimePackage(v40->editorPackage) ) /*0x638d64*/
                            {
                              v41 = v30->members.super.process; /*0x638d6d*/
                              v113 = v41->GetUnk01C(v41); /*0x638d80*/
                              v105 = v41->Unk_2F(v41); /*0x638d8d*/
                              v42 = (BSExtraData *)v41->GetUnk02C(v41); /*0x638d94*/
                              sub_4268B0( /*0x638da2*/
                                &v30->members.super.super.baseExtraList,
                                v41->editorPackage,
                                v41->editorPackProcedure,
                                v42,
                                v105,
                                v113);
                            }
                          }
                          CurrentPackage = Actor::GetCurrentPackage(actor); /*0x638dad*/
                          Actor_AddPackage_(v30, CurrentPackage, 0, 1);// Mirrored partner handoff in the second social trigger: share the initiator's DialoguePackage as the partner's editorPackage, mark it dynamic, then notify the partner process. /*0x638db5*/
                          ((void (__thiscall *)(LowProcess *, Actor *, int))v30->members.super.process->Unk_61)( /*0x638dcb*/
                            v30->members.super.process,
                            actor,
                            1);
                          goto LABEL_117; /*0x638dcb*/
                        }
                        if ( v30->vtbl->super.super.IsDead((TESObjectREFR *)v30, 0) ) /*0x638d31*/
                          goto LABEL_117; /*0x638d35*/
                        ((void (__thiscall *)(LowProcess *, Actor *, int))actor->members.super.process->Unk_61)( /*0x638d49*/
                          actor->members.super.process,
                          actor,
                          3);
                        this->unk1D8 = 0.0; /*0x638d4d*/
                        return; /*0x638d53*/
                      }
                    }
                  }
                }
                v28 = (int *)LODWORD(v134); /*0x638ba5*/
              }
              v28 = (int *)v28[1]; /*0x638ba9*/
              LODWORD(v134) = v28; /*0x638bae*/
            }
            while ( v28 );
          }
        }
        if ( this->unk1D8 > 0.0 ) /*0x638df9*/
        {
          this->unk1D8 = this->unk1D8 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x638e07*/
          return; /*0x638e0d*/
        }
        v44 = actor->vtbl->super.super.GetPos(actor); /*0x638e1c*/
        a2 = *(int *)v44; /*0x638e20*/
        v136 = *((int *)v44 + 1); /*0x638e27*/
        v137 = v44[2]; /*0x638e30*/
        *(float *)&a1 = COERCE_FLOAT(Shared_GetDwordAtOffset40(actor)); /*0x638e3b*/
        if ( !sub_5E3290(actor) ) /*0x638e3f*/
        {
          if ( !v122 || HIBYTE(v139) ) /*0x638e56*/
            v131 = flt_A579A8; /*0x638e5e*/
          *(float *)&v140 = pointXYZ - *(float *)&a2; /*0x638e6e*/
          v141 = v144 - *(float *)&v136; /*0x638e7a*/
          v142 = v145 - v137; /*0x638e86*/
          v134 = v131 + dbl_A529C0; /*0x638e94*/
          if ( Vector3_NormalizeInPlace((float *)&v140) > v134 ) /*0x638ea6*/
          {
            this->SetCurrentPackProcedure(this, kProcedure_TRAVEL); /*0x638eb2*/
            return; /*0x638eb2*/
          }
          v45 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x638eb9*/
          if ( TESObjectCELL_IsInterior(v45) ) /*0x638ec0*/
          {
            *(float *)&v46 = COERCE_FLOAT(Shared_GetDwordAtOffset40(actor)); /*0x638ecf*/
            v47 = v131 < dbl_A3F470; /*0x638ed8*/
            v48 = actor->vtbl; /*0x638ede*/
            v49 = v46; /*0x638ee0*/
            a1 = v46; /*0x638ee2*/
            GetPos = v48->super.super.GetPos; /*0x638eed*/
            if ( v47 ) /*0x638ef3*/
            {
              v51 = GetPos((TESObjectREFR *)actor); /*0x638f24*/
              v52 = v131; /*0x638f26*/
              v114 = v131; /*0x638f2d*/
            }
            else
            {
              v51 = GetPos((TESObjectREFR *)actor); /*0x638ef5*/
              *(float *)&v134 = dbl_A3C770 * v131; /*0x638f06*/
              v114 = *(float *)&v134; /*0x638f0e*/
              *(float *)&v134 = v131 / dbl_A30E48 + v131 / dbl_A30E48; /*0x638f1a*/
              v52 = *(float *)&v134; /*0x638f1e*/
            }
            v106 = v52; /*0x638f33*/
            v53 = sub_62E790((float *)&v140, *v51, v51[1], v51[2], v106, v114); /*0x638f4c*/
            a2 = *(int *)v53; /*0x638f5c*/
            v136 = *((int *)v53 + 1); /*0x638f64*/
            v137 = v53[2]; /*0x638f7c*/
            v54 = Actor_ChoosePathGridSteeringPosition((TESObjectREFR *)actor, &v140, a2, v136, v137, v49, 0.0, 1, 0); /*0x638f83*/
            a2 = *v54; /*0x638f8a*/
            v136 = v54[1]; /*0x638f91*/
            v137 = *((float *)v54 + 2); /*0x638f98*/
          }
          else
          {
            v55 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)actor); /*0x638fa3*/
            *(float *)&v56 = COERCE_FLOAT(sub_44A270((TESWorldSpace **)g_TESDataHandler, *(float *)&a2, *(float *)&v136, v55, 0)); /*0x638fc8*/
            v57 = actor->vtbl->super.super.GetPos; /*0x638fca*/
            a1 = (TESObjectCELL *)v56; /*0x638fd2*/
            v58 = (int)v57((TESObjectREFR *)actor); /*0x638fd6*/
            v59 = *(float *)v58; /*0x638fe7*/
            *(float *)&v134 = dbl_A3C770 * v131; /*0x638feb*/
            v115 = *(float *)&v134; /*0x638ff3*/
            *(float *)&v134 = v131 / dbl_A30E48 + v131 / dbl_A30E48; /*0x638fff*/
            v60 = sub_62E790((float *)&v140, v59, *(float *)(v58 + 4), *(float *)(v58 + 8), *(float *)&v134, v115); /*0x63901e*/
            a2 = *(int *)v60; /*0x63902a*/
            v136 = *((int *)v60 + 1); /*0x639033*/
            v137 = v60[2]; /*0x63903d*/
            v61 = Actor_ChoosePathGridSteeringPosition( /*0x63905d*/
                    (TESObjectREFR *)actor,
                    &v140,
                    *(_DWORD *)v60,
                    *((_DWORD *)v60 + 1),
                    v60[2],
                    (TESObjectCELL *)v56,
                    COERCE_FLOAT(1),
                    0,
                    0);
            a2 = *v61; /*0x639064*/
            v136 = v61[1]; /*0x63906b*/
            v137 = *((float *)v61 + 2); /*0x639072*/
          }
          if ( TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)actor, (const float *)&a2) <= (double)flt_A417B4 ) /*0x63908d*/
            this->unk1D8 = 0.0; /*0x639091*/
        }
        if ( !unk_B3B928 && Actor_IsNPC(actor) ) /*0x6390a2*/
        {
          BSSimpleList_Clear(&stru_B3B94C); /*0x6390b0*/
          v62 = 0; /*0x6390b5*/
          p_unk1BC = &this->unk1BC; /*0x6390b7*/
          do /*0x6390db*/
          {
            if ( !p_unk1BC->unk0 ) /*0x6390c0*/
              break; /*0x6390c5*/
            BSSimpleList_PushFront(&stru_B3B94C, p_unk1BC->unk0); /*0x6390cd*/
            ++v62; /*0x6390d2*/
            p_unk1BC = (Unk1BC *)((char *)p_unk1BC + 4); /*0x6390d5*/
          }
          while ( v62 < 4 ); /*0x6390db*/
          sub_446B90( /*0x63910a*/
            a1,
            (float *)&a2,
            flt_A34A80,
            &pointXYZ,
            v131,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62EAA0,
            (int)actor);
        }
        v64 = (TESObjectREFR *)unk_B3B928; /*0x63910f*/
        p_unk128 = 0; /*0x639115*/
        v66 = unk_B3B928 == 0; /*0x639117*/
        unk_B3B928 = 0; /*0x639119*/
        if ( v66 ) /*0x63911f*/
        {
          v77 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x63937f*/
          if ( TESObjectCELL_IsInterior(v77) ) /*0x639386*/
          {
            if ( !unk_B3B935 ) /*0x639627*/
            {
              unk_B3B935 = 1; /*0x639634*/
              if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x639645*/
                actor->vtbl->AddPackageWakeUp(actor); /*0x639655*/
              v92 = &this->Unk_F6; /*0x63965b*/
              v120 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)actor); /*0x639666*/
              v93 = Shared_GetDwordAtOffset40(actor); /*0x639669*/
              if ( ((unsigned __int8 (__thiscall *)(HighProcess *, Actor *, int, int, float, UInt32, TESWorldSpace *))*v92)( /*0x63968d*/
                     this,
                     actor,
                     a2,
                     v136,
                     COERCE_FLOAT(LODWORD(v137)),
                     v93,
                     v120) )
              {
                if ( TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)actor, (const float *)&a2) < dbl_A3F3D0 ) /*0x6396ae*/
                {
LABEL_117:
                  this->unk1D8 = 0.0; /*0x638dcd*/
                }
                else
                {
                  FatigueFraction = Actor_GetFatigueFraction(actor, (int)v92, (int)actor); /*0x6396be*/
                  v94 = sub_5E1F90(actor); /*0x6396c1*/
                  this->unk1D8 = sub_546720(v94, FatigueFraction); /*0x6396cc*/
                }
              }
            }
          }
          else if ( !unk_B3B935 ) /*0x639393*/
          {
            v78 = *(float *)&a2 - pointXYZ; /*0x6393a7*/
            unk_B3B935 = 1; /*0x6393ab*/
            *(float *)&v140 = v78; /*0x6393b2*/
            v141 = *(float *)&v136 - v144; /*0x6393be*/
            v142 = v137 - v145; /*0x6393ca*/
            v134 = v131; /*0x6393d2*/
            if ( v131 < NiPoint3_Length((float *)&v140) ) /*0x6393e8*/
            {
              *(float *)&v134 = v134 * dbl_A2FAA0; /*0x6393f4*/
              v79 = v131; /*0x6393f8*/
              do /*0x6394a4*/
              {
                v108 = v79; /*0x639411*/
                v80 = sub_62E790((float *)v147, pointXYZ, v144, v145, v108, *(float *)&v134); /*0x639426*/
                a2 = *(int *)v80; /*0x63942d*/
                v136 = *((int *)v80 + 1); /*0x63943c*/
                v81 = v80[2]; /*0x639440*/
                *(float *)&v140 = *(float *)&a2 - pointXYZ; /*0x639443*/
                v137 = v81; /*0x639447*/
                v141 = *(float *)&v136 - v144; /*0x639456*/
                v142 = v81 - v145; /*0x639462*/
                v129 = *(float *)&v140 * *(float *)&v140 + v141 * v141 + v142 * v142; /*0x639482*/
                v130 = sqrt(v129); /*0x63948f*/
                v79 = v131; /*0x63949f*/
              }
              while ( v131 < (double)v130 ); /*0x6394a4*/
              if ( TESObjectREFR_GetWorldSpace((TESObjectREFR *)actor) ) /*0x6394ae*/
              {
                v82 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)actor); /*0x6394c4*/
                TESWorldSpace_GetCellAtWorldPosition(v82, (float *)&a2); /*0x6394cb*/
                v84 = Actor_ChoosePathGridSteeringPosition( /*0x6394f1*/
                        (TESObjectREFR *)actor,
                        v147,
                        a2,
                        v136,
                        v137,
                        v83,
                        COERCE_FLOAT(1),
                        0,
                        0);
                a2 = *v84; /*0x6394f8*/
                v136 = v84[1]; /*0x6394ff*/
                v137 = *((float *)v84 + 2); /*0x639506*/
              }
            }
            if ( this->unk1BC.unkC ) /*0x63950e*/
            {
              unk8 = this->unk1BC.unk8; /*0x63951d*/
              unkC = this->unk1BC.unkC; /*0x639523*/
              this->unk1BC.unk0 = this->unk1BC.unk4; /*0x639529*/
              this->unk1BC.unk4 = unk8; /*0x63952f*/
              this->unk1BC.unk8 = unkC; /*0x639535*/
              this->unk1BC.unkC = 0; /*0x63953b*/
            }
            if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x63954f*/
              actor->vtbl->AddPackageWakeUp(actor); /*0x63955f*/
            v87 = &this->Unk_F6; /*0x639565*/
            v118 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)actor); /*0x639570*/
            v88 = Shared_GetDwordAtOffset40(actor); /*0x639573*/
            if ( ((unsigned __int8 (__thiscall *)(HighProcess *, Actor *, int, int, float, UInt32, TESWorldSpace *))*v87)( /*0x639597*/
                   this,
                   actor,
                   a2,
                   v136,
                   COERCE_FLOAT(LODWORD(v137)),
                   v88,
                   v118) )
            {
              if ( TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)actor, (const float *)&a2) >= dbl_A3F3D0 ) /*0x6395b8*/
              {
                v119 = Actor_GetFatigueFraction(actor, (int)v87, (int)actor); /*0x6395c8*/
                v90 = sub_5E1F90(actor); /*0x6395cb*/
                v89 = sub_546720(v90, v119); /*0x6395d1*/
              }
              else
              {
                v89 = 0.0; /*0x6395ba*/
              }
              this->unk1D8 = v89; /*0x6395d9*/
              if ( sub_579440() == (TESObjectREFR *)actor ) /*0x6395e6*/
              {
                v109 = *(float *)&v136; /*0x6395f3*/
                a5a = *(float *)&a2; /*0x6395fd*/
                v91 = TESObjectREFR_GetName((TESObjectREFR *)actor); /*0x639600*/
                _sprintf(Format, "%s is wandering to point x %.02f and y %.02f", v91, a5a, v109); /*0x639610*/
                Interface_ConsolePrint(Format); /*0x63961a*/
              }
            }
          }
          return; /*0x639622*/
        }
        if ( !sub_4D74B0(v64) || !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x63913a*/
        {
          if ( this->unk1BC.unkC ) /*0x639140*/
          {
            *(&this->unk1BC.unk0 + this->unk200++) = (UInt32)v64; /*0x63914e*/
            if ( (int)this->unk200 > 3 ) /*0x639163*/
              this->unk200 = 0; /*0x639165*/
          }
          else
          {
            v67 = 0; /*0x63916d*/
            v68 = &this->unk1BC; /*0x63916f*/
            while ( v68->unk0 ) /*0x639177*/
            {
              ++v67; /*0x639179*/
              v68 = (Unk1BC *)((char *)v68 + 4); /*0x63917c*/
              if ( v67 >= 4 ) /*0x639182*/
                goto LABEL_152; /*0x639182*/
            }
            *(&this->unk1BC.unk0 + v67) = (UInt32)v64; /*0x639186*/
          }
        }
LABEL_152:
        if ( TesObjectREF_GetDistance((TESObjectREFR *)actor, v64, 0) <= fConst_200 && !sub_4D74B0(v64) || unk_B3B935 ) /*0x6391b2*/
          return; /*0x6391b9*/
        unk_B3B935 = 1; /*0x6391c1*/
        if ( sub_4D74B0(v64) ) /*0x6391c8*/
        {
          if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x6391df*/
          {
LABEL_165:
            v117 = Actor_GetFatigueFraction(actor, (int)p_unk128, (int)actor); /*0x6392f0*/
            v74 = sub_5E1F90(actor); /*0x6392fd*/
            this->unk1D8 = sub_546720(v74, v117); /*0x639308*/
            if ( sub_579440() == (TESObjectREFR *)actor ) /*0x639318*/
            {
              v75 = v64->vtbl->GetPos(v64); /*0x63932b*/
              v107 = v64->vtbl->GetPos(v64)[1]; /*0x639340*/
              a5 = *v75; /*0x639348*/
              a3 = TESObjectREFR_GetName(v64); /*0x639350*/
              v76 = TESObjectREFR_GetName((TESObjectREFR *)actor); /*0x639353*/
              _sprintf(Format, "%s is wandering to object %s at x %.02f and y %.02f", v76, a3, a5, v107); /*0x639363*/
              Interface_ConsolePrint(Format); /*0x639370*/
            }
            return; /*0x639378*/
          }
          p_unk128 = &this->unk128; /*0x6391ee*/
          LODWORD(v134) = 0; /*0x6391fc*/
          if ( sub_4E0E20(v64, (float *)&v140, &this->unk128.unk00, &v134) ) /*0x639200*/
          {
            this->furnitureMarkerIndex = LOBYTE(v134); /*0x63920f*/
            v69 = &this->Unk_F6; /*0x639217*/
            this->furniture = v64; /*0x63921c*/
            v128 = (int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v69; /*0x639222*/
            v116 = TESObjectREFR_GetWorldSpace(v64); /*0x63922b*/
            v70 = Shared_GetDwordAtOffset40(v64); /*0x63922e*/
            v71 = (*v128)( /*0x639252*/
                    this,
                    actor,
                    LODWORD(p_unk128->unk00.x),
                    LODWORD(this->unk128.unk00.y),
                    LODWORD(this->unk128.unk00.z),
                    v70,
                    v116);
            goto LABEL_164; /*0x639254*/
          }
          p_unk128 = (Unk128 *)&this->Unk_F6; /*0x639264*/
          v133 = (int)v64->vtbl->GetPos(v64); /*0x63926e*/
          TESObjectREFR_GetWorldSpace(v64); /*0x639272*/
          v72 = Shared_GetDwordAtOffset40(v64); /*0x63927a*/
          v73 = (_DWORD *)v133; /*0x63927f*/
        }
        else
        {
          if ( ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x63928d*/
            actor->vtbl->AddPackageWakeUp(actor); /*0x63929d*/
          p_unk128 = (Unk128 *)&this->Unk_F6; /*0x6392ac*/
          HIDWORD(v134) = v64->vtbl->GetPos(v64); /*0x6392b6*/
          TESObjectREFR_GetWorldSpace(v64); /*0x6392ba*/
          v72 = Shared_GetDwordAtOffset40(v64); /*0x6392c2*/
          v73 = (_DWORD *)HIDWORD(v134); /*0x6392c7*/
        }
        v71 = ((int (__thiscall *)(HighProcess *, Actor *, _DWORD, _DWORD, _DWORD, UInt32))LODWORD(p_unk128->unk00.x))( /*0x6392e6*/
                this,
                actor,
                *v73,
                v73[1],
                v73[2],
                v72);
LABEL_164:
        if ( !v71 ) /*0x6392ea*/
          return; /*0x6392ea*/
        goto LABEL_165; /*0x6392ea*/
      }
      if ( this->unk0D0 ) /*0x6396da*/
        return; /*0x6396e1*/
    }
    furniture = this->furniture; /*0x6396e7*/
    if ( furniture && sub_4D72C0(furniture, this->furnitureMarkerIndex) ) /*0x6396f9*/
    {
      ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, actor); /*0x63970d*/
      this->unk1D8 = 0.0; /*0x639711*/
      this->furniture = 0; /*0x639717*/
    }
    else
    {
      ((void (__thiscall *)(HighProcess *, Actor *, int))this->Unk_8D)(this, actor, 0x101); /*0x639736*/
      if ( this->furniture ) /*0x639738*/
        v96 = flt_A31C80; /*0x639749*/
      else
        v96 = flt_A5793C; /*0x639741*/
      v66 = this->pathing == 0; /*0x63974f*/
      *(float *)&v134 = v96; /*0x639753*/
      if ( v66 ) /*0x639757*/
        this->Unk_101(this); /*0x639763*/
      v97 = this->__vftable; /*0x639765*/
      sub_68A1A0((_DWORD *)this->pathing); /*0x639778*/
      v110 = v98; /*0x639780*/
      a5_4 = sub_68A190((_DWORD *)this->pathing); /*0x639789*/
      sub_68A160((float ***)this->pathing); /*0x63978a*/
      if ( !((unsigned __int8 (__thiscall *)(HighProcess *, Actor *, int, TESObjectCELL *, int, _DWORD))v97->Unk_104)( /*0x639795*/
              this,
              actor,
              v99,
              a5_4,
              v110,
              LODWORD(v134)) )
        ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, actor); /*0x6397a6*/
    }
    return; /*0x639721*/
  }
  sub_5E4400(actor); /*0x63853b*/
  v11 = v10; /*0x63854f*/
  sub_566DC0(v6, kTerrainLODQuadRayDirectionZ, v2, actor, 0, kTerrainLODQuadRayDirectionZ); /*0x638551*/
  if ( !v12 ) /*0x638558*/
  {
    ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))this->Unk_61)(this, actor, 0xFFFFFFFE); /*0x638567*/
    return; /*0x638569*/
  }
  if ( !v11 ) /*0x638570*/
    goto LABEL_18; /*0x638570*/
  v13 = ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this); /*0x638580*/
  v14 = this->__vftable; /*0x638585*/
  if ( v13 == 4 ) /*0x638589*/
  {
    this->usedItem = *(TESForm **)(v11 + 8); /*0x63858e*/
    v14->Unk_2E(this, 1); /*0x638599*/
LABEL_12:
    ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))this->Unk_61)(this, actor, 0xFFFFFFFF); /*0x63859b*/
    return; /*0x6385aa*/
  }
  ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))v14->Unk_61)(this, actor, 0xFFFFFFFF); /*0x6385b8*/
}
