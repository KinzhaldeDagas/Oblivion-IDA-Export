void __userpurge Actor_ProcessAction(
        Actor *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double AnimData@<st0>,
        float a5,
        float a6)
{
  ActorAnimData *v7; // edi
  bhkCharacterProxy *CharProxy; // eax
  double v9; // st7
  PowerListEntry *v10; // ebp
  int *v11; // edi
  BSAnimGroupSequence *v12; // eax
  int v13; // eax
  unsigned __int8 AnimGroupFromField8Value; // al
  int v15; // eax
  int v16; // eax
  TESObjectREFR *ActorWithinReach; // eax
  Actor *v18; // edi
  EntryData *v19; // eax
  unsigned __int8 v20; // al
  LowProcess *process; // ecx
  TESPackage *editorPackage; // eax
  EntryData *v23; // eax
  LowProcess *v24; // ecx
  TESPackage *v25; // eax
  unsigned __int8 v26; // al
  float *v27; // eax
  char IsUnderwater; // bl
  MagicItem *v29; // eax
  Actor *v30; // ecx
  UInt32 v31; // ebx
  UInt32 v32; // edi
  UInt32 v33; // eax
  UInt32 v34; // ebp
  void *v35; // eax
  int v36; // ebx
  int v37; // eax
  EntryData *v38; // eax
  int v39; // eax
  int v40; // edi
  BSAnimGroupSequence *v41; // eax
  float v42; // eax
  float v43; // edx
  Actor *v44; // ecx
  UInt32 v45; // ebx
  int v46; // ebp
  _DWORD *v47; // edi
  bool v48; // bl
  int v49; // ecx
  int v50; // edx
  _DWORD *ShadowSceneNode; // eax
  EntryData *v52; // ebp
  EntryData *v53; // eax
  int v54; // ebx
  int v55; // edi
  TESForm *v56; // eax
  int v57; // eax
  CombatController *v58; // eax
  _DWORD *v59; // edi
  double v60; // st7
  char *v61; // eax
  ArrowProjectile *v62; // eax
  double v63; // st7
  ActorVtbl *vtbl; // edx
  BSAnimGroupSequence *v65; // eax
  int v66; // ebx
  void *v67; // ebx
  int v68; // ebp
  UInt8 (__thiscall **p_SetWeaponOut)(BaseProcess *__hidden, UInt8); // edi
  int v70; // edx
  void (__thiscall **p_Unk_53)(BaseProcess *__hidden, UInt32, UInt32, UInt32, UInt32); // edi
  int CurrentAction; // eax
  int v73; // eax
  int v74; // eax
  TESForm *type; // edi
  int FormEnchantment; // eax
  ExtraDataList ***v77; // eax
  BSExtraDataVtbl *v78; // eax
  int *v79; // eax
  unsigned int v80; // edi
  int v81; // eax
  int v82; // eax
  bool v83; // zf
  unsigned int v84; // edi
  int v85; // ebx
  int v86; // eax
  ActorVtbl *v87; // edi
  int v88; // eax
  unsigned __int8 v89; // al
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int *SafeFloatPointer; // eax
  UInt32 DeadState; // eax
  __int16 v95; // bx
  int v96; // ebp
  InterfaceManager *Singleton; // eax
  unsigned int v98; // eax
  ActorAnimData *v99; // edi
  unsigned __int16 v100; // ax
  int v101; // ebp
  int v102; // eax
  int v103; // ebx
  int v104; // edi
  double v105; // st7
  __int16 v106; // ax
  __int16 v107; // ax
  int v108; // edi
  __int16 v109; // ax
  __int16 v110; // ax
  EntryData *v111; // eax
  PowerListEntry *v112; // eax
  unsigned int v113; // eax
  _DWORD *v114; // edi
  PowerListEntry *v115; // ebx
  unsigned int v116; // eax
  unsigned __int16 v117; // ax
  int v118; // edi
  int v119; // eax
  _DWORD *v120; // eax
  __int16 v121; // ax
  void (__thiscall **p_SetUnk20CInner)(BaseProcess *__hidden); // edi
  float *v123; // eax
  double v124; // [esp+34h] [ebp-80h]
  TESObjectCELL *ParentCell; // [esp+38h] [ebp-7Ch]
  BSAnimGroupSequence *duration; // [esp+3Ch] [ebp-78h]
  char durationa; // [esp+3Ch] [ebp-78h]
  BSAnimGroupSequence *durationb; // [esp+3Ch] [ebp-78h]
  float durationc; // [esp+3Ch] [ebp-78h]
  float durationd; // [esp+3Ch] [ebp-78h]
  float duratione; // [esp+3Ch] [ebp-78h]
  PowerListEntry *durationf; // [esp+3Ch] [ebp-78h]
  int v133; // [esp+40h] [ebp-74h]
  double v134; // [esp+44h] [ebp-70h]
  float v135; // [esp+4Ch] [ebp-68h]
  int v136; // [esp+50h] [ebp-64h]
  ActorAnimData *v137; // [esp+54h] [ebp-60h]
  int v138; // [esp+58h] [ebp-5Ch]
  int v139; // [esp+5Ch] [ebp-58h]
  int v140; // [esp+60h] [ebp-54h]
  float v141; // [esp+64h] [ebp-50h]
  int v142; // [esp+68h] [ebp-4Ch]
  int v143; // [esp+6Ch] [ebp-48h]
  int v144; // [esp+6Ch] [ebp-48h]
  int v145; // [esp+6Ch] [ebp-48h]
  int v146; // [esp+70h] [ebp-44h]
  int *v147; // [esp+74h] [ebp-40h]
  int *v148; // [esp+74h] [ebp-40h]
  TESForm *v149; // [esp+74h] [ebp-40h]
  float v150; // [esp+74h] [ebp-40h]
  float v151; // [esp+74h] [ebp-40h]
  float v152; // [esp+78h] [ebp-3Ch]
  float v153; // [esp+7Ch] [ebp-38h]
  float v154; // [esp+80h] [ebp-34h]
  float v155; // [esp+84h] [ebp-30h]
  float v156; // [esp+88h] [ebp-2Ch]
  float unk640; // [esp+88h] [ebp-2Ch]
  float v158; // [esp+88h] [ebp-2Ch]
  float v159; // [esp+88h] [ebp-2Ch]
  int v160; // [esp+88h] [ebp-2Ch]
  bhkCharacterProxy *v161; // [esp+8Ch] [ebp-28h]
  double v162; // [esp+90h] [ebp-24h] BYREF
  float v163; // [esp+98h] [ebp-1Ch]
  int a2; // [esp+9Ch] [ebp-18h] BYREF
  int v165; // [esp+A0h] [ebp-14h]
  int v166; // [esp+A4h] [ebp-10h]
  float v167[2]; // [esp+A8h] [ebp-Ch]
  int v168; // [esp+B0h] [ebp-4h]
  BSAnimGroupSequence *v169; // [esp+B8h] [ebp+4h]

  if ( !((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))this->vtbl->super.super.IsDead)(
          this,
          0,
          AnimData,
          a3,
          st5_0)
    && (this != (Actor *)TESDataHandler_g_PlayerRef || TESDataHandler_g_PlayerRef->isThirdPerson) )
  {
    v7 = this->vtbl->super.super.GetAnimData(this);
    v137 = v7;
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    v161 = CharProxy;
    if ( v7 )
    {
      if ( this->members.super.process && CharProxy )
      {
        if ( !this->members.super.process->GetProcessLevel(this->members.super.process) )
          sub_633460((float *)this->members.super.process);
        if ( (PlayerCharacter *)((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this) == TESDataHandler_g_PlayerRef )
        {
          a5 = flt_B14E58;
          a6 = flt_B14E5C;
        }
        v141 = 1.0;
        v9 = 0.0;
        v138 = 0;
        *(float *)&v140 = 0.0;
        v142 = 0;
        v146 = 0;
        v139 = 0xFFFFFFFF;
        v10 = sub_4706E0(v7, 0);
        v152 = *(float *)&v10;
        v11 = (int *)((int (__thiscall *)(Actor *))this->vtbl->super.super.Unk_5A)(this);
        if ( Actor_GetCurrentAction(this) != 0xFFFFFFFF )
        {
          if ( this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process)
            && *((_DWORD *)this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process) + 0x11) )
          {
            switch ( Actor_GetCurrentAction(this) )
            {
              case 0:
              case 1:
                v66 = this->members.super.process->GetWeaponOut(this->members.super.process);
                if ( v66 != (Actor_GetCurrentAction(this) == 0)
                  && ActorAnimData_GetSomethingFromField8Value(v137, 3) >= 1 )
                {
                  v67 = v137;
                  v160 = (int)v11;
                  v68 = 1;
                  if ( this == (Actor *)TESDataHandler_g_PlayerRef )
                    v68 = 2;
                  p_SetWeaponOut = &this->members.super.process->SetWeaponOut;
                  LOBYTE(v70) = Actor_GetCurrentAction(this) == 0;
                  (*p_SetWeaponOut)(this->members.super.process, v70);
                  do
                  {
                    if ( this == (Actor *)TESDataHandler_g_PlayerRef && v68 == 1 )
                    {
                      v67 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                      v160 = sub_6600D0(TESDataHandler_g_PlayerRef, 1);
                    }
                    p_Unk_53 = &this->members.super.process->Unk_53;
                    CurrentAction = Actor_GetCurrentAction(this);
                    LOBYTE(CurrentAction) = CurrentAction == 0;
                    (*p_Unk_53)(this->members.super.process, CurrentAction, v160, (UInt32)v67, (UInt32)this);
                    --v68;
                  }
                  while ( v68 );
                  ((void (__thiscall *)(LowProcess *, Actor *, int, _DWORD, _DWORD))this->members.super.process->Unk_10A)(
                    this->members.super.process,
                    this,
                    1,
                    0,
                    0);
                  if ( this->members.super.process->GetWeaponOut(this->members.super.process) )
                  {
                    if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_106)(this->members.super.process) )
                    {
                      v73 = ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_106)(this->members.super.process);
                      v74 = sub_679240((int *)&ActorProcessManager_ptr, (int)this, v73);
                      if ( v74 )
                        sub_6A0350(v74);
                      if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1) )
                      {
                        type = 0;
                        if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type )
                        {
                          if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type->member.type == kFormType_Weapon )
                            type = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type;
                        }
                        FormEnchantment = TESEnchantableForm_GetFormEnchantment(type);
                        if ( FormEnchantment && FormEnchantment != 0xFFFFFFE8
                          || (v77 = (ExtraDataList ***)this->members.super.process->GetEquippedWeaponData(
                                                         this->members.super.process,
                                                         1),
                              (v78 = sub_484DF0(v77)) != 0)
                          && v78 != (BSExtraDataVtbl *)0xFFFFFFDC )
                        {
                          switch ( LOBYTE(type[6].vtbl) )
                          {
                            case 0:
                              v79 = sub_65A970(this, "WPNBlade1HandEquipEnchanted", 0, 0x102, 1);
                              goto LABEL_163;
                            case 1:
                              v79 = sub_65A970(this, "WPNBlade2HandEquipEnchanted", 0, 0x102, 1);
                              goto LABEL_163;
                            case 2:
                              v79 = sub_65A970(this, "WPNBlunt1HandEquipEnchanted", 0, 0x102, 1);
                              goto LABEL_163;
                            case 3:
                              v79 = sub_65A970(this, "WPNBlunt2HandEquipEnchanted", 0, 0x102, 1);
LABEL_163:
                              v80 = (unsigned int)v79;
                              if ( v79 )
                              {
                                sub_6B73E0(v79);
                                FormHeapFree(v80);
                              }
                              break;
                            default:
                              break;
                          }
                        }
                      }
                    }
                  }
                  HideEquipment((TESObjectREFR *)this, st5_0, a3, 0.0, 0, 0);
                  v10 = (PowerListEntry *)LODWORD(v152);
                }
                break;
              case 2:
                v12 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);
                v13 = *(_DWORD *)(0x24 * TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v12 + 0x1A)) + 0xB102E8) - 1;
                if ( v13 )
                {
                  if ( v13 == 2 && ActorAnimData_GetSomethingFromField8Value(v137, 3) == 1 )
                  {
                    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v137, 3);
                    v15 = *(_DWORD *)(0x24 * sub_51AA00(AnimGroupFromField8Value) + 0xB102EC) - 4;
                    if ( v15 )
                    {
                      v16 = v15 - 1;
                      if ( v16 )
                      {
                        if ( v16 == 1 )
                        {
                          v162 = ((double (__thiscall *)(Actor *))this->vtbl->super.super.GetScale)(this);
                          v156 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fCombatDistance) * v162;
                          v9 = v156;
                          ActorWithinReach = (TESObjectREFR *)GetActorWithinReach__(v11, (int)this, v156);
                          v18 = (Actor *)ActorWithinReach;
                          if ( ActorWithinReach )
                          {
                            sub_5FC2B0((int *)this, (int)ActorWithinReach, st5_0, a3, v9, ActorWithinReach);
                            sub_5F4FD0(v18);
                            if ( this->members.super.process->GetEquippedShieldData(this->members.super.process, 1) )
                            {
                              v19 = this->members.super.process->GetEquippedShieldData(this->members.super.process, 1);
                              v20 = TESObjectARMO_ISHeavyArmor(v19->type);
                              v9 = flt_A31C80;
                              sub_6AF880(
                                st5_0,
                                a3,
                                (int)this,
                                flt_A31C80,
                                SLODWORD(flt_A2FE7C),
                                (int)v18,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                v20,
                                0,
                                0);
                            }
                          }
                          if ( sub_5E5640(this) )
                          {
                            duration = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);
                            HighPRocess_DoAction_____((PlayerCharacter *)this, 6, (int)duration);
                          }
                        }
                        break;
                      }
                      if ( this == (Actor *)TESDataHandler_g_PlayerRef || this->vtbl->IsInCombat(this, 1) )
                      {
                        this->vtbl->AttackHandling(this, 1, 0, 0);
                      }
                      else
                      {
                        process = this->members.super.process;
                        editorPackage = process->editorPackage;
                        if ( editorPackage && editorPackage->members.type == 8 && !process->Unk_4D(process) )
                          sub_5F9620((TESObjectREFR *)this, a3, 0.0);
                        else
                          ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))this->vtbl->Unk_EC)(this, 1, 0, 0);
                      }
                      durationa = !Actor_IsCreature(this);
                      sub_5E4010(this, durationa);
                    }
                    else if ( this->members.super.process->Unk_4E(this->members.super.process) )
                    {
                      v23 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1);
                      v9 = sub_5E4920(
                             (PlayerCharacter *)this,
                             (int)v11,
                             0.0,
                             (void **)&v23->extendData,
                             *(float *)&v133);
                    }
                    else if ( this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster) )
                    {
                      MagicCaster_UseActiveMagicItem(&this->members.magicCaster.vtbl, st5_0, 0.0, a3, 0);
                    }
                    else if ( this == (Actor *)TESDataHandler_g_PlayerRef || this->vtbl->IsInCombat(this, 1) )
                    {
                      this->vtbl->AttackHandling(this, 0, 0, 0);
                      sub_5E4010(this, 0);
                    }
                    else
                    {
                      v24 = this->members.super.process;
                      v25 = v24->editorPackage;
                      if ( v25 && v25->members.type == 8 && !v24->Unk_4D(v24) )
                      {
                        sub_5F9620((TESObjectREFR *)this, a3, 0.0);
                        sub_5E4010(this, 0);
                      }
                      else
                      {
                        ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))this->vtbl->Unk_EC)(this, 0, 0, 0);
                        sub_5E4010(this, 0);
                      }
                    }
                    if ( !sub_5E5640(this) )
                      break;
LABEL_36:
                    durationb = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);
                    HighPRocess_DoAction_____((PlayerCharacter *)this, 3, (int)durationb);
                    break;
                  }
                }
                else if ( ActorAnimData_GetSomethingFromField8Value(v137, 1) == 1 )
                {
                  v26 = ActorAnimData_GetAnimGroupFromField8Value(v137, 1);
                  if ( (unsigned int)(*(_DWORD *)(0x24 * sub_51AA00(v26) + 0xB102EC) - 4) <= 1 )
                  {
                    if ( this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster) )
                    {
                      v9 = flt_A6E688;
                      durationc = flt_A6E688;
                      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                      v27 = this->vtbl->super.super.GetPos(this);
                      IsUnderwater = Actor_IsUnderwater__(this, (int)v27, (ExtraDataList *)ParentCell, durationc);
                      if ( (Actor_IsSwimming(this) || IsUnderwater)
                        && (v29 = this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster),
                            EffectItemList_HasAssocActorEffect((int)v29 + 0xC)) )
                      {
                        if ( this == (Actor *)TESDataHandler_g_PlayerRef )
                        {
                          v9 = flt_A30634;
                          GameUI_QueueMessage((const char *)sCanNotSummonInWater, 0, 1u, flt_A30634);
                        }
                      }
                      else
                      {
                        MagicCaster_UseActiveMagicItem(&this->members.magicCaster.vtbl, st5_0, v9, a3, 0);
                      }
                    }
                    goto LABEL_36;
                  }
                }
                break;
              case 4:
                if ( ActorAnimData_GetSomethingFromField8Value(v137, 3) != 1 )
                  break;
                v30 = (Actor *)TESDataHandler_g_PlayerRef;
                v147 = v11;
                v143 = 1;
                if ( this != (Actor *)TESDataHandler_g_PlayerRef )
                  goto LABEL_65;
                v143 = 2;
                while ( 2 )
                {
                  if ( this == v30 && v143 == 1 )
                  {
                    v31 = sub_6600D0(v30, 1);
                    v147 = (int *)v31;
                  }
                  else
                  {
LABEL_65:
                    v31 = (UInt32)v147;
                  }
                  v32 = this->members.super.process->Unk_49(this->members.super.process, v31);
                  v33 = this->members.super.process->Unk_4A(this->members.super.process, v31);
                  v34 = v33;
                  if ( !v32 || !v33 )
                    goto LABEL_78;
                  v35 = (void *)(*(int (__thiscall **)(UInt32, const char *))(*(_DWORD *)v32 + 0x58))(v32, "Arrow:0");
                  v36 = (int)v35;
                  if ( !v35 )
                  {
                    PrintError("Could not find Arrow:0 on Quiver");
                    goto LABEL_78;
                  }
                  v37 = sub_700900(v35);
                  (*(void (__thiscall **)(UInt32, int, int))(*(_DWORD *)v34 + 0x84))(v34, v37, 1);
                  if ( this != (Actor *)TESDataHandler_g_PlayerRef || GetGodMode() )
                    goto LABEL_78;
                  v38 = this->members.super.process->GetEquippedAmmoData(this->members.super.process, 1);
                  TESObjectREF_GetItemCount((TESObjectREFR *)this, v38->type, v133, SLODWORD(v134), SHIDWORD(v134));
                  if ( v39 == 1 )
                  {
                    v40 = v36;
                  }
                  else
                  {
                    if ( v39 > iMaxArrowsInQuiver )
                      goto LABEL_78;
                    LODWORD(v162) = 0;
                    HIDWORD(v162) = 0;
                    v168 = 0;
                    BSStringT_Static_Format((BSStringT *)&v162, "Arrow%d", v39 - 1);
                    v40 = (*(int (__thiscall **)(UInt32, char *))(*(_DWORD *)v32 + 0x58))(v32, (char *)LODWORD(v162));
                    v168 = 0xFFFFFFFF;
                    BSStringT_Clear((unsigned int *)&v162);
                  }
                  if ( v40 )
                    *(_WORD *)(v40 + 0x18) |= 1u;
LABEL_78:
                  if ( --v143 )
                  {
                    v30 = (Actor *)TESDataHandler_g_PlayerRef;
                    continue;
                  }
                  break;
                }
                v41 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);
                HighPRocess_DoAction_____((PlayerCharacter *)this, 5, (int)v41);
                v10 = (PowerListEntry *)LODWORD(v152);
                break;
              case 5:
                if ( ActorAnimData_GetSomethingFromField8Value(v137, 3) != 3 )
                  break;
                v42 = Vector3_InitValue_;
                v43 = dword_B3F9B0;
                v165 = *((_DWORD *)&Vector3_InitValue_ + 1);
                v44 = (Actor *)TESDataHandler_g_PlayerRef;
                v83 = this == (Actor *)TESDataHandler_g_PlayerRef;
                v148 = v11;
                v144 = 1;
                a2 = LODWORD(v42);
                v166 = LODWORD(v43);
                if ( v83 )
                  v144 = 2;
                v45 = (UInt32)v11;
                while ( 2 )
                {
                  if ( this == v44 && v144 == 1 )
                  {
                    v45 = sub_6600D0(v44, 1);
                    v148 = (int *)v45;
                  }
                  if ( !this->members.super.process->Unk_4A(this->members.super.process, v45) )
                    goto LABEL_100;
                  v46 = this->members.super.process->Unk_4A(this->members.super.process, v45);
                  v47 = (_DWORD *)sub_405790(v46, 0);
                  if ( !v47 )
                    goto LABEL_100;
                  (*(void (__thiscall **)(_DWORD *))(*v47 + 0x74))(v47);
                  if ( this != (Actor *)TESDataHandler_g_PlayerRef )
                    goto LABEL_98;
                  v48 = 0;
                  if ( PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1) )
                    v48 = (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1)->members.super.m_flags & 1) != 0;
                  if ( v144 == 1 )
                  {
                    if ( v48 )
                      goto LABEL_99;
                    goto LABEL_98;
                  }
                  if ( v144 == 2 && v48 )
                  {
LABEL_98:
                    v49 = v47[0x23];
                    v50 = v47[0x24];
                    a2 = v47[0x22];
                    v165 = v49;
                    v166 = v50;
                  }
LABEL_99:
                  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
                  sub_7C5E70(ShadowSceneNode, v46);
                  sub_477EF0((_WORD *)(v46 + 0xAC));
                  v45 = (UInt32)v148;
LABEL_100:
                  if ( --v144 )
                  {
                    v44 = (Actor *)TESDataHandler_g_PlayerRef;
                    continue;
                  }
                  break;
                }
                v155 = this->vtbl->super.GetZRotation((MobileObject *)this);
                v154 = sub_4A9720(this);
                v9 = 1.0;
                *(float *)&v145 = 1.0;
                if ( this == (Actor *)TESDataHandler_g_PlayerRef )
                {
                  unk640 = TESDataHandler_g_PlayerRef->unk640;
                  v162 = unk640 * *(float *)GameSetting_GetSafeFloatPointer((int *)&fArrowBowTimerMult);
                  v158 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fArrowBowTimerBase) + v162;
                  v9 = sub_4AC760(1.0, v158);
                  *(float *)&v145 = v9;
                }
                v52 = this->members.super.process->GetEquippedAmmoData(this->members.super.process, 1);
                v53 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1);
                v54 = 0;
                v55 = (int)v53;
                v153 = *(float *)&v53;
                if ( v52 )
                {
                  if ( v53 )
                  {
                    if ( !((unsigned __int8 (__thiscall *)(TESForm *))v52->type->vtbl->Unk_1E)(v52->type) )
                    {
                      v56 = v52->type;
                      v149 = 0;
                      if ( v56 )
                      {
                        if ( v56->member.type == kFormType_Ammo )
                          v149 = v52->type;
                      }
                      v57 = *(_DWORD *)(v55 + 8);
                      v159 = 0.0;
                      if ( v57 )
                      {
                        if ( *(_BYTE *)(v57 + 4) == 0x21 )
                          v159 = *(float *)(v55 + 8);
                      }
                      if ( this != (Actor *)TESDataHandler_g_PlayerRef )
                      {
                        v58 = this->vtbl->GetCombatController(this);
                        v54 = (int)v58;
                        if ( v58 )
                          v59 = (_DWORD *)sub_6135F0((int)v58);
                        else
                          v59 = 0;
                        if ( v149 )
                          v60 = *(float *)&v149[5].member.type;
                        else
                          v60 = 1.0;
                        v150 = v60;
                        *(float *)&v162 = v150 * *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37040);
                        v9 = sub_608280(*(float *)&this);
                        if ( v59 )
                        {
                          *((float *)&v124 + 1) = v9;
                          *(float *)&v124 = *(float *)&v162;
                          v151 = v9;
                          sub_6159C0(
                            (int)&v162,
                            a2,
                            *(float *)&v165,
                            *(float *)&v166,
                            v59,
                            v124,
                            *(float *)(v54 + 0x180),
                            v133,
                            v134,
                            v135,
                            v136,
                            (int)v137,
                            0,
                            0xFFFFFFFF,
                            v140,
                            SLODWORD(v141),
                            0,
                            v145,
                            0.0,
                            v151,
                            v152,
                            v153,
                            v154,
                            v155,
                            v159,
                            *(float *)&v161,
                            *(float *)&v162,
                            *((float *)&v162 + 1),
                            v163,
                            *(float *)&a2,
                            *(float *)&v165,
                            *(float *)&v166,
                            v167[0]);
                          v154 = *(float *)&v162;
                          v9 = v163;
                          v155 = v163;
                        }
                        v55 = LODWORD(v153);
                      }
                      if ( Actor_IsSwimming(this) )
                      {
                        v9 = *(float *)&v145 * dbl_A2FC80;
                        *(float *)&v145 = v9;
                      }
                      if ( this != (Actor *)TESDataHandler_g_PlayerRef || !TESDataHandler_g_PlayerRef->unk5C0 )
                      {
                        v61 = (char *)FormHeapAlloc(0x9Cu);
                        LODWORD(v162) = v61;
                        v168 = 1;
                        if ( v61 )
                          v62 = sub_60C940(
                                  (ArrowProjectile *)v61,
                                  (TESChildCELL *)this,
                                  a2,
                                  v165,
                                  v166,
                                  v155,
                                  v154,
                                  *(float *)&v145,
                                  (int)v52,
                                  (void **)v55);
                        else
                          v62 = 0;
                        v168 = 0xFFFFFFFF;
                        if ( v62 )
                          sub_673A90((int)v62, 0, 0, 0, 0);
                        this->vtbl->Unk_BA(this);
                        if ( !Actor_GetSkillMasteryLevel((int *)this, v54, v55, 0x1C) )
                        {
                          durationd = -*(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B37020);
                          Actor_ModFatigue_(this, durationd);
                        }
                        if ( this->vtbl->GetActorValue(this, kActorVal_Invisibility) > 0 )
                          sub_6A24B0((int)&this->members.magicTarget, (int)this, 0x49564E49, 0);
                        LODWORD(v162) = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(LODWORD(v159) + 0x88)
                                                                                + 0x10))(LODWORD(v159) + 0x88);
                        duratione = (float)SLODWORD(v162);
                        v63 = Calc_DamageToWeapon(duratione);
                        vtbl = this->vtbl;
                        *(float *)&v162 = v63;
                        v9 = *(float *)&v162;
                        ((void (__thiscall *)(Actor *, int, char *, _DWORD))vtbl->Unk_B1)(
                          this,
                          v55,
                          (char *)LODWORD(v162),
                          0);
                      }
                    }
                  }
                }
                v65 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);
                HighPRocess_DoAction_____((PlayerCharacter *)this, 3, (int)v65);
                v10 = (PowerListEntry *)LODWORD(v152);
                break;
              case 9:
                v9 = sub_5E3590(this);
                *(float *)&v140 = v9;
                break;
              case 0xA:
                if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) )
                  break;
                v81 = sub_88D370((_DWORD *)v161 + 0x78);
                if ( v81 )
                {
                  v82 = v81 - 1;
                  if ( !v82 )
                    goto LABEL_173;
                  if ( v82 != 1 || !v10 )
                    break;
                  v83 = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v10[0xD].data) == 0x29;
                }
                else
                {
                  if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this)
                    || (this->members.super.process->GetMovementFlags(this->members.super.process) & 0xF) == 0 )
                  {
                    break;
                  }
                  if ( !v10 )
                    goto LABEL_173;
                  v83 = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v10[0xD].data) == 0x2A;
                }
                if ( v83 )
                  goto LABEL_173;
                break;
              default:
                break;
            }
          }
          else if ( Actor_GetCurrentAction(this) == 6
                 && (v89 = ActorAnimData_GetAnimGroupFromField8Value(v137, 1), sub_51AA00(v89) == 0x1B) )
          {
            v139 = 6;
            durationf = sub_4706E0(v137, 1);
            HighPRocess_DoAction_____((PlayerCharacter *)this, 6, (int)durationf);
          }
          else
          {
LABEL_173:
            HighPRocess_DoAction_____((PlayerCharacter *)this, 0xFFFFFFFF, 0);
          }
        }
        v84 = v139;
        v85 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_85)(this);
        if ( v85 )
        {
          if ( v139 != 0xFFFFFFFF )
            goto LABEL_229;
          v86 = Actor_GetCurrentAction(this);
          if ( v86 < 2 || v86 > 5 )
          {
            do
            {
              if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_87)(this) != 0x48 )
              {
                v9 = 0.0;
                v87 = this->vtbl;
                v88 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD))this->vtbl->Unk_87)(this, 0, 0.0);
                ((void (__thiscall *)(Actor *, int))v87->ModExperience)(this, v88);
                v84 = 0xFFFFFFFF;
              }
              --v85;
            }
            while ( v85 );
            ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_84)(this, 0);
          }
        }
        else if ( v139 != 0xFFFFFFFF )
        {
          goto LABEL_229;
        }
        if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None )
        {
          v90 = Actor_GetCurrentAction(this);
          if ( v90 == 0xFFFFFFFF || (unsigned int)(v90 - 2) <= 3 )
          {
            v91 = sub_88D370((_DWORD *)v161 + 0x78);
            if ( v91 )
            {
              v92 = v91 - 1;
              if ( !v92
                || v92 == 1
                && ((*(float *)&v162 = *((float *)v161 + 0xC9),
                     SafeFloatPointer = GameSetting_GetSafeFloatPointer(&dword_B148EC),
                     v9 = *(float *)&v162,
                     a3 = *(float *)SafeFloatPointer,
                     a3 < *(float *)&v162)
                 && !this->vtbl->GetMountedHorse(this)
                 || v10 && TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v10[0xD].data) == 0x29) )
              {
                v138 = 0x29;
              }
            }
            else if ( v10 )
            {
              if ( TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v10[0xD].data) == 0x29
                || TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v10[0xD].data) == 0x28 )
              {
                if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this)
                  || (this->members.super.process->GetMovementFlags(this->members.super.process) & 0xF) == 0 )
                {
                  if ( Actor_GetCurrentAction(this) == 0xFFFFFFFF )
                  {
                    v84 = 0xA;
                    v139 = 0xA;
                  }
                  v138 = 0x2A;
                  v137->unkC4 = 1;
                }
                sub_6B1900(st5_0, a3, (TESObjectREFR *)this, *((_DWORD *)v161 + 0x85));
              }
            }
          }
          if ( this->members.super.process->GetCombatMode(this->members.super.process) )
          {
            if ( !this->members.super.process->GetWeaponOut(this->members.super.process)
              && Actor_GetCurrentAction(this) == 0xFFFFFFFF
              && IsWeaponReady(this) )
            {
              if ( !sub_472EA0(v137) )
                sub_475440(v137, 1, 0);
              v84 = 0;
              v138 = 0x11;
              v139 = 0;
              if ( this->members.super.process->GetEquippedLightData(this->members.super.process, 1) )
              {
                if ( this->members.super.process->Unk_4D(this->members.super.process) )
                  UnequipLight((TESObjectREFR *)this, st5_0, a3, v9);
              }
            }
          }
        }
        if ( !this->members.super.process->GetCombatMode(this->members.super.process) )
        {
          if ( this->members.super.process->GetWeaponOut(this->members.super.process) )
          {
            if ( Actor_GetCurrentAction(this) == 0xFFFFFFFF
              && !this->vtbl->super.super.HasFatigue((TESObjectREFR *)this)
              && !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
              && !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this) )
            {
              DeadState = this->members.DeadState;
              if ( DeadState != 5 && DeadState != 3 )
              {
                v84 = 1;
                v138 = 0x12;
                v139 = 1;
              }
            }
          }
        }
LABEL_229:
        if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) && this->vtbl->IsInCombat(this, 1)
          || ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this)
          && this->members.super.process->GetWeaponOut(this->members.super.process)
          || v84 <= 1 )
        {
          if ( this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1) )
            v146 = *(_DWORD *)(4
                             * SLOBYTE(this->members.super.process->GetEquippedWeaponData(
                                         this->members.super.process,
                                         1)->type[6].vtbl)
                             + 0xB086B8);
          else
            v146 = 1;
        }
        if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) == 6
          && (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x200) != 0 )
        {
          ((void (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)(
            this->members.super.process,
            0x200,
            0);
          ((void (__thiscall *)(LowProcess *, int, int))this->members.super.process->Unk_B0)(
            this->members.super.process,
            0x100,
            1);
        }
        v95 = this->members.super.process->GetMovementFlags(this->members.super.process);
        if ( (v95 & 0x800) != 0 )
        {
          v142 = 2;
        }
        else if ( (v95 & 0x2000) != 0 )
        {
          v142 = 3;
        }
        else if ( (v95 & 0x400) != 0 )
        {
          v142 = 1;
        }
        v96 = v138;
        if ( v138 )
          goto LABEL_284;
        if ( !this->vtbl->GetMountedHorse(this) )
        {
          switch ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) )
          {
            case kSitSleep_SittingIn:
            case kSitSleep_SleepingIn:
              if ( sub_471210(v137) || sub_472EA0(v137) )
                goto LABEL_251;
              break;
            case kSitSleep_Sitting:
            case kSitSleep_SittingOut:
            case kSitSleep_Sleeping:
            case kSitSleep_SleepingOut:
LABEL_251:
              v96 = 1;
              v138 = 1;
              break;
            default:
              break;
          }
          if ( this == (Actor *)TESDataHandler_g_PlayerRef )
          {
            Singleton = InterfaceManager_GetSingleton(0, 1);
            if ( sub_57CFB0(Singleton, 0x40C) )
            {
              v96 = 1;
              v138 = 1;
            }
          }
        }
        v141 = a5;
        if ( (v95 & 0xF) == 0 )
        {
          if ( (v95 & 0x10) != 0 )
          {
            v96 = 0xF;
          }
          else
          {
            if ( (v95 & 0x20) == 0 )
              goto LABEL_284;
            v96 = 0x10;
          }
          v138 = v96;
          goto LABEL_284;
        }
        if ( (v95 & 0x200) == 0 )
        {
          if ( (v95 & 0xFF00) == 0 )
            goto LABEL_284;
          if ( (v95 & 1) != 0 )
          {
            v96 = 3;
            v138 = 3;
            *(float *)&v140 = sub_5E3590(this);
            goto LABEL_284;
          }
          if ( (v95 & 2) != 0 )
          {
            v96 = 4;
            v138 = 4;
            *(float *)&v140 = sub_5E3590(this);
            goto LABEL_284;
          }
          if ( (v95 & 4) != 0 )
          {
            v96 = 5;
            v138 = 5;
            *(float *)&v140 = sub_5E3590(this);
            goto LABEL_284;
          }
          if ( (v95 & 8) != 0 )
          {
            v96 = 6;
            v138 = 6;
          }
          goto LABEL_267;
        }
        if ( (v95 & 1) != 0 )
        {
          v96 = 7;
        }
        else if ( (v95 & 2) != 0 )
        {
          v96 = 8;
        }
        else if ( (v95 & 4) != 0 )
        {
          v96 = 9;
        }
        else
        {
          if ( (v95 & 8) == 0 )
            goto LABEL_266;
          v96 = 0xA;
        }
        v138 = v96;
LABEL_266:
        if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) )
        {
          *(float *)&v140 = sub_5E3750((TESObjectREFR *)this);
          goto LABEL_284;
        }
LABEL_267:
        *(float *)&v140 = sub_5E3590(this);
LABEL_284:
        if ( v84 == 0xFFFFFFFF || Actor_GetCurrentAction(this) == 0xFFFFFFFF )
        {
          if ( *(float *)&v140 < 1.0 && (unsigned int)(v96 - 3) <= 0xD && v96 != 0xF && v96 != 0x10 )
          {
            if ( this == (Actor *)TESDataHandler_g_PlayerRef )
              TESDataHandler_g_PlayerRef->vtbl->super.Unk_97((Actor *)TESDataHandler_g_PlayerRef);
            v138 = 0;
          }
          v98 = sub_51A9B0(v142, v146, v138);
          v99 = v137;
          v100 = sub_470D20(v137, v98, 0);
          v101 = v100;
          v102 = sub_51AA00(v100);
          v103 = v102;
          if ( v139 != 0xFFFFFFFF && v138 != v102 )
            v139 = 0xFFFFFFFF;
          if ( Actor_GetCurrentAction(this) != 0xFFFFFFFF
            && this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process)
            && (v169 = (BSAnimGroupSequence *)sub_4706E0(v137, *(_DWORD *)(0x24 * v103 + 0xB102E8)),
                v169 == this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process)) )
          {
            if ( Actor_GetCurrentAction(this) == 0xC )
            {
              v104 = (unsigned __int16)ActorAnimData_GetAnimGroupFromField8Value(v137, 0);
              if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) )
              {
                switch ( sub_51AA00(v104) )
                {
                  case 4:
                  case 5:
                  case 6:
                  case 0xB:
                  case 0xC:
                  case 0xD:
                  case 0xE:
                    goto LABEL_303;
                  case 8:
                  case 9:
                  case 0xA:
                    v104 = v104 & 0xFF00 | 7;
                    break;
                  default:
                    break;
                }
              }
              else
              {
LABEL_303:
                v104 = v104 & 0xFF00 | 3;
              }
              switch ( sub_51AA00(v104) )
              {
                case 3:
                case 4:
                case 5:
                case 6:
                case 0xB:
                case 0xC:
                case 0xD:
                case 0xE:
                  v105 = sub_5E3590(this);
                  goto LABEL_306;
                case 7:
                case 8:
                case 9:
                case 0xA:
                  v105 = sub_5E3750((TESObjectREFR *)this);
LABEL_306:
                  *(float *)&v140 = v105;
                  goto Actor_ProcessAction___def_5FDF46;
                case 0xF:
                case 0x10:
                  v137->unkBC = a6;
                  return;
                default:
Actor_ProcessAction___def_5FDF46:
                  sub_472330(v137, v104);
                  if ( v106 )
                  {
                    v162 = *(float *)&v140;
                    sub_472330(v137, v104);
                    v141 = v162 / (double)v107 * v141;
                  }
                  v137->unkBC = v141;
                  break;
              }
            }
          }
          else
          {
            if ( (_WORD)v101 != 0xFF )
            {
              if ( v103 == 0xF || v103 == 0x10 )
              {
                v137->unkBC = a6;
              }
              else if ( v103 < 3 || v103 > 0x10 )
              {
                if ( v103 >= 0x11 && v103 <= 0x1A )
                {
                  v111 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1);
                  if ( v111 )
                    v137->unkC0 = *(float *)&v111->type[6].member.type;
                  else
                    v137->unkC0 = 1.0;
                }
              }
              else
              {
                v108 = (unsigned __int16)v101;
                if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) )
                {
                  switch ( sub_51AA00(v101) )
                  {
                    case 4:
                    case 5:
                    case 6:
                    case 0xB:
                    case 0xC:
                    case 0xD:
                    case 0xE:
                      goto LABEL_320;
                    case 8:
                    case 9:
                    case 0xA:
                      v108 = v101 & 0xFF07 | 7;
                      break;
                    default:
                      break;
                  }
                }
                else
                {
LABEL_320:
                  v108 = v101 & 0xFF03 | 3;
                }
                sub_472330(v137, v108);
                if ( v109 )
                {
                  v162 = *(float *)&v140;
                  sub_472330(v137, v108);
                  v141 = v162 / (double)v110 * v141;
                }
                v137->unkBC = v141;
                v99 = v137;
              }
            }
            if ( ActorAnimData_GetAnimGroupFromField8Value(v99, *(_DWORD *)(0x24 * v103 + 0xB102E8)) != (_WORD)v101 )
            {
              if ( sub_470D00(v99, v101) )
              {
                ActorAnimData_PlayAnimGroup((int)v99, (_DWORD *)v101, 1, 0xFFFFFFFF);
                if ( v139 != 0xFFFFFFFF && !TESAnimGroup_IsAnimGroupIdle(v101) )
                {
                  v112 = sub_4706E0(v99, *(_DWORD *)(0x24 * v103 + 0xB102E8));
                  HighPRocess_DoAction_____((PlayerCharacter *)this, v139, (int)v112);
                }
                ((void (__thiscall *)(Actor *, int, int))this->vtbl->Unk_E9)(this, v101, 1);
                if ( v103 == 0x28 )
                {
                  v113 = sub_51A9B0(v142, v146, 0x29);
                  v114 = (_DWORD *)(unsigned __int16)sub_470D20(v137, v113, 0);
                  ActorAnimData_PlayAnimGroup((int)v137, v114, 0, 0xFFFFFFFF);
                  ((void (__thiscall *)(Actor *, _DWORD *, _DWORD))this->vtbl->Unk_E9)(this, v114, 0);
                  v99 = v137;
                }
              }
            }
            v115 = sub_4706E0(v99, 2);
            if ( !this->members.super.process->GetEquippedLightData(this->members.super.process, 1)
              || this == (Actor *)TESDataHandler_g_PlayerRef && sub_5E6C10((MobileObject *)TESDataHandler_g_PlayerRef) )
            {
              if ( !this->members.super.process->GetEquippedLightData(this->members.super.process, 1) )
              {
                if ( v115 )
                {
                  if ( TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v115[0xD].data) == 0x21 )
                  {
                    sub_470FC0(v99, 2, 0.0);
                    if ( this == (Actor *)TESDataHandler_g_PlayerRef )
                    {
                      v120 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                      sub_470FC0(v120, 2, 0.0);
                    }
                  }
                }
              }
            }
            else
            {
              v116 = sub_51A9B0(v142, v146, 0x21);
              v117 = sub_470D20(v137, v116, 0);
              v118 = v117;
              v119 = sub_51AA00(v117);
              if ( ActorAnimData_GetAnimGroupFromField8Value(v137, *(_DWORD *)(0x24 * v119 + 0xB102E8)) != (_WORD)v118 )
              {
                if ( sub_470D00(v137, v118) )
                {
                  ActorAnimData_PlayAnimGroup((int)v137, (_DWORD *)v118, 1, 0xFFFFFFFF);
                  ((void (__thiscall *)(Actor *, int, int))this->vtbl->Unk_E9)(this, v118, 1);
                }
              }
            }
            if ( sub_4706E0(v137, 3) )
            {
              v121 = ActorAnimData_GetAnimGroupFromField8Value(v137, 3);
              if ( sub_51AC80(v121) )
              {
                p_SetUnk20CInner = &this->members.super.process->SetUnk20CInner;
                v123 = sub_5E6A40(this, (float *)&a2);
                ((void (__thiscall *)(LowProcess *, _DWORD, _DWORD, _DWORD))*p_SetUnk20CInner)(
                  this->members.super.process,
                  *(_DWORD *)v123,
                  *((_DWORD *)v123 + 1),
                  *((_DWORD *)v123 + 2));
              }
            }
          }
        }
      }
    }
  }
}
