void __userpurge sub_603CA0(Actor *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, float a2)
{
  int v6; // edi
  int v7; // eax
  LowProcess *process; // ecx
  int v9; // esi
  ActorAnimData *v10; // ebx
  double v11; // st7
  LowProcess *v12; // ebp
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned __int16 v14; // ax
  bhkCharacterProxy *CharProxy; // eax
  int v16; // eax
  LowProcess *v17; // ecx
  int *SafeFloatPointer; // eax
  double v19; // st7
  float (__thiscall *GetAV_F)(Actor *, AVCode); // eax
  double v21; // st7
  ActorVtbl *vtbl; // edx
  void (__thiscall *DamageAV_F)(Actor *, UInt32, float, Actor *); // eax
  LowProcess *v24; // ecx
  int v25; // esi
  char v26; // al
  ActorVtbl *v27; // edx
  int v28; // eax
  ActorVtbl *v29; // esi
  Creature *v30; // eax
  float *v31; // eax
  float v32; // esi
  int v33; // edi
  int v34; // eax
  double v35; // st7
  double v36; // st7
  float v37; // eax
  int *v38; // eax
  int v39; // eax
  float v40; // ecx
  float *v41; // eax
  int v42; // edi
  BSExtraDataVtbl *v43; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *ShadowSceneNode; // eax
  MobileObject *v46; // eax
  int v47; // esi
  int v48; // eax
  float *v49; // eax
  float v50; // ebx
  float *v51; // eax
  float v52; // edi
  int v53; // eax
  float v54; // ecx
  ActorVtbl *v55; // edx
  float (__thiscall *GetScale)(TESObjectREFR *); // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v58; // eax
  TESObjectCELL *ParentCell; // eax
  char IsUnderwater; // bl
  TESObjectCELL *v61; // eax
  char v62; // al
  TESObjectCELL *v63; // eax
  signed int v64; // eax
  double v65; // st7
  bool (__thiscall *IsDead)(TESObjectREFR *, char); // edx
  SInt32 v67; // eax
  double v68; // st7
  double v69; // st5
  double v70; // st7
  double v71; // st6
  double v72; // st7
  ActorVtbl *v73; // esi
  signed int v74; // eax
  double v75; // st7
  void (__thiscall *ApplyDamage)(Actor *, float, float, Actor *); // eax
  double v77; // st7
  int *v78; // eax
  unsigned int v79; // esi
  TESObjectCELL *v80; // eax
  float *v81; // eax
  int OpenMenuTile; // eax
  char v83; // bl
  char v84; // al
  void (__thiscall ***ParentMenu)(_DWORD, int); // eax
  int *v86; // eax
  unsigned int v87; // esi
  double v88; // st7
  __m128 *v89; // esi
  EntryData *v90; // eax
  _DWORD *sound; // esi
  int *v92; // eax
  int *v93; // esi
  float *v94; // eax
  float v95; // ecx
  float v96; // ebx
  TESObjectCELL *v97; // eax
  TESObjectCELL *v98; // eax
  TESWaterForm *WaterForm; // eax
  TESObjectCELL *v100; // eax
  TESObjectCELL *v101; // eax
  void *v102; // esi
  TESObjectCELL *v103; // eax
  float *v104; // eax
  hkVector4 *v105; // eax
  double v106; // st6
  TESObjectCELL *v107; // eax
  TESWaterForm *v108; // eax
  TESWaterForm *v109; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // eax
  unsigned __int16 v111; // ax
  bool v112; // zf
  ActorAnimData *v113; // eax
  LowProcess *v114; // eax
  TESPackage *editorPackage; // eax
  _DWORD **v116; // ecx
  BSSimpleList_VoidPtr *v117; // eax
  TESTopic *v118; // esi
  LowProcess *v119; // ecx
  char v120; // al
  LowProcess *v121; // ecx
  void (__thiscall *SayTopic)(BaseProcess *__hidden, Actor *, TESTopic *, bool, UInt32, UInt32); // edx
  unsigned __int8 v123; // al
  bool v124; // bl
  LowProcess *v125; // esi
  LowProcess_vtbl *v126; // edi
  double v127; // st7
  void (__thiscall *SetUnk22C)(BaseProcess *__hidden); // edx
  double v129; // st7
  double v130; // st7
  ActorAnimData *v131; // esi
  NiNode *AccumNode; // ecx
  int v133; // eax
  ActorAnimData *AnimData; // eax
  _DWORD *v135; // eax
  float *v136; // eax
  ActorAnimData *v137; // eax
  _DWORD *v138; // eax
  float *v139; // eax
  float v140; // esi
  LowProcess *v141; // ecx
  bool v142; // bl
  LowProcess *v143; // esi
  LowProcess_vtbl *v144; // edi
  double v145; // st7
  void (__thiscall *v146)(BaseProcess *__hidden); // edx
  LowProcess *v147; // ecx
  LowProcess *v148; // ecx
  float *v149; // eax
  int v150; // ebx
  _DWORD *v151; // edi
  NiNode *v152; // eax
  PlayerCharacter *v153; // ecx
  int v154; // esi
  int v155; // eax
  float v156; // ecx
  unsigned int v157; // edx
  float v158; // eax
  float *pos; // ebx
  float *v160; // eax
  float *v161; // eax
  double v162; // st7
  float v163; // ecx
  float v164; // edx
  double v165; // st7
  double v166; // st6
  bool v167; // bl
  BSShaderAccumulator *inited; // eax
  const char *v169; // [esp+74h] [ebp-10Ch]
  float v170; // [esp+78h] [ebp-108h]
  float v171; // [esp+7Ch] [ebp-104h]
  int v172; // [esp+80h] [ebp-100h]
  UInt32 v173; // [esp+88h] [ebp-F8h]
  const char *v174; // [esp+8Ch] [ebp-F4h]
  signed int a3a; // [esp+90h] [ebp-F0h]
  float a3b; // [esp+90h] [ebp-F0h]
  float a3c; // [esp+90h] [ebp-F0h]
  float a4a; // [esp+94h] [ebp-ECh]
  int a4b; // [esp+94h] [ebp-ECh]
  float a4c; // [esp+94h] [ebp-ECh]
  float a4d; // [esp+94h] [ebp-ECh]
  float a4e; // [esp+94h] [ebp-ECh]
  char v183; // [esp+98h] [ebp-E8h]
  char v184; // [esp+ADh] [ebp-D3h]
  char v185; // [esp+ADh] [ebp-D3h]
  char v186; // [esp+AEh] [ebp-D2h] BYREF
  bool v187; // [esp+AFh] [ebp-D1h]
  double Distance; // [esp+B0h] [ebp-D0h] BYREF
  float v189; // [esp+B8h] [ebp-C8h]
  float v190; // [esp+BCh] [ebp-C4h]
  float BaseCalcAVi; // [esp+C0h] [ebp-C0h]
  char v192; // [esp+C7h] [ebp-B9h] BYREF
  double WaterHeight; // [esp+C8h] [ebp-B8h] BYREF
  float v194; // [esp+D0h] [ebp-B0h]
  float v195; // [esp+D4h] [ebp-ACh]
  float v196; // [esp+D8h] [ebp-A8h] BYREF
  ActorAnimData *v197; // [esp+DCh] [ebp-A4h]
  int v198[2]; // [esp+E0h] [ebp-A0h] BYREF
  float v199; // [esp+E8h] [ebp-98h]
  float v200; // [esp+ECh] [ebp-94h]
  int v201[3]; // [esp+F0h] [ebp-90h] BYREF
  float v202[9]; // [esp+FCh] [ebp-84h] BYREF
  float v203[9]; // [esp+120h] [ebp-60h] BYREF
  float v204[9]; // [esp+144h] [ebp-3Ch] BYREF
  float v205[3]; // [esp+168h] [ebp-18h] BYREF
  int v206; // [esp+17Ch] [ebp-4h]

  *(float *)&v6 = 0.0;
  LODWORD(Distance) = 0;
  *(float *)&v7 = COERCE_FLOAT(
                    ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->super.super.GetNiNode)(
                      this,
                      a4,
                      a3,
                      st5_0));
  process = this->members.super.process;
  v9 = v7;
  v190 = *(float *)&v7;
  if ( process )
  {
    *(float *)&v6 = COERCE_FLOAT(process->Unk_39(process, (UInt32)this));
    v196 = *(float *)&v6;
  }
  else
  {
    v196 = 0.0;
  }
  v195 = COERCE_FLOAT(MobileObject_GetCharProxy((MobileObject *)this));
  v10 = this->vtbl->super.super.GetAnimData(this);
  v197 = v10;
  if ( !v9
    || !TESObjectREFR_GetParentCell((TESObjectREFR *)this)
    || TESObjectREFR_GetParentCell((TESObjectREFR *)this)->members.cellProcessLevel != 6 )
  {
    return;
  }
  v11 = a2;
  if ( a2 >= dbl_A6C820 )
  {
    v12 = this->members.super.process;
    if ( v12 )
      ((void (__thiscall *)(LowProcess *, int))v12->Unk_11C)(v12, 1);
    return;
  }
  if ( this != (Actor *)TESDataHandler_g_PlayerRef || (v184 = 1, TESDataHandler_g_PlayerRef->isThirdPerson) )
    v184 = 0;
  if ( MobileObject_GetCharProxy((MobileObject *)this) )
  {
    v186 = 0;
    if ( v10 )
    {
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v10, 3);
      v9 = AnimGroupFromField8Value;
      if ( sub_51ACC0(AnimGroupFromField8Value) && sub_51AA00(v9) < 0x1A
        || (v14 = ActorAnimData_GetAnimGroupFromField8Value(v10, 1), v9 = v14, sub_51ACC0(v14)) && sub_51AA00(v9) < 0x1A )
      {
        v186 = 1;
      }
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    if ( CharProxy )
      v16 = (int)CharProxy + 0x1F0;
    else
      v16 = 0;
    sub_5E14E0(v16, &v186);
  }
  v17 = this->members.super.process;
  if ( v17 )
  {
    ((void (__thiscall *)(LowProcess *, Actor *))v17->Unk_BC)(v17, this);
    ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_10F)(
      this->members.super.process,
      this);
    if ( bHealthBarShowing_Gameplay )
      this->members.super.process->Unk_18(this->members.super.process, (UInt32)this);
    if ( (this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sleeping
       || this->members.DeadState == 3)
      && *(float *)&v6 != 0.0
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x98))(v6) )
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 0x9C))(v6, 1, 0);
    }
    if ( this->members.DeadState == 6
      && (((int (__thiscall *)(LowProcess *))this->members.super.process->GetKnockedState)(this->members.super.process) == 3
       || ((int (__thiscall *)(LowProcess *))this->members.super.process->GetKnockedState)(this->members.super.process) == 1) )
    {
      this->members.super.process->UpdateUnk088(this->members.super.process);
      v11 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk088)(this->members.super.process);
      if ( v11 <= *(float *)&SrcStr )
      {
        Actor_HandleDeathSTate____(this, 0);
        BaseCalcAVi = (float)Actor_GetBaseCalcAVi((int *)this, (int)v10, v6, v9, 8);
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37D10);
        v19 = *(float *)SafeFloatPointer * BaseCalcAVi;
        GetAV_F = this->vtbl->GetAV_F;
        BaseCalcAVi = v19;
        v21 = ((double (__thiscall *)(Actor *, int))GetAV_F)(this, 8);
        vtbl = this->vtbl;
        *(float *)&WaterHeight = v21;
        DamageAV_F = vtbl->DamageAV_F;
        BaseCalcAVi = BaseCalcAVi - *(float *)&WaterHeight;
        v11 = BaseCalcAVi;
        ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))DamageAV_F)(this, 8, LODWORD(BaseCalcAVi), 0);
      }
    }
  }
  if ( this != (Actor *)TESDataHandler_g_PlayerRef )
  {
    v24 = this->members.super.process;
    v25 = 0;
    if ( v24 )
      v25 = (int)v24->GetCurrentPackage(v24);
    if ( !this->vtbl->IsInCombat(this, 1) && (!v25 || *(_BYTE *)(v25 + 0x20) != 8) && Actor_IsBlocking(this) )
      sub_5F4AE0(this, st5_0, a3, v11, 0);
    if ( BYTE1(this->members.unk0B4[5]) || v25 && (*(_DWORD *)(v25 + 0x1C) & 0x20000) != 0 )
    {
      sub_5E0610(this, 0x400);
    }
    else if ( Actor_IsSneaking(this) )
    {
      sub_5E05F0(this, 0x400);
    }
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) != 2 )
    sub_5E0CE0(this, (int)this);
  v26 = sub_5E1030(this);
  v27 = this->vtbl;
  if ( v26 )
  {
    v28 = (int)v27->GetMountedHorse(this);
    v29 = this->vtbl;
    a4a = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v28 + 0x1E0))(v28);
    ((void (__thiscall *)(Actor *, _DWORD))v29->super.Unk_7A)(this, LODWORD(a4a));
    v30 = this->vtbl->GetMountedHorse(this);
    v31 = v30->__vftable->super.super.GetPos((TESObjectREFR *)v30);
    TESObjectREFR_SetPosition((TESObjectREFR *)this, *v31, v31[1], v31[2]);
  }
  else if ( ((int (__thiscall *)(Actor *))v27->Unk_E2)(this) )
  {
    byte_B3CBD0 = 1;
  }
  v32 = this->members.super.super.pos[0];
  v33 = LODWORD(this->members.super.super.pos[1]);
  if ( v184 )
  {
    v189 = this->members.super.super.pos[2];
    if ( sub_5E1030(this) )
    {
      v32 = Vector3_InitValue_;
      v33 = *((_DWORD *)&Vector3_InitValue_ + 1);
      v189 = dword_B3F9B0;
    }
    v34 = LODWORD(v190);
    *(float *)&WaterHeight = TESDataHandler_g_PlayerRef->firstPersonNiNodeTranslateZ;
    *(float *)(LODWORD(v190) + 0x54) = v32;
    v35 = *(float *)&WaterHeight;
    *(_DWORD *)(v34 + 0x58) = v33;
    v36 = v35 + v189;
    v189 = v36;
    *(float *)(v34 + 0x5C) = v189;
    sub_660130((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  }
  else
  {
    v189 = this->members.super.super.pos[2];
    BaseCalcAVi = MobileObject_GetZRotation((MobileObject *)this);
    if ( sub_5E1030(this) )
    {
      v37 = dword_B3F9B0;
      v32 = Vector3_InitValue_;
      BaseCalcAVi = 0.0;
      v33 = *((_DWORD *)&Vector3_InitValue_ + 1);
      v189 = v37;
    }
    if ( !byte_B3BAA8 )
    {
      if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None
        && !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
        && !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this)
        && !sub_5E1030(this) )
      {
        v38 = GameSetting_GetSafeFloatPointer((int *)&fActorAnimZAdjust);
        v189 = *(float *)v38 + v189;
      }
      v39 = LODWORD(v190);
      v40 = v189;
      *(float *)(LODWORD(v190) + 0x54) = v32;
      *(_DWORD *)(v39 + 0x58) = v33;
      *(float *)(v39 + 0x5C) = v40;
    }
    v36 = BaseCalcAVi;
    NiMatrix33_InitRotationTransform(v202, BaseCalcAVi);
    if ( v195 != 0.0 )
    {
      v36 = 0.0;
      if ( 0.0 != *(float *)(LODWORD(v195) + 0x32C) )
      {
        v36 = *(float *)(LODWORD(v195) + 0x32C);
        NiMatrix33_InitRotationTransposedTransform___(v203, *(float *)(LODWORD(v195) + 0x32C));
        qmemcpy(v202, NiMAtrix33_Multiply(v202, v204, v203), sizeof(v202));
      }
    }
    v41 = sub_4D7C50(this, v204, v202, 0);
    v42 = LODWORD(v190) + 0x30;
    qmemcpy((void *)(LODWORD(v190) + 0x30), v41, 0x24u);
    v33 = v42 + 0x24;
  }
  v43 = sub_4D7FC0(this);
  if ( v43 )
  {
    Destructor = v43->Destructor;
    if ( Destructor )
    {
      a4b = (int)Destructor;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C6FF0(ShadowSceneNode, a4b);
    }
  }
  if ( v10 )
  {
    sub_471C00(v10, this);
    if ( !v184 )
    {
      if ( sub_5E1030(this) )
      {
        v46 = (MobileObject *)this->vtbl->GetMountedHorse(this);
        v33 = (int)MobileObject_GetCharProxy(v46);
        if ( v33 )
        {
          v47 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v10->manager + 0x1F) + 0x4C))(
                  *((_DWORD *)v10->manager + 0x1F),
                  "Bip01 Spine");
          *(float *)&v48 = COERCE_FLOAT(
                             (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v10->manager + 0x1F) + 0x4C))(
                               *((_DWORD *)v10->manager + 0x1F),
                               "Bip01 Spine1"));
          v190 = *(float *)&v48;
          if ( v47 )
          {
            if ( *(float *)&v48 != 0.0 )
            {
              *(float *)&WaterHeight = *(float *)(v33 + 0x32C) * dbl_A2FAA0;
              v36 = *(float *)&WaterHeight;
              NiMatrix33_InitRotationTransform(v203, *(float *)&WaterHeight);
              qmemcpy(v202, (const void *)(v47 + 0x30), sizeof(v202));
              v49 = NiMAtrix33_Multiply(v202, v204, v203);
              v50 = v190;
              qmemcpy((void *)(v47 + 0x30), v49, 0x24u);
              LODWORD(v50) += 0x30;
              qmemcpy(v202, (const void *)LODWORD(v50), sizeof(v202));
              v51 = NiMAtrix33_Multiply(v202, v204, v203);
              qmemcpy(v202, v51, sizeof(v202));
              v52 = v50;
              v10 = v197;
              qmemcpy((void *)LODWORD(v52), v51, 0x24u);
              v33 = LODWORD(v52) + 0x24;
            }
          }
        }
      }
    }
    if ( this->members.DeadState != 3
      && (!this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) || this->members.DeadState == 1)
      && !sub_5E0F30(this)
      && !v184
      && !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this) )
    {
      v36 = sub_603500((int *)this, (TESObjectREFR *)v33, st5_0, flt_B33E9C, a3, SLODWORD(flt_B33E9C));
    }
    ActorAnimData::ApplyActorAnimData(v10);
    switch ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) )
    {
      case kSitSleep_SittingIn:
      case kSitSleep_SittingOut:
      case kSitSleep_SleepingIn:
      case kSitSleep_SleepingOut:
        v53 = *((_DWORD *)&Vector3_InitValue_ + 1);
        v54 = dword_B3F9B0;
        *(float *)&Distance = Vector3_InitValue_;
        v55 = this->vtbl;
        HIDWORD(Distance) = v53;
        GetScale = v55->super.super.GetScale;
        v189 = v54;
        v190 = GetScale((TESObjectREFR *)this);
        v36 = 1.0;
        if ( 1.0 != v190 )
        {
          sub_4723A0(
            (float *)&v10->unk00,
            a3,
            (float *)&Distance,
            this,
            (this->members.super.super.super.flags & 0x10) != 0,
            0);
          a3 = v189;
          v36 = v189;
          if ( v189 != 0.0 )
          {
            a3 = v189;
            st5_0 = v190;
            GetPos = this->vtbl->super.super.GetPos;
            *(float *)&WaterHeight = v36 - v36 * v190;
            v58 = (int)GetPos((TESObjectREFR *)this);
            *((float *)&WaterHeight + 1) = *(float *)(v58 + 8) - *((float *)&WaterHeight + 1);
            v36 = *((float *)&WaterHeight + 1);
            sub_4D8A60(*((float *)&WaterHeight + 1));
          }
        }
        break;
      default:
        break;
    }
  }
  byte_B3CBD0 = 0;
  if ( !v184 )
  {
    if ( v195 == 0.0 || InterfaceManager_IsMenuMode() || this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) )
      goto LABEL_209;
    a4c = flt_A34BA0;
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    IsUnderwater = Actor_IsUnderwater__(this, (int)this->members.super.super.pos, (ExtraDataList *)ParentCell, a4c);
    a4d = flt_A41724;
    v186 = IsUnderwater;
    v61 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    v62 = Actor_IsUnderwater__(this, (int)this->members.super.super.pos, (ExtraDataList *)v61, a4d);
    a4e = flt_A6E688;
    v187 = v62;
    v63 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    v185 = Actor_IsUnderwater__(this, (int)this->members.super.super.pos, (ExtraDataList *)v63, a4e);
    v64 = this->vtbl->GetActorValue(this, kActorVal_Endurance);
    v65 = Actor_CalcMaxBreath(v64);
    v190 = v65;
    if ( LOBYTE(this->members.unk0D8[0]) || (v192 = 1, !IsUnderwater) )
      v192 = 0;
    IsDead = this->vtbl->super.super.IsDead;
    LOBYTE(this->members.unk0D8[0]) = IsUnderwater;
    if ( !IsDead((TESObjectREFR *)this, 0) )
    {
      if ( sub_5EA680(this) )
        LOBYTE(v10) = !v185 || (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x800) == 0;
      else
        LOBYTE(v10) = v185;
      if ( this == (Actor *)TESDataHandler_g_PlayerRef && GetGodMode() || (_BYTE)v10 )
      {
        v65 = v190;
        ((void (__stdcall *)(_DWORD))this->members.super.process->Unk_7B)(LODWORD(v190));
      }
      else
      {
        BaseCalcAVi = ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_7C)(this->members.super.process);
        v67 = this->vtbl->GetActorValue(this, kActorVal_WaterBreathing);
        v68 = BaseCalcAVi;
        v69 = flt_B33E9C;
        if ( v67 )
          v70 = v68 + v69;
        else
          v70 = v68 - v69;
        v71 = v70;
        v72 = flt_B33E9C;
        BaseCalcAVi = v71;
        st5_0 = BaseCalcAVi;
        if ( BaseCalcAVi >= 0.0 )
        {
          if ( v190 < st5_0 )
            BaseCalcAVi = v190;
          *(float *)&Distance = sub_5E3920((TESObjectREFR *)this);
          v80 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
          WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)v80);
          v81 = this->vtbl->super.super.GetPos(this);
          *(float *)&WaterHeight = WaterHeight - v81[2];
          *(float *)&Distance = *(float *)&WaterHeight / *(float *)&Distance;
          a3 = *(float *)&Distance + dbl_A2F928;
          if ( a3 > BaseCalcAVi && !sub_5E1E90(this) && !sub_5E6FE0(this) )
            sub_5F5730(this);
        }
        else
        {
          v73 = this->vtbl;
          a3 = v72;
          *(float *)&WaterHeight = v72;
          v74 = Actor_GetBaseCalcAVi((int *)this, (int)v10, v33, (int)v73, 8);
          v75 = sub_548980(v74);
          ApplyDamage = v73->ApplyDamage;
          *(float *)&WaterHeight = v75 * *(float *)&WaterHeight;
          v77 = *(float *)&WaterHeight;
          ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))ApplyDamage)(this, LODWORD(WaterHeight), 0.0, 0);
          v78 = sub_65A970(this, "NPCHumanDrowning", 0, 0x102, 0);
          v79 = (unsigned int)v78;
          if ( v78 )
          {
            sub_6B73E0(v78);
            FormHeapFree(v79);
          }
          Actor_PlayPainFX((TESObjectREFR *)this, st5_0, v77, a3, (int *)1, 1);
          BaseCalcAVi = 0.0;
        }
        v65 = BaseCalcAVi;
        ((void (__stdcall *)(_DWORD))this->members.super.process->Unk_7B)(LODWORD(BaseCalcAVi));
      }
    }
    if ( this != (Actor *)TESDataHandler_g_PlayerRef )
    {
      v83 = v186;
      goto LABEL_152;
    }
    OpenMenuTile = Menu_GetOpenMenuTile(0x415);
    v83 = v186;
    v33 = OpenMenuTile;
    if ( v186 )
    {
      if ( !OpenMenuTile )
        v33 = (int)sub_5965C0(st5_0, v65, a3);
    }
    if ( v185 )
    {
      v84 = byte_B3B77D;
      if ( byte_B3B77D )
        goto LABEL_148;
      sub_5964E0();
      v84 = 1;
    }
    else
    {
      if ( !v33 )
        goto LABEL_153;
      if ( !v83 )
      {
        ParentMenu = (void (__thiscall ***)(_DWORD, int))Tile_GetParentMenu((_DWORD *)v33);
        if ( ParentMenu )
          (**ParentMenu)(ParentMenu, 1);
        byte_B3B77D = 0;
        goto LABEL_153;
      }
      v84 = byte_B3B77D;
      if ( !byte_B3B77D )
        goto LABEL_148;
      *(float *)&Distance = sub_596470();
      if ( flt_A34BA0 > (double)*(float *)&Distance )
      {
        if ( Actor_IsFemale(this) )
          v86 = sub_65A970(this, "NPCHumanGaspFemale", 0, 0x102, 1);
        else
          v86 = sub_65A970(this, "NPCHumanGaspMale", 0, 0x102, 1);
        v87 = (unsigned int)v86;
        if ( v86 )
        {
          sub_6B73E0(v86);
          FormHeapFree(v87);
        }
      }
      sub_5964B0(st5_0, a3);
      v84 = 0;
    }
    byte_B3B77D = v84;
LABEL_148:
    if ( v33 )
    {
      if ( v84 )
      {
        v88 = ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_7C)(this->members.super.process);
        *(float *)&Distance = v88 / v190;
        sub_596550(*(float *)&Distance);
      }
    }
LABEL_152:
    if ( v185 )
    {
LABEL_154:
      if ( !Actor_CanFly(this) )
      {
        v36 = flt_A5742C;
        goto LABEL_157;
      }
LABEL_155:
      v36 = flt_A2FAAC;
LABEL_157:
      v89 = (__m128 *)LODWORD(v195);
      *(float *)(LODWORD(v195) + 0x338) = v36;
      if ( this->vtbl->GetActorValue(this, kActorVal_WaterWalking) || Actor_CanFly(this) )
      {
        if ( v187 )
          sub_5E0610(this, 0x800);
        else
          sub_5E05F0(this, 0x800);
        v33 = (int)&v89[0x1E];
        if ( sub_88D370((__m128 *)v89[0x1E].m128_i32) != 5 || v83 )
        {
          if ( sub_88D370((__m128 *)v89[0x1E].m128_i32) != 5 )
          {
            if ( v83 )
            {
              v36 = 1.0;
              if ( v89[0x2E].m128_f32[2] < 1.0 )
                v89[0x2A].m128_i32[0] = 5;
            }
          }
        }
        else
        {
          v89[0x2A].m128_i32[0] = 0;
        }
        if ( sub_88D370((__m128 *)v89[0x1E].m128_i32) == 5 )
        {
          v36 = flt_A34BA0;
          if ( v36 > v89[0x30].m128_f32[0] )
          {
            if ( !v186 )
            {
LABEL_209:
              v112 = this == (Actor *)TESDataHandler_g_PlayerRef;
              LOBYTE(v190) = 0;
              if ( !v112 )
                LOBYTE(v190) = this->vtbl->IsInCombat(this, 1);
              if ( sub_5E6CD0((TESObjectREFR *)this, 0)
                || this == (Actor *)TESDataHandler_g_PlayerRef
                || !this->vtbl->super.super.GetAnimData(this)
                || (v113 = this->vtbl->super.super.GetAnimData(this), !sub_472EA0(v113))
                || this->members.DeadState == 3
                || this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
                || sub_5E0F30(this)
                || this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this)
                || Actor_IsSneaking(TESDataHandler_g_PlayerRef)
                || ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_90)(this->members.super.process)
                || TESDataHandler_g_PlayerRef->vtbl->super.IsTresspassing((Actor *)TESDataHandler_g_PlayerRef)
                || !sub_5E32D0(this)
                || ((int (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->GetUnk220Element)(
                     this->members.super.process,
                     0)
                || ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_7F)(this->members.super.process)
                || LOBYTE(TESDataHandler_g_PlayerRef->unk600) )
              {
                v119 = this->members.super.process;
                if ( v119 )
                {
                  if ( ((unsigned __int8 (__thiscall *)(LowProcess *))v119->Unk_7F)(v119) )
                  {
                    v120 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetUnk278)(this->members.super.process);
                    v121 = this->members.super.process;
                    SayTopic = v121->SayTopic;
                    LOBYTE(WaterHeight) = v120;
                    LOBYTE(Distance) = bBackgroundLoadLipFiles;
                    SayTopic(v121, this, 0, 0, LODWORD(WaterHeight), LODWORD(Distance));
                  }
                }
              }
              else if ( Actor_GetDetectionLevel(
                          (TESObjectREFR *)this,
                          v33,
                          st5_0,
                          a3,
                          v36,
                          0,
                          (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                          &v192,
                          SLODWORD(v190),
                          0,
                          0,
                          v183) > 0
                     && this != (Actor *)TESDataHandler_g_PlayerRef
                     && (PlayerCharacter *)sub_5EAE10((TESObjectREFR *)this) != TESDataHandler_g_PlayerRef )
              {
                if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_12F)(this->members.super.process) )
                {
                  Distance = TesObjectREF_GetDistance(
                               (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                               (TESObjectREFR *)this,
                               0);
                  v36 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AD8);
                  if ( v36 >= Distance && !PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) )
                  {
                    v114 = this->members.super.process;
                    if ( v114 )
                    {
                      editorPackage = v114->editorPackage;
                      if ( (!editorPackage || (editorPackage->members.packageFlags & 0x1000) == 0)
                        && !sub_5E0E80(this)
                        && !this->vtbl->IsInCombat(this, 1)
                        && !sub_5E6BA0(this)
                        && (!sub_5E6B40(v116) || sub_5E05B0(this)) )
                      {
                        v36 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process);
                        if ( v36 <= *(float *)&SrcStr )
                        {
                          if ( TESDataHandler_g_PlayerRef )
                          {
                            v117 = (BSSimpleList_VoidPtr *)TESTopic::GEtTopic(1, 0);
                            v118 = (TESTopic *)v117;
                            if ( v117 )
                            {
                              if ( v117 != (BSSimpleList_VoidPtr *)0xFFFFFFD8 && !BSSimpleList_IsEmpty(v117 + 5) )
                              {
                                ((void (__thiscall *)(LowProcess *, PlayerCharacter *))this->members.super.process->Unk_120)(
                                  this->members.super.process,
                                  TESDataHandler_g_PlayerRef);
                                this->members.unk0E4 = (Actor *)TESDataHandler_g_PlayerRef;
                                LOBYTE(Distance) = bBackgroundLoadLipFiles;
                                this->members.super.process->SayTopic(
                                  this->members.super.process,
                                  this,
                                  v118,
                                  0,
                                  1,
                                  LODWORD(Distance));
                                if ( !((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) )
                                  ((void (__thiscall *)(LowProcess *, Actor *, int))this->members.super.process->Unk_55)(
                                    this->members.super.process,
                                    this,
                                    1);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( this->vtbl->super.IsDead((MobileObject *)this) && v197 )
              {
                v187 = 1;
                v123 = ActorAnimData_GetAnimGroupFromField8Value(v197, 0);
                v124 = sub_51AA00(v123) == 0x20;
                v36 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process);
                if ( v36 != dbl_A3A5B0 )
                {
                  v36 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process);
                  if ( v36 > *(float *)&SrcStr )
                  {
                    v125 = this->members.super.process;
                    v126 = v125->__vftable;
                    *(float *)&Distance = flt_B33E9C;
                    v127 = ((double (__thiscall *)(LowProcess *))v126->GetUnk22C)(v125);
                    SetUnk22C = v126->SetUnk22C;
                    *(float *)&Distance = v127 - *(float *)&Distance;
                    v36 = *(float *)&Distance;
                    ((void (__thiscall *)(LowProcess *, _DWORD))SetUnk22C)(v125, LODWORD(Distance));
                  }
                  else
                  {
                    sub_5E9E70((TESObjectREFR *)this);
                  }
                }
                if ( !v124 )
                {
                  *(float *)&WaterHeight = this->members.super.process->GetCurHour(this->members.super.process);
                  *(float *)&Distance = TimeGlobals_GetGameHour(&TimeGlobals);
                  v129 = *(float *)&Distance;
                  a3 = *(float *)&WaterHeight;
                  if ( *(float *)&WaterHeight <= (double)*(float *)&Distance )
                  {
                    v130 = v129 - a3;
                  }
                  else
                  {
                    a3 = a3 + dbl_A492B8;
                    v130 = a3 - v129;
                  }
                  v190 = v130;
                  Distance = v190;
                  v36 = sub_4029D0(&TimeGlobals) * dbl_A6EDD8;
                  v187 = v36 > Distance;
                }
                v131 = v197;
                AccumNode = v197->AccumNode;
                if ( AccumNode )
                {
                  v133 = (int)AccumNode->vtbl->super.super.Unk_02((NiObject *)AccumNode);
                  if ( v133 )
                  {
                    v36 = sub_88FA30(v133);
                    if ( v36 <= *(float *)&SrcStr )
                    {
                      if ( this == (Actor *)TESDataHandler_g_PlayerRef )
                      {
                        AnimData = (ActorAnimData *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
                        sub_475440(AnimData, 1, 0);
                        v135 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
                        sub_470FC0(v135, 5, 0.0);
                        v136 = (float *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
                        v136[6] = Vector3_InitValue_;
                        v136[7] = *(&Vector3_InitValue_ + 1);
                        v136[8] = dword_B3F9B0;
                        v137 = (ActorAnimData *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                        sub_475440(v137, 1, 0);
                        v36 = 0.0;
                        v138 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                        sub_470FC0(v138, 5, 0.0);
                        v139 = (float *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                        v139[6] = Vector3_InitValue_;
                        v139[7] = *(&Vector3_InitValue_ + 1);
                        v139[8] = dword_B3F9B0;
                      }
                      else
                      {
                        sub_475440(v131, 1, 0);
                        v36 = 0.0;
                        sub_470FC0(v131, 5, 0.0);
                        *(float *)&v131->unk18 = Vector3_InitValue_;
                        v131->unk1C = *(UInt32 *)(&Vector3_InitValue_ + 1);
                        *(float *)&v131->unk20 = dword_B3F9B0;
                      }
                      ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)(
                        this->members.super.process,
                        this);
                    }
                  }
                }
                v140 = v196;
                if ( v196 != 0.0
                  && !(*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v196) + 0x98))(COERCE_FLOAT(LODWORD(v196))) )
                {
                  v141 = this->members.super.process;
                  if ( !v141 || !((int (__thiscall *)(LowProcess *, _DWORD))v141->GetUnk220Element)(v141, 0) )
                    (*(void (__thiscall **)(float, int, _DWORD))(*(_DWORD *)LODWORD(v140) + 0x9C))(
                      COERCE_FLOAT(LODWORD(v140)),
                      1,
                      0);
                }
                if ( !v187 )
                {
                  v142 = 1;
                  if ( sub_470D00(v197, 0x20) )
                  {
                    if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) )
                      v142 = ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_9E)(this) != 0;
                  }
                  ((void (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Unk_27)(this, 1);
                  if ( v142 )
                    sub_4DC550(this);
                }
              }
              else if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) )
              {
                if ( ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process) == dbl_A3A5B0 )
                  ((void (__stdcall *)(_DWORD))this->members.super.process->SetUnk22C)(0.0);
                v143 = this->members.super.process;
                v144 = v143->__vftable;
                *(float *)&Distance = flt_B33E9C;
                v145 = ((double (__thiscall *)(LowProcess *))v144->GetUnk22C)(v143);
                v146 = v144->SetUnk22C;
                *(float *)&Distance = v145 - *(float *)&Distance;
                v36 = *(float *)&Distance;
                ((void (__thiscall *)(LowProcess *, _DWORD))v146)(v143, LODWORD(Distance));
              }
              ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_C5)(
                this->members.super.process,
                this);
              goto LABEL_284;
            }
            if ( !v187 )
            {
              *(float *)&Distance = v89[0x34].m128_f32[2];
              v105 = sub_531E00(v89);
              v36 = dbl_A2FC80;
              *(float *)&Distance = v105->z - *(float *)&Distance + *(float *)&Distance * v36 * v89[0x33].m128_f32[1];
              v106 = *(float *)&Distance;
              *(float *)&Distance = v89[0x31].m128_f32[2] - dbl_A3F3F0;
              st5_0 = *(float *)&Distance * hkFactor;
              *(float *)&Distance = st5_0;
              *(float *)&Distance = v106 - *(float *)&Distance;
              a3 = *(float *)&Distance;
              if ( *(float *)&Distance >= v36 )
              {
                if ( a3 > v36 )
                {
                  *(float *)&Distance = 0.0;
                  *((float *)&Distance + 1) = 0.0;
                  v189 = flt_A5A5F8;
                  v36 = 1.0;
                  sub_8907A0(v89, (int)&Distance, 1.0);
                }
              }
              else
              {
                *(float *)&Distance = 0.0;
                *((float *)&Distance + 1) = 0.0;
                v189 = flt_A31E2C;
                v36 = 1.0;
                sub_8907A0(v89, (int)&Distance, 1.0);
              }
            }
          }
        }
      }
      else if ( v187 )
      {
        if ( this->members.super.process->GetEquippedLightData(this->members.super.process, 1) )
        {
          v90 = this->members.super.process->GetEquippedLightData(this->members.super.process, 1);
          v36 = Actor_UnequipItem((PlayerCharacter *)this, v36, st5_0, a3, (char)v90->type, 1, 0, 0, 0, 0);
        }
        sub_5E0610(this, 0x800);
        v89[0x2A].m128_i32[0] = 5;
      }
      else if ( Actor_IsSwimming(this) || sub_88D370((__m128 *)v89[0x1E].m128_i32) == 5 )
      {
        if ( (v89[0x1F].m128_i32[1] & 0x100) != 0 )
        {
          sub_5E05F0(this, 0x800);
          v89[0x2A].m128_i32[0] = 0;
        }
      }
      else if ( v192 )
      {
        v36 = flt_A3D65C;
        if ( v36 < v89[0x32].m128_f32[1] )
        {
          v36 = flt_A30634;
          if ( v36 > v89[0x2E].m128_f32[2] )
          {
            *(float *)&Distance = v89[0x2E].m128_f32[2];
            v195 = 1.0;
            if ( *(float *)&Distance > dbl_A6EDF0 )
              v195 = *(float *)&Distance * dbl_A3D360 / dbl_A3F3D0;
            a3 = dbl_A30E48;
            *(float *)&Distance = pow(v195, a3);
            v36 = *(float *)&Distance;
            sound = OSGlobals->sound;
            v195 = *(float *)&Distance;
            if ( sound )
            {
              if ( this->vtbl->super.super.GetNiNode(this) )
              {
                v92 = PlaySound___(sound, "CWaterHumanoid", 0x102, 1);
                v93 = v92;
                if ( v92 )
                {
                  if ( !sub_6B7260(v92) )
                  {
                    v94 = this->vtbl->super.super.GetPos(this);
                    v95 = v94[1];
                    v96 = *v94;
                    v194 = v94[2];
                    WaterHeight = COERCE_DOUBLE(__PAIR64__(LODWORD(v95), LODWORD(v96)));
                    sub_6B7360(v93, v96, v95, v194);
                    v36 = v195;
                    sub_6B7280(v93, v195);
                    sub_6B7190(v93, 0);
                    sub_6B73E0(v93);
                    FormHeapFree((unsigned int)v93);
                    if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
                    {
                      v97 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                      if ( TESObjectCELL::GetWaterForm(v97) )
                      {
                        v98 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                        WaterForm = TESObjectCELL::GetWaterForm(v98);
                        if ( !((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) )
                        {
                          v100 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                          v36 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v100);
                          TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                          a3a = sub_4C9BE0((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                          v101 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                          v33 = sub_441800(v101, a3a, 3u);
                          v102 = (void *)FormHeapAlloc(0x20u);
                          LODWORD(Distance) = v102;
                          v206 = 0;
                          if ( v102 )
                          {
                            a3b = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37B40);
                            v36 = 1.0;
                            v173 = HIDWORD(WaterHeight);
                            v174 = (const char *)LODWORD(v194);
                            v170 = *(float *)&dword_B258DC;
                            v171 = *(float *)&qword_B258E0;
                            v172 = HIDWORD(qword_B258E0);
                            v169 = (const char *)LODWORD(dword_B37B38);
                            v103 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                            v104 = sub_5713F0(
                                     v102,
                                     (int)v103,
                                     1.0,
                                     v33,
                                     v169,
                                     v170,
                                     v171,
                                     v172,
                                     v96,
                                     v173,
                                     v174,
                                     a3b,
                                     1);
                          }
                          else
                          {
                            v104 = 0;
                          }
                          v206 = 0xFFFFFFFF;
                          sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v104);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v186 )
      {
        if ( !Actor_CanFly(this) )
        {
          v107 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
          if ( v107 )
          {
            v108 = TESObjectCELL::GetWaterForm(v107);
            v109 = v108;
            if ( v108 )
            {
              if ( ((unsigned __int8 (__thiscall *)(TESWaterForm *))v108->vtbl->Unk_22)(v108) )
              {
                if ( this->vtbl->GetActorValue(this, kActorVal_ResistWaterDamage) <= 0 )
                {
                  InitializeComponent = v109->damageForm.vtbl[1].InitializeComponent;
                  *(float *)&WaterHeight = flt_B33E9C;
                  v111 = ((int (__thiscall *)(TESAttackDamageForm *))InitializeComponent)(&v109->damageForm);
                  *(float *)&Distance = (double)v111 * *(float *)&WaterHeight;
                  v36 = 0.0;
                  a3 = *(float *)&Distance;
                  if ( *(float *)&Distance > 0.0 )
                  {
                    a3 = 0.0;
                    v36 = ((double (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))this->vtbl->ApplyDamage)(
                            this,
                            LODWORD(Distance),
                            0.0,
                            0);
                    Actor_PlayPainFX((TESObjectREFR *)this, st5_0, v36, 0.0, (int *)1, 1);
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_209;
    }
LABEL_153:
    if ( this->vtbl->GetActorValue(this, kActorVal_WaterWalking) )
      goto LABEL_155;
    goto LABEL_154;
  }
LABEL_284:
  if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_108)(this->members.super.process) )
    ((void (__thiscall *)(LowProcess *, Actor *, int, int, _DWORD))this->members.super.process->Unk_10A)(
      this->members.super.process,
      this,
      1,
      1,
      0);
  if ( TESDataHandler_g_PlayerRef != (PlayerCharacter *)this || (v36 = 0.0, 0.0 == a2) )
  {
    v147 = this->members.super.process;
    if ( v147 )
    {
      if ( !v147->GetProcessLevel(v147) )
        sub_633250((int)this->members.super.process, (int)this, st5_0, v36, a3, this);
    }
  }
  sub_5F12D0((MobileObject *)this);
  v148 = this->members.super.process;
  if ( v148 )
  {
    v149 = (float *)v148->GetCharProxy(v148, (bhkCharacterProxy **)&WaterHeight);
    v150 = 1;
    v206 = 1;
  }
  else
  {
    v196 = 0.0;
    v149 = &v196;
    v150 = 2;
  }
  v151 = *(_DWORD **)v149;
  if ( (v150 & 2) != 0 )
  {
    v150 &= ~2u;
    LODWORD(Distance) = v150;
    sub_7016A0((NiD3DVertexShader *)&v196);
  }
  v206 = 0xFFFFFFFF;
  if ( (v150 & 1) != 0 )
    sub_7016A0((NiD3DVertexShader *)&WaterHeight);
  v152 = this->vtbl->super.super.GetNiNode(this);
  v153 = TESDataHandler_g_PlayerRef;
  v154 = (int)v152;
  if ( this == (Actor *)TESDataHandler_g_PlayerRef || !v152 )
    goto LABEL_315;
  if ( v153->isThirdPerson && (v155 = P3Camera) != 0 || (v155 = CameraP1) != 0 )
  {
    v156 = *(float *)(v155 + 0x88);
    v157 = *(_DWORD *)(v155 + 0x8C);
    v158 = *(float *)(v155 + 0x90);
  }
  else
  {
    pos = v153->super.super.super.super.pos;
    a3c = sub_5E40C0(v153);
    v160 = sub_47DA10((float *)v201, a3c, (float *)&dword_B258E8);
    v161 = sub_47D9B0(pos, v205, v160);
    v156 = *v161;
    v157 = *((_DWORD *)v161 + 1);
    v158 = v161[2];
  }
  Distance = COERCE_DOUBLE(__PAIR64__(v157, LODWORD(v156)));
  v198[0] = *(_DWORD *)(v154 + 0x20);
  v162 = v156 - *(float *)v198;
  v163 = *(float *)(v154 + 0x2C);
  v164 = *(float *)(v154 + 0x24);
  *(float *)v201 = v162;
  *(float *)&v198[1] = v164;
  v189 = v158;
  v199 = *(float *)(v154 + 0x28);
  *(float *)&v201[1] = *((float *)&Distance + 1) - v164;
  v200 = v163;
  *(float *)&v201[2] = v158 - v199;
  v165 = sub_404C90((float *)v201);
  v166 = v200 * dbl_A3FA98;
  v167 = 0;
  LOBYTE(v197) = 0;
  v196 = v165 - v166;
  if ( sub_435CC0((int)dword_B35288, v154) )
  {
    *(float *)&Distance = SettingLODFadeOutMultActors * flt_B075F0;
    *(float *)&Distance = v196 / *(float *)&Distance;
    *(float *)&Distance = *(float *)&Distance * *(float *)&Distance;
    v167 = *(float *)(v154 + 0xE4) < (double)*(float *)&Distance;
    LOBYTE(v197) = v167;
  }
  inited = InitBSShaderAccumulator();
  if ( inited )
  {
    if ( *((_DWORD *)inited + 0x88A) )
    {
      if ( v167 || (LOBYTE(v190) = 1, v196 <= 0.0) )
        LOBYTE(v190) = 0;
      sub_7ABD00(inited, this->members.super.super.super.refID, (int)v198, v190);
    }
  }
  if ( v151 )
  {
    sub_5EA2F0(v151, (char)v197);
LABEL_315:
    if ( v151 )
      sub_5EA320(v151, byte_B333B8);
  }
}
