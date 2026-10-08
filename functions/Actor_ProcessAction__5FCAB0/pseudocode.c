// Per-actor native action state machine. Advances required-note phases, handles AttackBow nock/hold/release lifecycle, constructs ArrowProjectile on release, and dispatches post-shot AMMO consumption.
void __thiscall Actor_ProcessAction(Actor *this, float arg0, float arg1)
{
  double v3; // st5
  double v4; // st6
  ActorAnimData *v6; // edi
  bhkCharacterProxy *CharProxy; // eax
  double v8; // st7
  BSAnimGroupSequence *v9; // ebp
  int *v10; // edi
  BSAnimGroupSequence *v11; // eax
  int v12; // eax
  unsigned __int8 AnimGroupFromField8Value; // al
  int v14; // eax
  int v15; // eax
  int *ActorWithinReach; // eax
  Actor *v17; // edi
  EntryData *v18; // eax
  unsigned __int8 v19; // al
  LowProcess *process; // ecx
  TESPackage *editorPackage; // eax
  EntryData *v22; // eax
  LowProcess *v23; // ecx
  TESPackage *v24; // eax
  unsigned __int8 v25; // al
  float *v26; // eax
  char IsUnderwater; // bl
  MagicItem *v28; // eax
  Actor *v29; // ecx
  ActorSkinInfo *v30; // ebx
  UInt32 v31; // edi
  NiNode *v32; // eax
  NiNode *v33; // ebp
  NiObject *v34; // eax
  NiObject *v35; // ebx
  NiObject *v36; // eax
  EntryData *v37; // eax
  int ItemCount; // eax
  int v39; // edi
  BSAnimGroupSequence *v40; // eax
  float x; // eax
  float z; // edx
  Actor *v43; // ecx
  ActorSkinInfo *v44; // ebx
  NiNode *v45; // ebp
  NiAVObject *ChildAtIndex; // edi
  bool v47; // bl
  float v48; // ecx
  float v49; // edx
  void *ShadowSceneNode; // eax
  EntryData *v51; // ebp
  EntryData *v52; // eax
  EntryData *v53; // edi
  TESForm *v54; // eax
  TESForm *v55; // eax
  CombatController *v56; // eax
  CombatController *v57; // ebx
  _DWORD *CurrentTarget; // edi
  double v59; // st7
  char *v60; // eax
  ArrowProjectile *v61; // eax
  double v62; // st7
  ActorVtbl *vtbl; // edx
  BSAnimGroupSequence *v64; // eax
  int v65; // ebx
  ActorAnimData *AnimDataByPerspective; // ebx
  int v67; // ebp
  UInt8 (__thiscall **p_SetWeaponOut)(BaseProcess *__hidden, UInt8); // edi
  int v69; // edx
  void (__thiscall **p_Unk_53)(BaseProcess *__hidden, UInt32, UInt32, UInt32, UInt32); // edi
  int CurrentAction; // eax
  TESEffectShader *v72; // eax
  MagicShaderHitEffect *WeaponEnchantmentShader; // eax
  TESForm *type; // edi
  int FormEnchantment; // eax
  EntryData *v76; // eax
  AlchemyItem *Poison; // eax
  _DWORD *v78; // eax
  unsigned int v79; // edi
  int StateId; // eax
  int v81; // eax
  bool v82; // zf
  unsigned int v83; // edi
  int v84; // ebx
  int v85; // eax
  ActorVtbl *v86; // edi
  int v87; // eax
  unsigned __int8 v88; // al
  int v89; // eax
  int v90; // eax
  int v91; // eax
  float *SafeFloatPointer; // eax
  UInt32 DeadState; // eax
  __int16 v94; // bx
  int v95; // ebp
  InterfaceManager *Singleton; // eax
  unsigned __int16 v97; // ax
  ActorAnimData *v98; // edi
  unsigned __int16 v99; // ax
  unsigned int v100; // ebp
  int GroupID; // eax
  int v102; // ebx
  int v103; // edi
  double v104; // st7
  __int16 v105; // ax
  __int16 v106; // ax
  int v107; // edi
  __int16 v108; // ax
  __int16 v109; // ax
  EntryData *v110; // eax
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  unsigned __int16 v112; // ax
  unsigned int v113; // edi
  BSAnimGroupSequence *v114; // ebx
  unsigned __int16 v115; // ax
  unsigned __int16 v116; // ax
  unsigned int v117; // edi
  int v118; // eax
  ActorAnimData *v119; // eax
  unsigned __int16 v120; // ax
  void (__thiscall **p_SetUnk20CInner)(BaseProcess *__hidden); // edi
  float *WeaponTipLocalPointForHit; // eax
  double attackStrength; // [esp+34h] [ebp-80h]
  ExtraDataList *a; // [esp+38h] [ebp-7Ch]
  BSAnimGroupSequence *duration; // [esp+3Ch] [ebp-78h]
  char durationa; // [esp+3Ch] [ebp-78h]
  BSAnimGroupSequence *durationb; // [esp+3Ch] [ebp-78h]
  float durationc; // [esp+3Ch] [ebp-78h]
  float durationd; // [esp+3Ch] [ebp-78h]
  float duratione; // [esp+3Ch] [ebp-78h]
  BSAnimGroupSequence *durationf; // [esp+3Ch] [ebp-78h]
  int v132; // [esp+40h] [ebp-74h]
  double v133; // [esp+44h] [ebp-70h]
  int v134; // [esp+4Ch] [ebp-68h]
  int v135; // [esp+50h] [ebp-64h]
  ActorAnimData *v136; // [esp+54h] [ebp-60h]
  int v137; // [esp+58h] [ebp-5Ch]
  int action; // [esp+5Ch] [ebp-58h]
  int v139; // [esp+60h] [ebp-54h]
  float v140; // [esp+64h] [ebp-50h]
  int v141; // [esp+68h] [ebp-4Ch]
  int v142; // [esp+6Ch] [ebp-48h]
  int v143; // [esp+6Ch] [ebp-48h]
  int v144; // [esp+6Ch] [ebp-48h]
  int v145; // [esp+70h] [ebp-44h]
  ActorSkinInfo *v146; // [esp+74h] [ebp-40h]
  ActorSkinInfo *v147; // [esp+74h] [ebp-40h]
  TESForm *v148; // [esp+74h] [ebp-40h]
  float v149; // [esp+74h] [ebp-40h]
  float v150; // [esp+74h] [ebp-40h]
  float v151; // [esp+78h] [ebp-3Ch]
  float v152; // [esp+7Ch] [ebp-38h]
  float pitchX; // [esp+80h] [ebp-34h]
  float yawZ; // [esp+84h] [ebp-30h]
  float v155; // [esp+88h] [ebp-2Ch]
  float unk640; // [esp+88h] [ebp-2Ch]
  float v157; // [esp+88h] [ebp-2Ch]
  float v158; // [esp+88h] [ebp-2Ch]
  ActorSkinInfo *SkinInfoByPerspective; // [esp+88h] [ebp-2Ch]
  bhkCharacterProxy *originX; // [esp+8Ch] [ebp-28h]
  double originX_4; // [esp+90h] [ebp-24h] BYREF
  float v162; // [esp+98h] [ebp-1Ch]
  int a2; // [esp+9Ch] [ebp-18h] BYREF
  float y; // [esp+A0h] [ebp-14h]
  float v165; // [esp+A4h] [ebp-10h]
  int v166; // [esp+B0h] [ebp-4h]
  BSAnimGroupSequence *arg0a; // [esp+B8h] [ebp+4h]

  if ( !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) /*0x5fcaf7*/
    && (this != (Actor *)reference || reference->isThirdPerson) )
  {
    v6 = this->vtbl->super.super.GetAnimData(this); /*0x5fcb0f*/
    v136 = v6; /*0x5fcb13*/
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x5fcb17*/
    originX = CharProxy; /*0x5fcb1e*/
    if ( v6 ) /*0x5fcb22*/
    {
      if ( this->members.super.process && CharProxy ) /*0x5fcb33*/
      {
        if ( !this->members.super.process->GetProcessLevel(this->members.super.process) ) /*0x5fcb41*/
          sub_633460((float *)this->members.super.process); /*0x5fcb4a*/
        if ( (PlayerCharacter *)((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this) == reference ) /*0x5fcb61*/
        {
          arg0 = flt_B14E58; /*0x5fcb69*/
          arg1 = flt_B14E5C; /*0x5fcb73*/
        }
        v140 = 1.0; /*0x5fcb7a*/
        v8 = 0.0; /*0x5fcb80*/
        v137 = 0; /*0x5fcb82*/
        *(float *)&v139 = 0.0; /*0x5fcb86*/
        v141 = 0; /*0x5fcb8a*/
        v145 = 0; /*0x5fcb8e*/
        action = 0xFFFFFFFF; /*0x5fcb92*/
        *(float *)&v9 = COERCE_FLOAT(ActorAnimData_GetNormalizedSequenceSlot(v6, 0)); /*0x5fcb9f*/
        v151 = *(float *)&v9; /*0x5fcbab*/
        v10 = (int *)this->vtbl->super.super.GetActiveSkinInfo(this); /*0x5fcbb3*/
        if ( Actor_GetCurrentAction(this) != 0xFFFFFFFF ) /*0x5fcbbd*/
        {
          if ( this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process) /*0x5fcbe5*/
            && *((_DWORD *)this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process) + 0x11) )
          {
            switch ( Actor_GetCurrentAction(this) ) /*0x5fcbfe*/
            {
              case 0: /*0x5fcbfe*/
              case 1: /*0x5fcbfe*/
                v65 = this->members.super.process->GetWeaponOut(this->members.super.process); /*0x5fd56d*/
                if ( v65 != (Actor_GetCurrentAction(this) == 0) && ActorAnimData_GetSlotActionState(v136, 3) >= 1 ) /*0x5fd592*/
                {
                  AnimDataByPerspective = v136; /*0x5fd59e*/
                  SkinInfoByPerspective = (ActorSkinInfo *)v10; /*0x5fd5a2*/
                  v67 = 1; /*0x5fd5a6*/
                  if ( this == (Actor *)reference ) /*0x5fd5ab*/
                    v67 = 2; /*0x5fd5ad*/
                  p_SetWeaponOut = &this->members.super.process->SetWeaponOut; /*0x5fd5b9*/
                  LOBYTE(v69) = Actor_GetCurrentAction(this) == 0; /*0x5fd5cb*/
                  (*p_SetWeaponOut)(this->members.super.process, v69); /*0x5fd5cf*/
                  do /*0x5fd625*/
                  {
                    if ( this == (Actor *)reference && v67 == 1 ) /*0x5fd5e2*/
                    {
                      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5fd5f1*/
                      SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, 1); /*0x5fd5f8*/
                    }
                    p_Unk_53 = &this->members.super.process->Unk_53; /*0x5fd60a*/
                    CurrentAction = Actor_GetCurrentAction(this); /*0x5fd610*/
                    LOBYTE(CurrentAction) = CurrentAction == 0; /*0x5fd61c*/
                    (*p_Unk_53)( /*0x5fd620*/
                      this->members.super.process,
                      CurrentAction,
                      (UInt32)SkinInfoByPerspective,
                      (UInt32)AnimDataByPerspective,
                      (UInt32)this);
                    --v67; /*0x5fd622*/
                  }
                  while ( v67 ); /*0x5fd625*/
                  ((void (__thiscall *)(LowProcess *, Actor *, int, _DWORD, _DWORD))this->members.super.process->Unk_10A)( /*0x5fd639*/
                    this->members.super.process,
                    this,
                    1,
                    0,
                    0);
                  if ( this->members.super.process->GetWeaponOut(this->members.super.process) ) /*0x5fd646*/
                  {
                    if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_106)(this->members.super.process) ) /*0x5fd65b*/
                    {
                      v72 = (TESEffectShader *)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_106)(this->members.super.process); /*0x5fd670*/
                      WeaponEnchantmentShader = ActorProcessManager_FindWeaponEnchantmentShader( /*0x5fd679*/
                                                  (ActorProcessManager *)&qword_B3BB2C[0x75],
                                                  (TESObjectREFR *)this,
                                                  v72);
                      if ( WeaponEnchantmentShader ) /*0x5fd680*/
                        sub_6A0350((int)WeaponEnchantmentShader); /*0x5fd684*/
                      if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1) ) /*0x5fd696*/
                      {
                        type = 0; /*0x5fd6ad*/
                        if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type ) /*0x5fd6b1*/
                        {
                          if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type->member.type == kFormType_Weapon ) /*0x5fd6cc*/
                            type = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type; /*0x5fd6dd*/
                        }
                        FormEnchantment = TESEnchantableForm_GetFormEnchantment(type); /*0x5fd6e1*/
                        if ( FormEnchantment && FormEnchantment != 0xFFFFFFE8 /*0x5fd70f*/
                          || (v76 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1),
                              (Poison = EquippedEntryData_GetPoison(v76)) != 0)
                          && Poison != (AlchemyItem *)0xFFFFFFDC )
                        {
                          switch ( LOBYTE(type[6].vtbl) ) /*0x5fd71d*/
                          {
                            case 0: /*0x5fd71d*/
                              TESObjectREFR_PlayResolvedAnimSoundNote(this, "WPNBlade1HandEquipEnchanted", 0, 0x102, 1); /*0x5fd732*/
                              goto LABEL_163; /*0x5fd732*/
                            case 1: /*0x5fd71d*/
                              TESObjectREFR_PlayResolvedAnimSoundNote(this, "WPNBlade2HandEquipEnchanted", 0, 0x102, 1); /*0x5fd742*/
                              goto LABEL_163; /*0x5fd742*/
                            case 2: /*0x5fd71d*/
                              TESObjectREFR_PlayResolvedAnimSoundNote(this, "WPNBlunt1HandEquipEnchanted", 0, 0x102, 1); /*0x5fd752*/
                              goto LABEL_163; /*0x5fd752*/
                            case 3: /*0x5fd71d*/
                              TESObjectREFR_PlayResolvedAnimSoundNote(this, "WPNBlunt2HandEquipEnchanted", 0, 0x102, 1); /*0x5fd764*/
LABEL_163:
                              v79 = (unsigned int)v78; /*0x5fd769*/
                              if ( v78 ) /*0x5fd76d*/
                              {
                                sub_6B73E0(v78); /*0x5fd771*/
                                FormHeapFree(v79); /*0x5fd777*/
                              }
                              break; /*0x5fd777*/
                            default:
                              break;
                          }
                        }
                      }
                    }
                  }
                  HideEquipment((TESObjectREFR *)this, v3, v4, 0.0, 0, 0); /*0x5fd77f*/
                  *(float *)&v9 = v151; /*0x5fd78a*/
                }
                break; /*0x5fd78e*/
              case 2: /*0x5fcbfe*/
                v11 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process); /*0x5fcc10*/
                v12 = *(_DWORD *)(0x24 * TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v11 + 0x1A)) + 0xB102E8) - 1; /*0x5fcc24*/
                if ( v12 ) /*0x5fcc27*/
                {
                  if ( v12 == 2 && ActorAnimData_GetSlotActionState(v136, 3) == 1 ) /*0x5fcc44*/
                  {
                    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v136, 3); /*0x5fcc50*/
                    v14 = *(_DWORD *)(0x24 * AnimKey_GetGroupID(AnimGroupFromField8Value) + 0xB102EC) - 4; /*0x5fcc68*/
                    if ( v14 ) /*0x5fcc6b*/
                    {
                      v15 = v14 - 1; /*0x5fcc71*/
                      if ( v15 ) /*0x5fcc74*/
                      {
                        if ( v15 == 1 ) /*0x5fcc7d*/
                        {
                          originX_4 = ((double (__thiscall *)(Actor *))this->vtbl->super.super.GetScale)(this); /*0x5fcc8f*/
                          v155 = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x92]) * originX_4; /*0x5fcca4*/
                          v8 = v155; /*0x5fcca8*/
                          ActorWithinReach = CombatController_FindActorWithinReach(v10, (int *)this, v155); /*0x5fccb0*/
                          v17 = (Actor *)ActorWithinReach; /*0x5fccb5*/
                          if ( ActorWithinReach ) /*0x5fccbc*/
                          {
                            Actor_AttemptBlockDisarmPerkOnHit( /*0x5fccc1*/
                              (int *)this,
                              (int)ActorWithinReach,
                              (TESObjectREFR *)ActorWithinReach);
                            Actor_PlayKnockdownAnimGroup(v17); /*0x5fccc8*/
                            if ( this->members.super.process->GetEquippedShieldData(this->members.super.process, 1) ) /*0x5fccda*/
                            {
                              v18 = this->members.super.process->GetEquippedShieldData(this->members.super.process, 1); /*0x5fcced*/
                              v19 = TESObjectARMO_ISHeavyArmor(v18->type); /*0x5fccf8*/
                              v8 = flt_A31C80; /*0x5fcd13*/
                              sub_6AF880( /*0x5fcd1d*/
                                v4,
                                v8,
                                this,
                                flt_A31C80,
                                SLODWORD(flt_A2FE7C),
                                v17,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                v19,
                                0,
                                0);
                            }
                          }
                          if ( Actor_IsCurrentActionInRange2To5(this) ) /*0x5fcd27*/
                          {
                            duration = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process); /*0x5fcd41*/
                            Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_Block, duration); /*0x5fcd44*/
                          }
                        }
                        break; /*0x5fcd44*/
                      }
                      if ( this == (Actor *)reference || this->vtbl->IsInCombat(this, 1) ) /*0x5fcd5d*/
                      {
                        this->vtbl->AttackHandling(this, 1, 0, 0); /*0x5fcda4*/
                      }
                      else
                      {
                        process = this->members.super.process; /*0x5fcd63*/
                        editorPackage = process->editorPackage; /*0x5fcd66*/
                        if ( editorPackage /*0x5fcd7b*/
                          && editorPackage->members.type == kPackageType_UseItemAt
                          && !process->Unk_4D(process) )
                        {
                          Actor_ProcessAttackReachProbe(this, v4, 0.0);// Verified call context: Actor_ProcessAction invokes Actor_ProcessAttackReachProbe with actor in ECX in this non-player attack branch; surrounding action/weapon-state checks gate the call. /*0x5fcd83*/
                        }
                        else
                        {
                          ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))this->vtbl->Unk_EC)(this, 1, 0, 0); /*0x5fcd92*/
                        }
                      }
                      durationa = !Actor_IsCreature(this); /*0x5fcdb2*/
                      sub_5E4010(this, durationa); /*0x5fcdb5*/
                    }
                    else if ( this->members.super.process->Unk_4E(this->members.super.process) ) /*0x5fcde9*/
                    {
                      v22 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1); /*0x5fcdfc*/
                      v8 = sub_5E4920( /*0x5fce01*/
                             (PlayerCharacter *)this,
                             (int)v10,
                             0.0,
                             (void **)&v22->extendData,
                             *(float *)&v132);
                    }
                    else if ( this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster) ) /*0x5fce13*/
                    {
                      MagicCaster_UseActiveMagicItem( /*0x5fce1d*/
                        &this->members.magicCaster.vtbl,
                        v3,
                        0.0,
                        v4,
                        0,
                        v132,
                        SLODWORD(v133),
                        SHIDWORD(v133),
                        v134,
                        v135,
                        (int)v136,
                        0,
                        0xFFFFFFFF,
                        v139,
                        SLODWORD(v140),
                        0);
                    }
                    else if ( this == (Actor *)reference || this->vtbl->IsInCombat(this, 1) ) /*0x5fce38*/
                    {
                      this->vtbl->AttackHandling(this, 0, 0, 0); /*0x5fce93*/
                      sub_5E4010(this, 0); /*0x5fce97*/
                    }
                    else
                    {
                      v23 = this->members.super.process; /*0x5fce3e*/
                      v24 = v23->editorPackage; /*0x5fce41*/
                      if ( v24 && v24->members.type == kPackageType_UseItemAt && !v23->Unk_4D(v23) ) /*0x5fce56*/
                      {
                        Actor_ProcessAttackReachProbe(this, v4, 0.0);// Verified call context: second Actor_ProcessAction branch invokes Actor_ProcessAttackReachProbe with actor in ECX after corresponding action-state checks. /*0x5fce5e*/
                        sub_5E4010(this, 0); /*0x5fce65*/
                      }
                      else
                      {
                        ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))this->vtbl->Unk_EC)(this, 0, 0, 0); /*0x5fce7a*/
                        sub_5E4010(this, 0); /*0x5fce7e*/
                      }
                    }
                    if ( !Actor_IsCurrentActionInRange2To5(this) ) /*0x5fcdc3*/
                      break; /*0x5fcdc3*/
LABEL_36:
                    durationb = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process); /*0x5fcdc9*/
                    Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_AttackFollowThrough, durationb); /*0x5fcdd9*/
                    break; /*0x5fcdd9*/
                  }
                }
                else if ( ActorAnimData_GetSlotActionState(v136, 1) == 1 ) /*0x5fceaa*/
                {
                  v25 = ActorAnimData_GetAnimGroupFromField8Value(v136, 1); /*0x5fceb5*/
                  if ( (unsigned int)(*(_DWORD *)(0x24 * AnimKey_GetGroupID(v25) + 0xB102EC) - 4) <= 1 ) /*0x5fced3*/
                  {
                    if ( this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster) ) /*0x5fcee4*/
                    {
                      v8 = flt_A6E688; /*0x5fceee*/
                      durationc = flt_A6E688; /*0x5fcef7*/
                      a = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x5fcf01*/
                      v26 = this->vtbl->super.super.GetPos(this); /*0x5fcf0a*/
                      IsUnderwater = Actor_IsUnderwater__(this, (int)v26, a, durationc); /*0x5fcf16*/
                      if ( (Actor_IsSwimming(this) || IsUnderwater) /*0x5fcf33*/
                        && (v28 = this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster),
                            EffectItemList_HasAssocActorEffect((int)v28 + 0xC)) )
                      {
                        if ( this == (Actor *)reference ) /*0x5fcf42*/
                        {
                          v8 = kTerrainLODQuadRayDirectionZ; /*0x5fcf48*/
                          GameUI_QueueMessage(MEMORY[0xB38DE8].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5fcf5d*/
                        }
                      }
                      else
                      {
                        MagicCaster_UseActiveMagicItem( /*0x5fcf6e*/
                          &this->members.magicCaster.vtbl,
                          v3,
                          v8,
                          v4,
                          0,
                          v132,
                          SLODWORD(v133),
                          SHIDWORD(v133),
                          v134,
                          v135,
                          (int)v136,
                          0,
                          0xFFFFFFFF,
                          v139,
                          SLODWORD(v140),
                          0);
                      }
                    }
                    goto LABEL_36; /*0x5fcf65*/
                  }
                }
                break; /*0x5fcc44*/
              case 4: /*0x5fcbfe*/
                if ( ActorAnimData_GetSlotActionState(v136, 3) != 1 ) /*0x5fcf86*/
                  break;                        // Current action 4 (AttackBow) performs native nock/Attach work only at exact slot-3 state 1, after the Attach note. Hold/state 2 has no separate Actor_ProcessAction branch. /*0x5fcf86*/
                v29 = (Actor *)reference; /*0x5fcf8c*/
                v146 = (ActorSkinInfo *)v10; /*0x5fcf94*/
                v142 = 1; /*0x5fcf98*/
                if ( this != (Actor *)reference ) /*0x5fcf9c*/
                  goto LABEL_65; /*0x5fcf9c*/
                v142 = 2; /*0x5fcf9e*/
                while ( 2 ) /*0x5fcfbf*/
                {
                  if ( this == v29 && v142 == 1 ) /*0x5fcfbf*/
                  {
                    v30 = Actor_GetSkinInfoByPerspective(v29, 1); /*0x5fcfc8*/
                    v146 = v30; /*0x5fcfca*/
                  }
                  else
                  {
LABEL_65:
                    v30 = v146; /*0x5fcfd0*/
                  }
                  v31 = this->members.super.process->Unk_49(this->members.super.process, (UInt32)v30); /*0x5fcfe7*/
                  v32 = this->members.super.process->GetArrowAttachTargetNode(this->members.super.process, v30); /*0x5fcff0*/
                  v33 = v32; /*0x5fcff4*/
                  if ( !v31 || !v32 ) /*0x5fcffe*/
                    goto LABEL_78; /*0x5fcffe*/
                  v34 = (NiObject *)(*(int (__thiscall **)(UInt32, const char *))(*(_DWORD *)v31 + 0x58))( /*0x5fd010*/
                                      v31,
                                      "Arrow:0");
                  v35 = v34; /*0x5fd012*/
                  if ( !v34 ) /*0x5fd016*/
                  {
                    PrintError("Could not find Arrow:0 on Quiver"); /*0x5fd01d*/
                    goto LABEL_78; /*0x5fd025*/
                  }
                  v36 = NiObject_CloneWithPointerMap(v34); /*0x5fd02c*/
                  ((void (__thiscall *)(NiNode *, NiObject *, int))v33->vtbl->AddObject)(v33, v36, 1);// Directly attach the transient Quiver Arrow:0 clone to the perspective-correct ArrowBone via NiNode vslot +0x84 = NiNode::AddObject(child, firstAvailableSlot=1). Prn is not involved; ArrowBone's child array becomes the persistent owner and no separate clone pointer is stored. /*0x5fd03f*/
                  if ( this != (Actor *)reference || GetGodMode() ) /*0x5fd04d*/
                    goto LABEL_78; /*0x5fd054*/
                  v37 = this->members.super.process->GetEquippedAmmoData(this->members.super.process, 1); /*0x5fd067*/
                  ItemCount = TESObjectREFR_GetItemCount((TESObjectREFR *)this, v37->type); /*0x5fd06f*/
                  if ( ItemCount == 1 ) /*0x5fd077*/
                  {
                    v39 = (int)v35; /*0x5fd079*/
                  }
                  else
                  {
                    if ( ItemCount > (int)MEMORY[0xB35588].value ) /*0x5fd085*/
                      goto LABEL_78; /*0x5fd085*/
                    LODWORD(originX_4) = 0; /*0x5fd089*/
                    HIDWORD(originX_4) = 0; /*0x5fd08d*/
                    v166 = 0; /*0x5fd0a5*/
                    BSStringT_Static_Format((BSStringT *)&originX_4, "Arrow%d", ItemCount - 1); /*0x5fd0a9*/
                    v39 = (*(int (__thiscall **)(UInt32, char *))(*(_DWORD *)v31 + 0x58))( /*0x5fd0c3*/
                            v31,
                            (char *)LODWORD(originX_4));
                    v166 = 0xFFFFFFFF; /*0x5fd0c5*/
                    BSStringT_Clear((unsigned int *)&originX_4); /*0x5fd0cd*/
                  }
                  if ( v39 ) /*0x5fd0d4*/
                    *(_WORD *)(v39 + 0x18) |= 1u; /*0x5fd0d6*/
LABEL_78:
                  if ( --v142 ) /*0x5fd0e0*/
                  {
                    v29 = (Actor *)reference; /*0x5fcfb0*/
                    continue; /*0x5fcfb0*/
                  }
                  break;
                }
                v40 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process); /*0x5fd0f1*/
                Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_AttackBowArrowAttached, v40);// After cloning Quiver Arrow:0 into ArrowBone, request action 4 -> 5 (AttackBowArrowAttached). This Attach boundary establishes the native held/cocked visual state. /*0x5fd0f8*/
                *(float *)&v9 = v151; /*0x5fd0fd*/
                break; /*0x5fd101*/
              case 5: /*0x5fcbfe*/
                if ( ActorAnimData_GetSlotActionState(v136, 3) != 3 ) /*0x5fd114*/
                  break;                        // Current action 5 (AttackBowArrowAttached) executes native Release only at exact slot-3 state 3, after the Release note. Hold/state 2 and End/state 4 have no release branch. /*0x5fd114*/
                x = g_zeroNiPoint3.x; /*0x5fd120*/
                z = g_zeroNiPoint3.z; /*0x5fd125*/
                y = g_zeroNiPoint3.y; /*0x5fd12b*/
                v43 = (Actor *)reference; /*0x5fd12f*/
                v82 = this == (Actor *)reference; /*0x5fd135*/
                v147 = (ActorSkinInfo *)v10; /*0x5fd137*/
                v143 = 1; /*0x5fd13b*/
                a2 = LODWORD(x); /*0x5fd143*/
                v165 = z; /*0x5fd147*/
                if ( v82 ) /*0x5fd14b*/
                  v143 = 2; /*0x5fd14d*/
                v44 = (ActorSkinInfo *)v10; /*0x5fd155*/
                while ( 2 ) /*0x5fd16f*/
                {
                  if ( this == v43 && v143 == 1 ) /*0x5fd16f*/
                  {
                    v44 = Actor_GetSkinInfoByPerspective(v43, 1); /*0x5fd178*/
                    v147 = v44; /*0x5fd17a*/
                  }
                  if ( !this->members.super.process->GetArrowAttachTargetNode(this->members.super.process, v44) ) /*0x5fd18a*/
                    goto LABEL_100; /*0x5fd18a*/
                  v45 = this->members.super.process->GetArrowAttachTargetNode(this->members.super.process, v44); /*0x5fd1a2*/
                  ChildAtIndex = NiNode_GetChildAtIndex(v45, 0); /*0x5fd1ad*/
                  if ( !ChildAtIndex ) /*0x5fd1b1*/
                    goto LABEL_100; /*0x5fd1b1*/
                  ChildAtIndex->vtbl->UpdateWorldData(ChildAtIndex); /*0x5fd1be*/
                  if ( this != (Actor *)reference ) /*0x5fd1c8*/
                    goto LABEL_98; /*0x5fd1c8*/
                  v47 = 0; /*0x5fd1cc*/
                  if ( PlayerCharacter_GetNodeByPerspective(reference, 1) ) /*0x5fd1ce*/
                    v47 = (PlayerCharacter_GetNodeByPerspective(reference, 1)->members.super.m_flags & 1) != 0; /*0x5fd1ea*/
                  if ( v143 == 1 ) /*0x5fd1f3*/
                  {
                    if ( v47 ) /*0x5fd1f7*/
                      goto LABEL_99; /*0x5fd1f7*/
                    goto LABEL_98; /*0x5fd1f7*/
                  }
                  if ( v143 == 2 && v47 ) /*0x5fd202*/
                  {
LABEL_98:
                    v48 = ChildAtIndex->members.m_worldTransform.pos.y; /*0x5fd204*/
                    v49 = ChildAtIndex->members.m_worldTransform.pos.z; /*0x5fd210*/
                    a2 = LODWORD(ChildAtIndex->members.m_worldTransform.pos.x); /*0x5fd216*/
                    y = v48; /*0x5fd21a*/
                    v165 = v49; /*0x5fd21e*/
                  }
LABEL_99:
                  ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x5fd222*/
                  ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, (NiAVObject *)v45); /*0x5fd22f*/
                  NiTObjectArray_ClearAndRelease(&v45->members.children);// Normal AttackBow Release visual boundary: after optionally sampling ArrowBone child-0 world translation, clear/release every child in ArrowBone's NiTArray at +0xAC. Both available player perspective targets are cleared; visibility controls only which perspective supplies origin. A missing target or child 0 skips this pass. 0x5F0182 is defensive transition cleanup. /*0x5fd23a*/
                  v44 = v147; /*0x5fd23f*/
LABEL_100:
                  if ( --v143 ) /*0x5fd248*/
                  {
                    v43 = (Actor *)reference; /*0x5fd160*/
                    continue; /*0x5fd160*/
                  }
                  break;
                }
                yawZ = this->vtbl->super.GetZRotation((MobileObject *)this); /*0x5fd25a*/
                pitchX = Actor_GetAimPitch(this); /*0x5fd265*/
                v8 = 1.0; /*0x5fd269*/
                *(float *)&v144 = 1.0; /*0x5fd272*/
                if ( this == (Actor *)reference ) /*0x5fd276*/
                {
                  unk640 = reference->unk640; /*0x5fd283*/
                  originX_4 = unk640 * *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xEC]); /*0x5fd297*/
                  v157 = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xEA]) + originX_4; /*0x5fd2a9*/
                  v8 = Float_Min(1.0, v157);    // Clamp native player attackStrength to min(1.0, timer*multiplier+base) using Float_Min; NPC remains 1.0. The value is passed to ArrowProjectile_ConstructFromShot. External bridge contrast: supplying a hardcoded 1.0 forces full native strength and bypasses player draw-time scaling. /*0x5fd2ba*/
                  *(float *)&v144 = v8; /*0x5fd2bf*/
                }
                v51 = this->members.super.process->GetEquippedAmmoData(this->members.super.process, 1); /*0x5fd2d8*/
                *(float *)&v52 = COERCE_FLOAT((int)this->members.super.process->GetEquippedWeaponData( /*0x5fd2e4*/
                                                     this->members.super.process,
                                                     1));
                v53 = v52; /*0x5fd2ea*/
                v152 = *(float *)&v52; /*0x5fd2ec*/
                if ( v51 )                      // Missing equipped AMMO EntryData: skip projectile construction/insertion and the entire native post-shot side-effect tail, then still proceed to the requested action 5->3 boundary. /*0x5fd2f0*/
                {                               // Quest-item AMMO gate: skip constructor, manager insertion, ammo virtual, fatigue, INVI purge, and condition damage; still fall through to the action 5->3 request.
                  if ( *(float *)&v52 != 0.0 /*0x5fd306*/
                    && !((unsigned __int8 (__thiscall *)(TESForm *))v51->type->vtbl->Unk_1E)(v51->type) )
                  {
                    v54 = v51->type; /*0x5fd310*/
                    v148 = 0; /*0x5fd315*/
                    if ( v54 ) /*0x5fd319*/
                    {
                      if ( v54->member.type == kFormType_Ammo ) /*0x5fd31f*/
                        v148 = v51->type; /*0x5fd321*/
                    }
                    v55 = v53->type; /*0x5fd325*/
                    v158 = 0.0; /*0x5fd32a*/
                    if ( v55 ) /*0x5fd32e*/
                    {
                      if ( v55->member.type == kFormType_Weapon ) /*0x5fd334*/
                        v158 = *(float *)&v53->type; /*0x5fd336*/
                    }
                    if ( this != (Actor *)reference ) /*0x5fd340*/
                    {
                      v56 = this->vtbl->GetCombatController(this); /*0x5fd350*/
                      v57 = v56; /*0x5fd352*/
                      if ( v56 ) /*0x5fd356*/
                        CurrentTarget = (_DWORD *)CombatController_GetCurrentTarget((int)v56); /*0x5fd35f*/
                      else
                        CurrentTarget = 0; /*0x5fd363*/
                      if ( v148 ) /*0x5fd36b*/
                        v59 = *(float *)&v148[5].member.type; /*0x5fd36d*/
                      else
                        v59 = 1.0; /*0x5fd372*/
                      v149 = v59; /*0x5fd379*/
                      *(float *)&originX_4 = v149 /*0x5fd389*/
                                           * *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xDA]);
                      v8 = Actor_CalculateArrowGravity((MobileObject *)this); /*0x5fd38d*/
                      if ( CurrentTarget ) /*0x5fd39b*/
                      {
                        *((float *)&attackStrength + 1) = v8; /*0x5fd3b3*/
                        *(float *)&attackStrength = *(float *)&originX_4; /*0x5fd3bb*/
                        v150 = v8; /*0x5fd395*/
                        Combat_PredictAimPoint_Setup( /*0x5fd3d8*/
                          (int)&originX_4,
                          a2,
                          y,
                          v165,
                          CurrentTarget,
                          attackStrength,
                          *((float *)v57 + 0x60),
                          v132,
                          v133,
                          *(float *)&v134,
                          *(float *)&v135,
                          (int)v136,
                          0,
                          0xFFFFFFFF,
                          v139,
                          SLODWORD(v140),
                          0,
                          v144,
                          0.0,
                          v150,
                          v151,
                          v152,
                          pitchX,
                          yawZ,
                          v158,
                          *(float *)&originX,
                          *(float *)&originX_4,
                          *((float *)&originX_4 + 1),
                          v162);
                        pitchX = *(float *)&originX_4; /*0x5fd3e1*/
                        v8 = v162; /*0x5fd3e8*/
                        yawZ = v162; /*0x5fd3ec*/
                      }
                      v53 = (EntryData *)LODWORD(v152); /*0x5fd3f0*/
                    }
                    if ( Actor_IsSwimming(this) ) /*0x5fd3f6*/
                    {
                      v8 = *(float *)&v144 * dbl_A2FC80; /*0x5fd403*/
                      *(float *)&v144 = v8; /*0x5fd409*/
                    }
                    if ( this != (Actor *)reference || !reference->unk5C0 )// When PlayerCharacter+0x5C0 is nonzero, skip constructor/insertion and all post-shot side effects, but still request action 5->3. /*0x5fd416*/
                    {
                      v60 = (char *)FormHeapAlloc(0x9Cu); /*0x5fd428*/
                      LODWORD(originX_4) = v60; /*0x5fd430*/
                      v166 = 1; /*0x5fd436*/
                      if ( v60 )                // Outer 0x9C ArrowProjectile allocation failed. No constructor or manager insertion occurs, but control still joins the native post-shot tail, so ammo/fatigue/INVI/condition/action side effects can still run. /*0x5fd43e*/
                        v61 = ArrowProjectile_ConstructFromShot( /*0x5fd47c*/
                                (ArrowProjectile *)v60,
                                this,
                                *(float *)&a2,
                                y,
                                v165,
                                yawZ,
                                pitchX,
                                *(float *)&v144,
                                v51,
                                v53);           // Construct an independent ArrowProjectile from equipped AMMO and WEAP data after held-arrow visual removal. Native ArrowProjectile_ConstructFromShot returns placement this on normal completion and has no recoverable null-return branch; the caller's null path meaningfully covers outer allocation failure or a replacement hook.
                      else
                        v61 = 0; /*0x5fd483*/
                      v166 = 0xFFFFFFFF; /*0x5fd487*/
                      if ( v61 ) /*0x5fd48f*/
                        ActorProcessManager_AddMobileObject( /*0x5fd49f*/
                          (ActorProcessManager *)&qword_B3BB2C[0x75],
                          &v61->super,
                          0,
                          0,
                          0,
                          0);
                      this->vtbl->Unk_BA(this); /*0x5fd4ae*/
                      if ( Actor_GetSkillMasteryLevel(this, kSkillAV_Marksman) == kSkillMastery_Novice ) /*0x5fd4b4*/
                      {
                        durationd = -*GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xD2]); /*0x5fd4ce*/
                        Actor_ApplyNegativeFatigueDeltaClamped(this, durationd); /*0x5fd4d1*/
                      }
                      if ( this->vtbl->GetActorValue(this, kActorVal_Invisibility) > 0 ) /*0x5fd4e6*/
                        MagicTarget_RemoveActiveEffectsByCode(&this->members.magicTarget, 0x49564E49u, 0); /*0x5fd4f2*/
                      LODWORD(originX_4) = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(LODWORD(v158) + 0x88) /*0x5fd50f*/
                                                                                   + 0x10))(LODWORD(v158) + 0x88);
                      duratione = (float)SLODWORD(originX_4); /*0x5fd518*/
                      v62 = Calc_WeaponConditionDamagePerShot(duratione); /*0x5fd51b*/
                      vtbl = this->vtbl; /*0x5fd520*/
                      *(float *)&originX_4 = v62; /*0x5fd522*/
                      v8 = *(float *)&originX_4; /*0x5fd526*/
                      ((void (__thiscall *)(Actor *, EntryData *, char *, _DWORD))vtbl->DamageEquippedItem)( /*0x5fd53c*/
                        this,
                        v53,
                        (char *)LODWORD(originX_4),
                        0);
                    }
                  }
                }
                v64 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);// Action-only join. Preconditions that reject the shot arrive here without construction, insertion, ammo consumption, fatigue, INVI purge, or weapon-condition damage; native code still requests action 5->3 if a process exists. /*0x5fd549*/
                Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_AttackFollowThrough, v64); /*0x5fd550*/
                *(float *)&v9 = v151; /*0x5fd555*/
                break; /*0x5fd559*/
              case 9: /*0x5fcbfe*/
                v8 = sub_5E3590(this); /*0x5fd8a5*/
                *(float *)&v139 = v8; /*0x5fd8aa*/
                break; /*0x5fd8ae*/
              case 0xA: /*0x5fcbfe*/
                if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) ) /*0x5fd79a*/
                  break; /*0x5fd79e*/
                StateId = hkCharacterContext_GetStateId((_DWORD *)originX + 0x78); /*0x5fd7aa*/
                if ( StateId ) /*0x5fd7b2*/
                {
                  v81 = StateId - 1; /*0x5fd7b8*/
                  if ( !v81 ) /*0x5fd7bb*/
                    goto LABEL_173; /*0x5fd7bb*/
                  if ( v81 != 1 || *(float *)&v9 == 0.0 ) /*0x5fd7c4*/
                    break; /*0x5fd7c4*/
                  v82 = TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v9 + 0x1A)) == 0x29; /*0x5fd7ce*/
                }
                else
                {
                  if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) /*0x5fd885*/
                    || (this->members.super.process->GetMovementFlags(this->members.super.process) & 0xF) == 0 )
                  {
                    break; /*0x5fd885*/
                  }
                  if ( *(float *)&v9 == 0.0 ) /*0x5fd88d*/
                    goto LABEL_173; /*0x5fd88d*/
                  v82 = TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v9 + 0x1A)) == 0x2A; /*0x5fd89b*/
                }
                if ( v82 ) /*0x5fd7d1*/
                  goto LABEL_173; /*0x5fd7d1*/
                break; /*0x5fd7d1*/
              default:
                break;
            }
          }
          else if ( Actor_GetCurrentAction(this) == 6 /*0x5fd8dc*/
                 && (v88 = ActorAnimData_GetAnimGroupFromField8Value(v136, 1), AnimKey_GetGroupID(v88) == 0x1B) )// Post-sequence guard tail shared by missing/finished-sequence checks. The external throwing bridge resumes here after its handled class-4 projectile transaction, bypassing native melee handling—but it also bypasses the native bow post-shot tail at 0x5FD4AE..0x5FD550. Unless recreated, that custom path has no post-shot AMMO virtual, novice Marksman fatigue burn, Release-time INVI recheck, weapon condition damage, or native action 5->3 transition.
          {
            action = 6; /*0x5fd8e6*/
            durationf = ActorAnimData_GetNormalizedSequenceSlot(v136, 1u); /*0x5fd8f3*/
            Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_Block, durationf); /*0x5fd8f6*/
          }
          else
          {
LABEL_173:
            Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_None, 0); /*0x5fd7d3*/
          }
        }
        v83 = action; /*0x5fd7de*/
        v84 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_85)(this); /*0x5fd7ee*/
        if ( v84 ) /*0x5fd7f2*/
        {
          if ( action != 0xFFFFFFFF ) /*0x5fd7fb*/
            goto LABEL_229; /*0x5fd7fb*/
          v85 = Actor_GetCurrentAction(this); /*0x5fd803*/
          if ( v85 < 2 || v85 > 5 ) /*0x5fd810*/
          {
            do /*0x5fd84d*/
            {
              if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_87)(this) != 0x48 ) /*0x5fd825*/
              {
                v8 = 0.0; /*0x5fd827*/
                v86 = this->vtbl; /*0x5fd829*/
                v87 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD))this->vtbl->Unk_87)(this, 0, 0.0); /*0x5fd839*/
                ((void (__thiscall *)(Actor *, int))v86->ModExperience)(this, v87); /*0x5fd844*/
                v83 = 0xFFFFFFFF; /*0x5fd846*/
              }
              --v84; /*0x5fd84a*/
            }
            while ( v84 ); /*0x5fd84d*/
            ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_84)(this, 0); /*0x5fd85b*/
          }
        }
        else if ( action != 0xFFFFFFFF ) /*0x5fd8fe*/
        {
          goto LABEL_229; /*0x5fd8fe*/
        }
        if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None ) /*0x5fd90e*/
        {
          v89 = Actor_GetCurrentAction(this); /*0x5fd91a*/
          if ( v89 == 0xFFFFFFFF || (unsigned int)(v89 - 2) <= 3 ) /*0x5fd92a*/
          {
            v90 = hkCharacterContext_GetStateId((_DWORD *)originX + 0x78); /*0x5fd93a*/
            if ( v90 ) /*0x5fd942*/
            {
              v91 = v90 - 1; /*0x5fd944*/
              if ( !v91 /*0x5fd998*/
                || v91 == 1
                && ((*(float *)&originX_4 = *((float *)originX + 0xC9),
                     SafeFloatPointer = GameSetting_GetSafeFloatPointer((float *)&dword_B148EC),
                     *SafeFloatPointer < (double)*(float *)&originX_4)
                 && !this->vtbl->GetMountedHorse(this)
                 || *(float *)&v9 != 0.0 && TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v9 + 0x1A)) == 0x29) )
              {
                v137 = 0x29; /*0x5fd99e*/
              }
            }
            else if ( *(float *)&v9 != 0.0 /*0x5fd9c4*/
                   && (TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v9 + 0x1A)) == 0x29
                    || TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v9 + 0x1A)) == 0x28) )
            {
              if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) /*0x5fd9e5*/
                || (this->members.super.process->GetMovementFlags(this->members.super.process) & 0xF) == 0 )
              {
                if ( Actor_GetCurrentAction(this) == 0xFFFFFFFF ) /*0x5fd9f1*/
                {
                  v83 = 0xA; /*0x5fd9f3*/
                  action = 0xA; /*0x5fd9f8*/
                }
                v137 = 0x2A; /*0x5fda00*/
                v136->unkC4 = 1; /*0x5fda08*/
              }
              sub_6B1900(v4, v8, (TESObjectREFR *)this, *((_DWORD *)originX + 0x85)); /*0x5fda17*/
            }
          }
          if ( this->members.super.process->GetCombatMode(this->members.super.process) ) /*0x5fda2a*/
          {
            if ( !this->members.super.process->GetWeaponOut(this->members.super.process) /*0x5fda4f*/
              && Actor_GetCurrentAction(this) == 0xFFFFFFFF
              && IsWeaponReady(this) )
            {
              if ( !ActorAnimData_IsIdleInactive(v136) ) /*0x5fda5e*/
                ActorAnimData_CleanupOrPromoteQueuedIdles(v136, 1, 0); /*0x5fda6d*/
              v83 = 0; /*0x5fda7d*/
              v137 = 0x11; /*0x5fda81*/
              action = 0; /*0x5fda89*/
              if ( this->members.super.process->GetEquippedLightData(this->members.super.process, 1) ) /*0x5fda8d*/
              {
                if ( this->members.super.process->Unk_4D(this->members.super.process) ) /*0x5fda9e*/
                  UnequipLight((TESObjectREFR *)this); /*0x5fdaa6*/
              }
            }
          }
        }
        if ( !this->members.super.process->GetCombatMode(this->members.super.process) ) /*0x5fdab6*/
        {
          if ( this->members.super.process->GetWeaponOut(this->members.super.process) ) /*0x5fdac7*/
          {
            if ( Actor_GetCurrentAction(this) == 0xFFFFFFFF /*0x5fdb05*/
              && !this->vtbl->super.super.HasFatigue((TESObjectREFR *)this)
              && !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
              && !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this) )
            {
              DeadState = this->members.DeadState; /*0x5fdb0b*/
              if ( DeadState != 5 && DeadState != 3 ) /*0x5fdb19*/
              {
                v83 = 1; /*0x5fdb1b*/
                v137 = 0x12; /*0x5fdb20*/
                action = 1; /*0x5fdb28*/
              }
            }
          }
        }
LABEL_229:
        if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) && this->vtbl->IsInCombat(this, 1) /*0x5fdb71*/
          || ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this)
          && this->members.super.process->GetWeaponOut(this->members.super.process)
          || v83 <= 1 )
        {
          if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1) ) /*0x5fdb85*/
            v145 = *(_DWORD *)(4 /*0x5fdbab*/
                             * SLOBYTE(this->members.super.process->GetEquippedWeaponData(
                                         this->members.super.process,
                                         1)->type[6].vtbl)
                             + 0xB086B8);
          else
            v145 = 1; /*0x5fdbb1*/
        }
        if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) == 6 /*0x5fdbdc*/
          && (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x200) != 0 )
        {
          ((void (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)( /*0x5fdbf0*/
            this->members.super.process,
            0x200,
            0);
          ((void (__thiscall *)(LowProcess *, int, int))this->members.super.process->Unk_B0)( /*0x5fdc04*/
            this->members.super.process,
            0x100,
            1);
        }
        v94 = this->members.super.process->GetMovementFlags(this->members.super.process); /*0x5fdc13*/
        if ( (v94 & 0x800) != 0 ) /*0x5fdc1c*/
        {
          v141 = 2; /*0x5fdc1e*/
        }
        else if ( (v94 & 0x2000) != 0 ) /*0x5fdc2e*/
        {
          v141 = 3; /*0x5fdc30*/
        }
        else if ( (v94 & 0x400) != 0 ) /*0x5fdc40*/
        {
          v141 = 1; /*0x5fdc42*/
        }
        v95 = v137; /*0x5fdc4a*/
        if ( v137 ) /*0x5fdc50*/
          goto LABEL_284; /*0x5fdc50*/
        if ( !this->vtbl->GetMountedHorse(this) ) /*0x5fdc60*/
        {
          switch ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) ) /*0x5fdc81*/
          {
            case kSitSleep_SittingIn: /*0x5fdc81*/
            case kSitSleep_SleepingIn: /*0x5fdc81*/
              if ( ActorAnimData_IsCurrentIdleActive(v136) || ActorAnimData_IsIdleInactive(v136) ) /*0x5fdc99*/
                goto LABEL_251; /*0x5fdca0*/
              break; /*0x5fdca0*/
            case kSitSleep_Sitting: /*0x5fdc81*/
            case kSitSleep_SittingOut: /*0x5fdc81*/
            case kSitSleep_Sleeping: /*0x5fdc81*/
            case kSitSleep_SleepingOut: /*0x5fdc81*/
LABEL_251:
              v95 = 1; /*0x5fdca2*/
              v137 = 1; /*0x5fdca7*/
              break; /*0x5fdca7*/
            default:
              break;
          }
          if ( this == (Actor *)reference ) /*0x5fdcb1*/
          {
            Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5fdcbc*/
            if ( sub_57CFB0(Singleton, 0x40C) ) /*0x5fdcc6*/
            {
              v95 = 1; /*0x5fdccf*/
              v137 = 1; /*0x5fdcd4*/
            }
          }
        }
        v140 = arg0; /*0x5fdcdf*/
        if ( (v94 & 0xF) == 0 ) /*0x5fdce3*/
        {
          if ( (v94 & 0x10) != 0 ) /*0x5fddcc*/
          {
            v95 = 0xF; /*0x5fddce*/
          }
          else
          {
            if ( (v94 & 0x20) == 0 ) /*0x5fddd8*/
              goto LABEL_284; /*0x5fddd8*/
            v95 = 0x10; /*0x5fddda*/
          }
          v137 = v95; /*0x5fdddf*/
          goto LABEL_284; /*0x5fdddf*/
        }
        if ( (v94 & 0x200) == 0 ) /*0x5fdcef*/
        {
          if ( (v94 & 0xFF00) == 0 ) /*0x5fdd57*/
            goto LABEL_284; /*0x5fdd57*/
          if ( (v94 & 1) != 0 ) /*0x5fdd60*/
          {
            v95 = 3; /*0x5fdd62*/
            v137 = 3; /*0x5fdd69*/
            *(float *)&v139 = sub_5E3590(this); /*0x5fdd72*/
            goto LABEL_284; /*0x5fdd76*/
          }
          if ( (v94 & 2) != 0 ) /*0x5fdd7b*/
          {
            v95 = 4; /*0x5fdd7d*/
            v137 = 4; /*0x5fdd84*/
            *(float *)&v139 = sub_5E3590(this); /*0x5fdd8d*/
            goto LABEL_284; /*0x5fdd91*/
          }
          if ( (v94 & 4) != 0 ) /*0x5fdd96*/
          {
            v95 = 5; /*0x5fdd98*/
            v137 = 5; /*0x5fdd9f*/
            *(float *)&v139 = sub_5E3590(this); /*0x5fdda8*/
            goto LABEL_284; /*0x5fddac*/
          }
          if ( (v94 & 8) != 0 ) /*0x5fddb1*/
          {
            v95 = 6; /*0x5fddb3*/
            v137 = 6; /*0x5fddb8*/
          }
          goto LABEL_267; /*0x5fddb8*/
        }
        if ( (v94 & 1) != 0 ) /*0x5fdcf4*/
        {
          v95 = 7; /*0x5fdcf6*/
        }
        else if ( (v94 & 2) != 0 ) /*0x5fdd00*/
        {
          v95 = 8; /*0x5fdd02*/
        }
        else if ( (v94 & 4) != 0 ) /*0x5fdd0c*/
        {
          v95 = 9; /*0x5fdd0e*/
        }
        else
        {
          if ( (v94 & 8) == 0 ) /*0x5fdd18*/
            goto LABEL_266; /*0x5fdd18*/
          v95 = 0xA; /*0x5fdd1a*/
        }
        v137 = v95; /*0x5fdd1f*/
LABEL_266:
        if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) ) /*0x5fdd2d*/
        {
          *(float *)&v139 = Actor_CalcFastTravelSpeed((TESObjectREFR *)this); /*0x5fdd48*/
          goto LABEL_284; /*0x5fdd4c*/
        }
LABEL_267:
        *(float *)&v139 = sub_5E3590(this); /*0x5fdd35*/
LABEL_284:
        if ( v83 == 0xFFFFFFFF || Actor_GetCurrentAction(this) == 0xFFFFFFFF ) /*0x5fddf2*/
        {
          if ( *(float *)&v139 < 1.0 && (unsigned int)(v95 - 3) <= 0xD && v95 != 0xF && v95 != 0x10 ) /*0x5fde15*/
          {
            if ( this == (Actor *)reference ) /*0x5fde1f*/
              reference->vtbl->super.Unk_97((Actor *)reference); /*0x5fde29*/
            v137 = 0; /*0x5fde2b*/
          }
          v97 = AnimKey_Make(v141, v145, v137); /*0x5fde44*/
          v98 = v136; /*0x5fde49*/
          v99 = ActorAnimData_ResolveAnimKeyFallback(v136, v97, 0); /*0x5fde53*/
          v100 = v99; /*0x5fde58*/
          GroupID = AnimKey_GetGroupID(v99); /*0x5fde5c*/
          v102 = GroupID; /*0x5fde69*/
          if ( action != 0xFFFFFFFF && v137 != GroupID ) /*0x5fde71*/
            action = 0xFFFFFFFF; /*0x5fde73*/
          if ( Actor_GetCurrentAction(this) != 0xFFFFFFFF /*0x5fdec7*/
            && this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process)
            && (arg0a = ActorAnimData_GetNormalizedSequenceSlot(v136, *(_DWORD *)(0x24 * v102 + 0xB102E8)),
                arg0a == this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process)) )
          {
            if ( Actor_GetCurrentAction(this) == 0xC ) /*0x5fded7*/
            {
              v103 = ActorAnimData_GetAnimGroupFromField8Value(v136, 0); /*0x5fdee8*/
              if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) ) /*0x5fdef5*/
              {
                switch ( AnimKey_GetGroupID(v103) ) /*0x5fdf13*/
                {
                  case 4: /*0x5fdf13*/
                  case 5: /*0x5fdf13*/
                  case 6: /*0x5fdf13*/
                  case 0xB: /*0x5fdf13*/
                  case 0xC: /*0x5fdf13*/
                  case 0xD: /*0x5fdf13*/
                  case 0xE: /*0x5fdf13*/
                    goto LABEL_303;
                  case 8: /*0x5fdf13*/
                  case 9: /*0x5fdf13*/
                  case 0xA: /*0x5fdf13*/
                    v103 = v103 & 0xFF00 | 7; /*0x5fdf20*/
                    break; /*0x5fdf23*/
                  default:
                    break;
                }
              }
              else
              {
LABEL_303:
                v103 = v103 & 0xFF00 | 3; /*0x5fdf25*/
              }
              switch ( AnimKey_GetGroupID(v103) ) /*0x5fdf46*/
              {
                case 3: /*0x5fdf46*/
                case 4: /*0x5fdf46*/
                case 5: /*0x5fdf46*/
                case 6: /*0x5fdf46*/
                case 0xB: /*0x5fdf46*/
                case 0xC: /*0x5fdf46*/
                case 0xD: /*0x5fdf46*/
                case 0xE: /*0x5fdf46*/
                  v104 = sub_5E3590(this); /*0x5fdf9d*/
                  goto LABEL_306; /*0x5fdfa2*/
                case 7: /*0x5fdf46*/
                case 8: /*0x5fdf46*/
                case 9: /*0x5fdf46*/
                case 0xA: /*0x5fdf46*/
                  v104 = Actor_CalcFastTravelSpeed((TESObjectREFR *)this); /*0x5fdf4f*/
LABEL_306:
                  *(float *)&v139 = v104; /*0x5fdf54*/
                  goto Actor_ProcessAction___def_5FDF46; /*0x5fdf54*/
                case 0xF: /*0x5fdf46*/
                case 0x10: /*0x5fdf46*/
                  v136->unkBC = arg1; /*0x5fdfa8*/
                  return; /*0x5fdfae*/
                default:
Actor_ProcessAction___def_5FDF46:
                  sub_472330(v136, v103); /*0x5fdf58*/
                  if ( v105 ) /*0x5fdf63*/
                  {
                    originX_4 = *(float *)&v139; /*0x5fdf6c*/
                    sub_472330(v136, v103); /*0x5fdf70*/
                    v140 = originX_4 / (double)v106 * v140; /*0x5fdf88*/
                  }
                  v136->unkBC = v140; /*0x5fdf90*/
                  break; /*0x5fdf96*/
              }
            }
          }
          else
          {
            if ( (_WORD)v100 != 0xFF ) /*0x5fdfb8*/
            {
              if ( v102 == 0xF || v102 == 0x10 ) /*0x5fdfca*/
              {
                v136->unkBC = arg1; /*0x5fe0b2*/
              }
              else if ( v102 < 3 || v102 > 0x10 ) /*0x5fdfdc*/
              {
                if ( v102 >= 0x11 && v102 <= 0x1A ) /*0x5fe07e*/
                {
                  v110 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1); /*0x5fe08d*/
                  if ( v110 ) /*0x5fe091*/
                    v136->unkC0 = *(float *)&v110->type[6].member.type; /*0x5fe09c*/
                  else
                    v136->unkC0 = 1.0; /*0x5fe0a6*/
                }
              }
              else
              {
                v107 = (unsigned __int16)v100; /*0x5fdfec*/
                if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) ) /*0x5fdfef*/
                {
                  switch ( AnimKey_GetGroupID(v100) ) /*0x5fe00d*/
                  {
                    case 4: /*0x5fe00d*/
                    case 5: /*0x5fe00d*/
                    case 6: /*0x5fe00d*/
                    case 0xB: /*0x5fe00d*/
                    case 0xC: /*0x5fe00d*/
                    case 0xD: /*0x5fe00d*/
                    case 0xE: /*0x5fe00d*/
                      goto LABEL_320;
                    case 8: /*0x5fe00d*/
                    case 9: /*0x5fe00d*/
                    case 0xA: /*0x5fe00d*/
                      v107 = v100 & 0xFF07 | 7; /*0x5fe01c*/
                      break; /*0x5fe01f*/
                    default:
                      break;
                  }
                }
                else
                {
LABEL_320:
                  v107 = v100 & 0xFF03 | 3; /*0x5fe021*/
                }
                sub_472330(v136, v107); /*0x5fe02c*/
                if ( v108 ) /*0x5fe039*/
                {
                  originX_4 = *(float *)&v139; /*0x5fe044*/
                  sub_472330(v136, v107); /*0x5fe048*/
                  v140 = originX_4 / (double)v109 * v140; /*0x5fe060*/
                }
                v136->unkBC = v140; /*0x5fe06c*/
                v98 = v136; /*0x5fe072*/
              }
            }
            if ( ActorAnimData_GetAnimGroupFromField8Value(v98, *(_DWORD *)(0x24 * v102 + 0xB102E8)) != (_WORD)v100 ) /*0x5fe0cd*/
            {
              if ( ActorAnimData_HasAnimKey(v98, v100) ) /*0x5fe0d6*/
              {
                ActorAnimData_PlayAnimGroup(v98, v100, 1u, 0xFFFFFFFF); /*0x5fe0ea*/
                if ( action != 0xFFFFFFFF && !TESAnimGroup_IsAnimGroupIdle(v100) ) /*0x5fe0f7*/
                {
                  NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot( /*0x5fe110*/
                                             v98,
                                             *(_DWORD *)(0x24 * v102 + 0xB102E8));
                  Actor_SetCurrentActionWithBowVisualCleanup(this, (ActorCurrentAction)action, NormalizedSequenceSlot); /*0x5fe11d*/
                }
                ((void (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, v100, 1); /*0x5fe12f*/
                if ( v102 == 0x28 ) /*0x5fe134*/
                {
                  v112 = AnimKey_Make(v141, v145, 0x29); /*0x5fe144*/
                  v113 = ActorAnimData_ResolveAnimKeyFallback(v136, v112, 0); /*0x5fe15a*/
                  ActorAnimData_PlayAnimGroup(v136, v113, 0, 0xFFFFFFFF); /*0x5fe162*/
                  ((void (__thiscall *)(Actor *, unsigned int, _DWORD))this->vtbl->Unk_E9)(this, v113, 0); /*0x5fe174*/
                  v98 = v136; /*0x5fe176*/
                }
              }
            }
            v114 = ActorAnimData_GetNormalizedSequenceSlot(v98, 2u); /*0x5fe184*/
            if ( !this->members.super.process->GetEquippedLightData(this->members.super.process, 1) /*0x5fe1a4*/
              || this == (Actor *)reference && sub_5E6C10((MobileObject *)reference) )
            {
              if ( !this->members.super.process->GetEquippedLightData(this->members.super.process, 1) ) /*0x5fe22c*/
              {
                if ( v114 ) /*0x5fe234*/
                {
                  if ( TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v114 + 0x1A)) == 0x21 ) /*0x5fe241*/
                  {
                    ActorAnimData_ClearSlot(v98, 2, 0.0); /*0x5fe24d*/
                    if ( this == (Actor *)reference ) /*0x5fe25a*/
                    {
                      v119 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5fe266*/
                      ActorAnimData_ClearSlot(v119, 2, 0.0); /*0x5fe26d*/
                    }
                  }
                }
              }
            }
            else
            {
              v115 = AnimKey_Make(v141, v145, 0x21); /*0x5fe1bb*/
              v116 = ActorAnimData_ResolveAnimKeyFallback(v136, v115, 0); /*0x5fe1ca*/
              v117 = v116; /*0x5fe1cf*/
              v118 = AnimKey_GetGroupID(v116); /*0x5fe1d3*/
              if ( ActorAnimData_GetAnimGroupFromField8Value(v136, *(_DWORD *)(0x24 * v118 + 0xB102E8)) != (_WORD)v117 ) /*0x5fe1f0*/
              {
                if ( ActorAnimData_HasAnimKey(v136, v117) ) /*0x5fe1f9*/
                {
                  ActorAnimData_PlayAnimGroup(v136, v117, 1u, 0xFFFFFFFF); /*0x5fe209*/
                  ((void (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, v117, 1); /*0x5fe21b*/
                }
              }
            }
            if ( ActorAnimData_GetNormalizedSequenceSlot(v136, 3u) ) /*0x5fe27a*/
            {
              v120 = ActorAnimData_GetAnimGroupFromField8Value(v136, 3); /*0x5fe287*/
              if ( AnimGroup_UsesAttackOrCastNoteTemplate(v120) ) /*0x5fe28d*/
              {
                p_SetUnk20CInner = &this->members.super.process->SetUnk20CInner; /*0x5fe2a5*/
                WeaponTipLocalPointForHit = Actor_GetWeaponTipLocalPointForHit(this, (float *)&a2); /*0x5fe2ab*/
                ((void (__thiscall *)(LowProcess *, _DWORD, _DWORD, _DWORD))*p_SetUnk20CInner)( /*0x5fe2ca*/
                  this->members.super.process,
                  *(_DWORD *)WeaponTipLocalPointForHit,
                  *((_DWORD *)WeaponTipLocalPointForHit + 1),
                  *((_DWORD *)WeaponTipLocalPointForHit + 2));
              }
            }
          }
        }
      }
    }
  }
}
