void __userpurge sub_603CA0(Actor *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, float a2)
{
  int v6; // edi
  int v7; // eax
  LowProcess *process; // ecx
  int v9; // esi
  ActorAnimData *v10; // ebx
  LowProcess *v11; // ebp
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned __int16 v13; // ax
  bhkCharacterProxy *CharProxy; // eax
  int v15; // eax
  LowProcess *v16; // ecx
  int *SafeFloatPointer; // eax
  double v18; // st7
  float (__thiscall *GetAV_F)(Actor *, AVCode); // eax
  double v20; // st7
  ActorVtbl *vtbl; // edx
  void (__thiscall *DamageAV_F)(Actor *, UInt32, float, Actor *); // eax
  LowProcess *v23; // ecx
  int v24; // esi
  char v25; // al
  ActorVtbl *v26; // edx
  int v27; // eax
  ActorVtbl *v28; // esi
  Creature *v29; // eax
  float *v30; // eax
  float x; // esi
  float y; // edi
  int v33; // eax
  double v34; // st7
  double v35; // st7
  float v36; // eax
  int *v37; // eax
  int v38; // eax
  float v39; // ecx
  float *v40; // eax
  int v41; // edi
  BSExtraDataVtbl *v42; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  MobileObject *v45; // eax
  int v46; // esi
  int v47; // eax
  float *v48; // eax
  float v49; // ebx
  float *v50; // eax
  float v51; // edi
  float v52; // eax
  float v53; // ecx
  ActorVtbl *v54; // edx
  float (__thiscall *GetScale)(TESObjectREFR *); // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v57; // eax
  ExtraDataList *DwordAtOffset40; // eax
  char IsUnderwater; // bl
  ExtraDataList *v60; // eax
  char v61; // al
  ExtraDataList *v62; // eax
  signed int v63; // eax
  double v64; // st7
  bool (__thiscall *IsDead)(TESObjectREFR *, char); // edx
  SInt32 v66; // eax
  double v67; // st7
  double v68; // st5
  double v69; // st7
  double v70; // st6
  double v71; // st7
  ActorVtbl *v72; // esi
  signed int v73; // eax
  double v74; // st7
  void (__thiscall *ApplyDamage)(Actor *, float, float, Actor *); // eax
  double v76; // st7
  _DWORD *v77; // eax
  unsigned int v78; // esi
  ExtraDataList *v79; // eax
  float *v80; // eax
  int v81; // eax
  char v82; // bl
  char v83; // al
  void (__thiscall ***ParentMenu)(_DWORD, int); // eax
  _DWORD *v85; // eax
  unsigned int v86; // esi
  double v87; // st7
  __m128 *v88; // esi
  EntryData *v89; // eax
  int *sound; // esi
  UInt32 *v91; // eax
  int *v92; // esi
  float *v93; // eax
  float v94; // ecx
  float v95; // ebx
  TESObjectCELL *v96; // eax
  TESObjectCELL *v97; // eax
  TESWaterForm *WaterForm; // eax
  ExtraDataList *v99; // eax
  TESObjectCELL *v100; // eax
  BSTempEffectParticle *v101; // esi
  TESObjectCELL *v102; // eax
  BSTempEffectParticle *v103; // eax
  hkVector4 *v104; // eax
  double v105; // st6
  TESObjectCELL *v106; // eax
  TESWaterForm *v107; // eax
  TESWaterForm *v108; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // eax
  unsigned __int16 v110; // ax
  bool v111; // zf
  ActorAnimData *v112; // eax
  int v113; // eax
  LowProcess *v114; // eax
  TESPackage *editorPackage; // eax
  _DWORD **v116; // ecx
  TESTopic *Topic; // eax
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
  ActorAnimData *AnimDataByPerspective; // eax
  ActorAnimData *v135; // eax
  float *v136; // eax
  ActorAnimData *v137; // eax
  ActorAnimData *v138; // eax
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
  UInt32 v150; // ebx
  _DWORD *v151; // edi
  NiNode *v152; // eax
  PlayerCharacter *v153; // ecx
  int v154; // esi
  int v155; // eax
  float v156; // ecx
  UInt32 v157; // edx
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
  BSShaderAccumulator *Global; // eax
  const char *v169; // [esp+74h] [ebp-10Ch]
  float v170; // [esp+78h] [ebp-108h]
  float v171; // [esp+7Ch] [ebp-104h]
  float v172; // [esp+80h] [ebp-100h]
  float v173; // [esp+88h] [ebp-F8h]
  char *unknownChildName; // [esp+8Ch] [ebp-F4h]
  signed int a3a; // [esp+90h] [ebp-F0h]
  float a3b; // [esp+90h] [ebp-F0h]
  float a3c; // [esp+90h] [ebp-F0h]
  float a4a; // [esp+94h] [ebp-ECh]
  void (__thiscall *a4b)(BSExtraData *); // [esp+94h] [ebp-ECh]
  float a4c; // [esp+94h] [ebp-ECh]
  float a4d; // [esp+94h] [ebp-ECh]
  float a4e; // [esp+94h] [ebp-ECh]
  char v183; // [esp+98h] [ebp-E8h]
  char v184; // [esp+ADh] [ebp-D3h]
  char v185; // [esp+ADh] [ebp-D3h]
  char v186; // [esp+AEh] [ebp-D2h] BYREF
  bool v187; // [esp+AFh] [ebp-D1h]
  UInt32 unknownChildTag[2]; // [esp+B0h] [ebp-D0h] BYREF
  float z; // [esp+B8h] [ebp-C8h]
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

  *(float *)&v6 = 0.0; /*0x603ccf*/
  unknownChildTag[0] = 0; /*0x603cd1*/
  *(float *)&v7 = COERCE_FLOAT( /*0x603cde*/
                    ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->super.super.GetNiNode)(
                      this,
                      a4,
                      a3,
                      st5_0));
  process = this->members.super.process; /*0x603ce0*/
  v9 = v7; /*0x603ce5*/
  v190 = *(float *)&v7; /*0x603ce7*/
  if ( process ) /*0x603ceb*/
  {
    *(float *)&v6 = COERCE_FLOAT(process->Unk_39(process, (UInt32)this)); /*0x603cf8*/
    v196 = *(float *)&v6; /*0x603cfa*/
  }
  else
  {
    v196 = 0.0; /*0x603d00*/
  }
  v195 = COERCE_FLOAT(MobileObject_GetCharProxy((MobileObject *)this)); /*0x603d0b*/
  v10 = this->vtbl->super.super.GetAnimData(this); /*0x603d1e*/
  v197 = v10; /*0x603d20*/
  if ( !v9 || !Shared_GetDwordAtOffset40(this) || *(_BYTE *)(Shared_GetDwordAtOffset40(this) + 0x26) != 6 ) /*0x603d44*/
    return; /*0x603d44*/
  if ( a2 >= dbl_A6C820 ) /*0x603d5c*/
  {
    v11 = this->members.super.process; /*0x603d5e*/
    if ( v11 ) /*0x603d63*/
      ((void (__thiscall *)(LowProcess *, int))v11->Unk_11C)(v11, 1); /*0x603d76*/
    return; /*0x603d78*/
  }
  if ( this != (Actor *)reference || (v184 = 1, reference->isThirdPerson) ) /*0x603d86*/
    v184 = 0; /*0x603d94*/
  if ( MobileObject_GetCharProxy((MobileObject *)this) ) /*0x603d9b*/
  {
    v186 = 0; /*0x603da6*/
    if ( v10 ) /*0x603dab*/
    {
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v10, 3); /*0x603db1*/
      v9 = AnimGroupFromField8Value; /*0x603db6*/
      if ( AnimGroup_UsesPowerOrCastNoteTemplate(AnimGroupFromField8Value) && AnimKey_GetGroupID(v9) < 0x1A /*0x603df9*/
        || (v13 = ActorAnimData_GetAnimGroupFromField8Value(v10, 1), v9 = v13,
                                                                     AnimGroup_UsesPowerOrCastNoteTemplate(v13))
        && AnimKey_GetGroupID(v9) < 0x1A )
      {
        v186 = 1; /*0x603dfb*/
      }
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x603e02*/
    if ( CharProxy ) /*0x603e09*/
      v15 = (int)CharProxy + 0x1F0; /*0x603e0b*/
    else
      v15 = 0; /*0x603e12*/
    sub_5E14E0(v15, &v186); /*0x603e1b*/
  }
  v16 = this->members.super.process; /*0x603e20*/
  if ( v16 ) /*0x603e25*/
  {
    ((void (__thiscall *)(LowProcess *, Actor *))v16->Unk_BC)(v16, this); /*0x603e34*/
    ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_10F)( /*0x603e42*/
      this->members.super.process,
      this);
    if ( bHealthBarShowing_Gameplay ) /*0x603e44*/
      this->members.super.process->Unk_18(this->members.super.process, (UInt32)this); /*0x603e56*/
    if ( (this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sleeping /*0x603e81*/
       || this->members.DeadState == 3)
      && *(float *)&v6 != 0.0
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x98))(v6) )
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 0x9C))(v6, 1, 0); /*0x603e95*/
    }
    if ( this->members.DeadState == 6 /*0x603ec6*/
      && (((int (__thiscall *)(LowProcess *))this->members.super.process->GetKnockedState)(this->members.super.process) == 3
       || ((int (__thiscall *)(LowProcess *))this->members.super.process->GetKnockedState)(this->members.super.process) == 1) )
    {
      this->members.super.process->UpdateUnk088(this->members.super.process); /*0x603ed7*/
      if ( ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk088)(this->members.super.process) <= *(float *)&SrcStr ) /*0x603ef1*/
      {
        Actor_HandleDeathState(this, 0); /*0x603ef7*/
        BaseCalcAVi = (float)Actor_GetBaseCalcAVi((int *)this, (int)v10, v6, v9, 8); /*0x603f12*/
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)unk_B37D10); /*0x603f16*/
        v18 = *(float *)SafeFloatPointer * BaseCalcAVi; /*0x603f20*/
        GetAV_F = this->vtbl->GetAV_F; /*0x603f24*/
        BaseCalcAVi = v18; /*0x603f2e*/
        v20 = ((double (__thiscall *)(Actor *, int))GetAV_F)(this, 8); /*0x603f32*/
        vtbl = this->vtbl; /*0x603f34*/
        *(float *)&WaterHeight = v20; /*0x603f37*/
        DamageAV_F = vtbl->DamageAV_F; /*0x603f3f*/
        BaseCalcAVi = BaseCalcAVi - *(float *)&WaterHeight; /*0x603f4e*/
        ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))DamageAV_F)(this, 8, LODWORD(BaseCalcAVi), 0); /*0x603f5b*/
      }
    }
  }
  if ( this != (Actor *)reference ) /*0x603f63*/
  {
    v23 = this->members.super.process; /*0x603f69*/
    v24 = 0; /*0x603f6c*/
    if ( v23 ) /*0x603f70*/
      v24 = (int)v23->GetCurrentPackage(v23); /*0x603f7c*/
    if ( !this->vtbl->IsInCombat(this, 1) && (!v24 || *(_BYTE *)(v24 + 0x20) != 8) && Actor_IsBlocking(this) ) /*0x603f9d*/
      Actor_UpdateBlockingState(this, 0); /*0x603faa*/
    if ( BYTE1(this->members.unk0B4[5]) || v24 && (*(_DWORD *)(v24 + 0x1C) & 0x20000) != 0 )// 3DTheft decode: non-player actor update enforces current package AlwaysSneak (packageFlags bit 0x20000) by calling Actor_SetMovementFlag(actor, 0x400). If absent and Actor_IsSneaking is true, it clears 0x400. /*0x603fc5*/
    {
      sub_5E0610(this, 0x400);                  // 3DTheft decode: Actor_SetMovementFlag(actor, 0x400) is the observed engine transition from AlwaysSneak package flag to sneak movement flag. /*0x603fe7*/
    }
    else if ( Actor_IsSneaking(this) ) /*0x603fc9*/
    {
      sub_5E05F0(this, 0x400); /*0x603fd9*/
    }
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) != 2 ) /*0x603ffc*/
    sub_5E0CE0(this, (int)this); /*0x604001*/
  v25 = sub_5E1030(this); /*0x604008*/
  v26 = this->vtbl; /*0x60400f*/
  if ( v25 ) /*0x604014*/
  {
    v27 = (int)v26->GetMountedHorse(this); /*0x60401c*/
    v28 = this->vtbl; /*0x604020*/
    a4a = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v27 + 0x1E0))(v27); /*0x604036*/
    ((void (__thiscall *)(Actor *, _DWORD))v28->super.Unk_7A)(this, LODWORD(a4a)); /*0x604039*/
    v29 = this->vtbl->GetMountedHorse(this); /*0x604046*/
    v30 = v29->__vftable->super.super.GetPos((TESObjectREFR *)v29); /*0x604052*/
    TESObjectREFR_SetPosition((TESObjectREFR *)this, *v30, v30[1], v30[2]); /*0x60406b*/
  }
  else if ( ((int (__thiscall *)(Actor *))v26->Unk_E2)(this) ) /*0x604078*/
  {
    unk_B3CBD0 = 1; /*0x60407e*/
  }
  x = this->members.super.super.pos[0]; /*0x60408a*/
  y = this->members.super.super.pos[1]; /*0x60408d*/
  if ( v184 ) /*0x604090*/
  {
    z = this->members.super.super.pos[2]; /*0x604095*/
    if ( sub_5E1030(this) ) /*0x60409b*/
    {
      x = g_zeroNiPoint3.x; /*0x6040aa*/
      y = g_zeroNiPoint3.y; /*0x6040b0*/
      z = g_zeroNiPoint3.z; /*0x6040b6*/
    }
    v33 = LODWORD(v190); /*0x6040c5*/
    *(float *)&WaterHeight = reference->firstPersonNiNodeTranslateZ; /*0x6040c9*/
    *(float *)(LODWORD(v190) + 0x54) = x; /*0x6040cd*/
    v34 = *(float *)&WaterHeight; /*0x6040d0*/
    *(float *)(v33 + 0x58) = y; /*0x6040d4*/
    v35 = v34 + z; /*0x6040d7*/
    z = v35; /*0x6040db*/
    *(float *)(v33 + 0x5C) = z; /*0x6040e3*/
    sub_660130((TESObjectREFR *)reference); /*0x6040ec*/
  }
  else
  {
    z = this->members.super.super.pos[2]; /*0x6040fb*/
    BaseCalcAVi = MobileObject_GetZRotation((MobileObject *)this); /*0x604104*/
    if ( sub_5E1030(this) ) /*0x60410a*/
    {
      v36 = g_zeroNiPoint3.z; /*0x604115*/
      x = g_zeroNiPoint3.x; /*0x60411a*/
      BaseCalcAVi = 0.0; /*0x604120*/
      y = g_zeroNiPoint3.y; /*0x604124*/
      z = v36; /*0x60412a*/
    }
    if ( !unk_B3BAA8 ) /*0x60412e*/
    {
      if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None /*0x60416d*/
        && !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
        && !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this)
        && !sub_5E1030(this) )
      {
        v37 = GameSetting_GetSafeFloatPointer((int *)MEMORY[0xB37D70]); /*0x60417b*/
        z = *(float *)v37 + z; /*0x604186*/
      }
      v38 = LODWORD(v190); /*0x60418a*/
      v39 = z; /*0x60418e*/
      *(float *)(LODWORD(v190) + 0x54) = x; /*0x604192*/
      *(float *)(v38 + 0x58) = y; /*0x604195*/
      *(float *)(v38 + 0x5C) = v39; /*0x604198*/
    }
    v35 = BaseCalcAVi; /*0x60419b*/
    NiMatrix33_InitRotationTransform(v202, BaseCalcAVi); /*0x6041a7*/
    if ( v195 != 0.0 ) /*0x6041b2*/
    {
      v35 = 0.0; /*0x6041b4*/
      if ( 0.0 != *(float *)(LODWORD(v195) + 0x32C) ) /*0x6041c1*/
      {
        v35 = *(float *)(LODWORD(v195) + 0x32C); /*0x6041c7*/
        NiMatrix33_InitRotationTransposedTransform___(v203, *(float *)(LODWORD(v195) + 0x32C)); /*0x6041d8*/
        qmemcpy(v202, NiMAtrix33_Multiply(v202, v204, v203), sizeof(v202)); /*0x604201*/
      }
    }
    v40 = sub_4D7C50(this, v204, v202, 0); /*0x604214*/
    v41 = LODWORD(v190) + 0x30; /*0x60421d*/
    qmemcpy((void *)(LODWORD(v190) + 0x30), v40, 0x24u); /*0x604227*/
    LODWORD(y) = v41 + 0x24; /*0x604227*/
  }
  v42 = sub_4D7FC0(this); /*0x60422b*/
  if ( v42 ) /*0x604232*/
  {
    Destructor = v42->Destructor; /*0x604234*/
    if ( Destructor ) /*0x604238*/
    {
      a4b = Destructor; /*0x60423a*/
      ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x60423d*/
      ShadowSceneNode_UpdateOrClearSourceLight(ShadowSceneNode, a4b); /*0x604247*/
    }
  }
  if ( v10 ) /*0x60424e*/
  {
    sub_471C00(v10, this); /*0x604257*/
    if ( !v184 ) /*0x604261*/
    {
      if ( sub_5E1030(this) ) /*0x604269*/
      {
        v45 = (MobileObject *)this->vtbl->GetMountedHorse(this); /*0x604281*/
        y = COERCE_FLOAT(MobileObject_GetCharProxy(v45)); /*0x60428a*/
        if ( y != 0.0 ) /*0x60428e*/
        {
          v46 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v10->manager + 0x1F) + 0x4C))( /*0x6042a9*/
                  *((_DWORD *)v10->manager + 0x1F),
                  "Bip01 Spine");
          *(float *)&v47 = COERCE_FLOAT( /*0x6042be*/
                             (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v10->manager + 0x1F) + 0x4C))(
                               *((_DWORD *)v10->manager + 0x1F),
                               "Bip01 Spine1"));
          v190 = *(float *)&v47; /*0x6042c2*/
          if ( v46 ) /*0x6042c6*/
          {
            if ( *(float *)&v47 != 0.0 ) /*0x6042ce*/
            {
              *(float *)&WaterHeight = *(float *)(LODWORD(y) + 0x32C) * dbl_A2FAA0; /*0x6042e8*/
              v35 = *(float *)&WaterHeight; /*0x6042ec*/
              NiMatrix33_InitRotationTransform(v203, *(float *)&WaterHeight); /*0x6042f3*/
              qmemcpy(v202, (const void *)(v46 + 0x30), sizeof(v202)); /*0x604306*/
              v48 = NiMAtrix33_Multiply(v202, v204, v203); /*0x60431c*/
              v49 = v190; /*0x604330*/
              qmemcpy((void *)(v46 + 0x30), v48, 0x24u); /*0x60433b*/
              LODWORD(v49) += 0x30; /*0x60433d*/
              qmemcpy(v202, (const void *)LODWORD(v49), sizeof(v202)); /*0x60434b*/
              v50 = NiMAtrix33_Multiply(v202, v204, v203); /*0x604361*/
              qmemcpy(v202, v50, sizeof(v202)); /*0x604371*/
              v51 = v49; /*0x604373*/
              v10 = v197; /*0x604375*/
              qmemcpy((void *)LODWORD(v51), v50, 0x24u); /*0x604380*/
              LODWORD(y) = LODWORD(v51) + 0x24; /*0x604380*/
            }
          }
        }
      }
    }
    if ( this->members.DeadState != 3 /*0x6043c3*/
      && (!this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) || this->members.DeadState == 1)
      && !Actor::IsSleeping(this)
      && !v184
      && !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this) )
    {
      v35 = sub_603500( /*0x6043d5*/
              (int *)this,
              (TESObjectREFR *)LODWORD(y),
              st5_0,
              *(float *)&MEMORY[0xB33E90][0xC],
              a3,
              COERCE_INT(*(float *)&MEMORY[0xB33E90][0xC]));
    }
    ActorAnimData::ApplyActorAnimData(v10); /*0x6043dc*/
    switch ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) ) /*0x604401*/
    {
      case kSitSleep_SittingIn: /*0x604401*/
      case kSitSleep_SittingOut: /*0x604401*/
      case kSitSleep_SleepingIn: /*0x604401*/
      case kSitSleep_SleepingOut: /*0x604401*/
        v52 = g_zeroNiPoint3.y; /*0x60440e*/
        v53 = g_zeroNiPoint3.z; /*0x604413*/
        unknownChildTag[0] = LODWORD(g_zeroNiPoint3.x); /*0x604419*/
        v54 = this->vtbl; /*0x60441d*/
        *(float *)&unknownChildTag[1] = v52; /*0x604420*/
        GetScale = v54->super.super.GetScale; /*0x604424*/
        z = v53; /*0x60442a*/
        v190 = GetScale((TESObjectREFR *)this); /*0x604432*/
        v35 = 1.0; /*0x604436*/
        if ( 1.0 != v190 ) /*0x604441*/
        {
          ActorAnimData_GetMovementVector( /*0x60445a*/
            (float *)&v10->unk00,
            a3,
            (float *)unknownChildTag,
            this,
            (this->members.super.super.super.flags & 0x10) != 0,
            0);
          a3 = z; /*0x604461*/
          v35 = z; /*0x604469*/
          if ( z != 0.0 ) /*0x60446e*/
          {
            a3 = z; /*0x604473*/
            st5_0 = v190; /*0x604475*/
            GetPos = this->vtbl->super.super.GetPos; /*0x604479*/
            *(float *)&WaterHeight = v35 - v35 * v190; /*0x604485*/
            v57 = (int)GetPos((TESObjectREFR *)this); /*0x604489*/
            *((float *)&WaterHeight + 1) = *(float *)(v57 + 8) - *((float *)&WaterHeight + 1); /*0x604495*/
            v35 = *((float *)&WaterHeight + 1); /*0x604499*/
            sub_4D8A60(*((float *)&WaterHeight + 1)); /*0x6044a0*/
          }
        }
        break; /*0x6044a0*/
      default:
        break;
    }
  }
  unk_B3CBD0 = 0; /*0x6044a9*/
  if ( !v184 ) /*0x6044b5*/
  {
    if ( v195 == 0.0 || InterfaceManager_IsMenuMode() || this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x6044e0*/
      goto LABEL_209; /*0x6044e4*/
    a4c = flt_A34BA0; /*0x6044f3*/
    DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x6044f6*/
    IsUnderwater = Actor_IsUnderwater__(this, (int)this->members.super.super.pos, DwordAtOffset40, a4c); /*0x60450e*/
    a4d = flt_A41724; /*0x604510*/
    v186 = IsUnderwater; /*0x604515*/
    v60 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x604519*/
    v61 = Actor_IsUnderwater__(this, (int)this->members.super.super.pos, v60, a4d); /*0x604522*/
    a4e = flt_A6E688; /*0x604530*/
    v187 = v61; /*0x604533*/
    v62 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x604537*/
    v185 = Actor_IsUnderwater__(this, (int)this->members.super.super.pos, v62, a4e); /*0x604545*/
    v63 = this->vtbl->GetActorValue(this, kActorVal_Endurance); /*0x604556*/
    v64 = Actor_CalcMaxBreath(v63); /*0x604559*/
    v190 = v64; /*0x60455e*/
    if ( LOBYTE(this->members.unk0D8[0]) || (v192 = 1, !IsUnderwater) ) /*0x604575*/
      v192 = 0; /*0x604577*/
    IsDead = this->vtbl->super.super.IsDead; /*0x60457f*/
    LOBYTE(this->members.unk0D8[0]) = IsUnderwater; /*0x604589*/
    if ( !IsDead((TESObjectREFR *)this, 0) ) /*0x60458f*/
    {
      if ( sub_5EA680(this) ) /*0x60459b*/
        LOBYTE(v10) = !v185 || (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x800) == 0; /*0x6045be*/
      else
        LOBYTE(v10) = v185; /*0x6045c6*/
      if ( this == (Actor *)reference && GetGodMode() || (_BYTE)v10 ) /*0x6045dd*/
      {
        v64 = v190; /*0x6045e2*/
        ((void (__stdcall *)(_DWORD))this->members.super.process->Unk_7B)(LODWORD(v190)); /*0x6045f2*/
      }
      else
      {
        BaseCalcAVi = ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_7C)(this->members.super.process); /*0x604606*/
        v66 = this->vtbl->GetActorValue(this, kActorVal_WaterBreathing); /*0x604617*/
        v67 = BaseCalcAVi; /*0x604619*/
        v68 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x604625*/
        if ( v66 ) /*0x604627*/
          v69 = v67 + v68; /*0x604629*/
        else
          v69 = v67 - v68; /*0x60462d*/
        v70 = v69; /*0x60462f*/
        v71 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x60462f*/
        BaseCalcAVi = v70; /*0x604631*/
        st5_0 = BaseCalcAVi; /*0x604637*/
        if ( BaseCalcAVi >= 0.0 ) /*0x604642*/
        {
          if ( v190 < st5_0 ) /*0x6046cf*/
            BaseCalcAVi = v190; /*0x6046d1*/
          *(float *)unknownChildTag = sub_5E3920((TESObjectREFR *)this); /*0x6046e0*/
          v79 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x6046e6*/
          WaterHeight = TESObjectCELL_GetWaterHeight(v79); /*0x6046f2*/
          v80 = this->vtbl->super.super.GetPos(this); /*0x604701*/
          *(float *)&WaterHeight = WaterHeight - v80[2]; /*0x60470a*/
          *(float *)unknownChildTag = *(float *)&WaterHeight / *(float *)unknownChildTag; /*0x604716*/
          a3 = *(float *)unknownChildTag + dbl_A2F928; /*0x604722*/
          if ( a3 > BaseCalcAVi && !sub_5E1E90(this) && !sub_5E6FE0(this) ) /*0x60473e*/
            sub_5F5730(this); /*0x604749*/
        }
        else
        {
          v72 = this->vtbl; /*0x604644*/
          a3 = v71; /*0x60464b*/
          *(float *)&WaterHeight = v71; /*0x60464e*/
          v73 = Actor_GetBaseCalcAVi((int *)this, (int)v10, SLODWORD(y), (int)v72, 8); /*0x604659*/
          v74 = sub_548980(v73); /*0x60465f*/
          ApplyDamage = v72->ApplyDamage; /*0x604668*/
          *(float *)&WaterHeight = v74 * *(float *)&WaterHeight; /*0x604670*/
          v76 = *(float *)&WaterHeight; /*0x604674*/
          ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))ApplyDamage)(this, LODWORD(WaterHeight), 0.0, 0); /*0x60467b*/
          TESObjectREFR_PlayResolvedAnimSoundNote(this, "NPCHumanDrowning", 0, 0x102, 0); /*0x60468d*/
          v78 = (unsigned int)v77; /*0x604692*/
          if ( v77 ) /*0x604696*/
          {
            sub_6B73E0(v77); /*0x60469a*/
            FormHeapFree(v78); /*0x6046a0*/
          }
          Actor_PlayPainFX((TESObjectREFR *)this, st5_0, v76, a3, (int *)1, 1); /*0x6046ae*/
          BaseCalcAVi = 0.0; /*0x6046b5*/
        }
        v64 = BaseCalcAVi; /*0x604751*/
        ((void (__stdcall *)(_DWORD))this->members.super.process->Unk_7B)(LODWORD(BaseCalcAVi)); /*0x604761*/
      }
    }
    if ( this != (Actor *)reference ) /*0x604769*/
    {
      v82 = v186; /*0x604879*/
      goto LABEL_152; /*0x604879*/
    }
    *(float *)&v81 = COERCE_FLOAT(Menu_GetOpenMenuTile(0x415)); /*0x604774*/
    v82 = v186; /*0x604779*/
    y = *(float *)&v81; /*0x604782*/
    if ( v186 ) /*0x604784*/
    {
      if ( *(float *)&v81 == 0.0 ) /*0x604788*/
        y = COERCE_FLOAT(sub_5965C0(st5_0, v64, a3)); /*0x60478f*/
    }
    if ( v185 ) /*0x604796*/
    {
      v83 = unk_B3B77D; /*0x604798*/
      if ( unk_B3B77D ) /*0x604798*/
        goto LABEL_148; /*0x60479f*/
      sub_5964E0(); /*0x6047a5*/
      v83 = 1; /*0x6047aa*/
    }
    else
    {
      if ( y == 0.0 ) /*0x6047b3*/
        goto LABEL_153; /*0x6047b3*/
      if ( !v82 ) /*0x6047bb*/
      {
        ParentMenu = (void (__thiscall ***)(_DWORD, int))Tile_GetParentMenu((_DWORD *)LODWORD(y)); /*0x6047bf*/
        if ( ParentMenu ) /*0x6047c6*/
          (**ParentMenu)(ParentMenu, 1); /*0x6047d0*/
        unk_B3B77D = 0; /*0x6047d2*/
        goto LABEL_153; /*0x6047d9*/
      }
      v83 = unk_B3B77D; /*0x6047de*/
      if ( !unk_B3B77D ) /*0x6047e5*/
        goto LABEL_148; /*0x6047e5*/
      *(float *)unknownChildTag = sub_596470(); /*0x6047ec*/
      if ( flt_A34BA0 > (double)*(float *)unknownChildTag ) /*0x6047ff*/
      {
        if ( Actor_IsFemale(this) ) /*0x604803*/
          TESObjectREFR_PlayResolvedAnimSoundNote(this, "NPCHumanGaspFemale", 0, 0x102, 1); /*0x60481c*/
        else
          TESObjectREFR_PlayResolvedAnimSoundNote(this, "NPCHumanGaspMale", 0, 0x102, 1); /*0x604823*/
        v86 = (unsigned int)v85; /*0x604828*/
        if ( v85 ) /*0x60482c*/
        {
          sub_6B73E0(v85); /*0x604830*/
          FormHeapFree(v86); /*0x604836*/
        }
      }
      sub_5964B0(st5_0, a3); /*0x60483e*/
      v83 = 0; /*0x604843*/
    }
    unk_B3B77D = v83; /*0x604845*/
LABEL_148:
    if ( y != 0.0 ) /*0x60484c*/
    {
      if ( v83 ) /*0x604850*/
      {
        v87 = ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_7C)(this->members.super.process); /*0x60485d*/
        *(float *)unknownChildTag = v87 / v190; /*0x604864*/
        sub_596550(*(float *)unknownChildTag); /*0x60486f*/
      }
    }
LABEL_152:
    if ( v185 ) /*0x604882*/
    {
LABEL_154:
      if ( !Actor_CanFly(this) ) /*0x6048a0*/
      {
        v35 = flt_A5742C; /*0x6048aa*/
        goto LABEL_157; /*0x6048aa*/
      }
LABEL_155:
      v35 = kFaceEarNormalMatchRadius; /*0x6048a2*/
LABEL_157:
      v88 = (__m128 *)LODWORD(v195); /*0x6048b0*/
      *(float *)(LODWORD(v195) + 0x338) = v35; /*0x6048b4*/
      if ( this->vtbl->GetActorValue(this, kActorVal_WaterWalking) || Actor_CanFly(this) ) /*0x6048d3*/
      {
        if ( v187 ) /*0x604bf9*/
          sub_5E0610(this, 0x800); /*0x604bfb*/
        else
          sub_5E05F0(this, 0x800); /*0x604c02*/
        LODWORD(y) = v88[0x1E].m128_f32; /*0x604c07*/
        if ( hkCharacterContext_GetStateId((__m128 *)v88[0x1E].m128_i32) != 5 || v82 ) /*0x604c1b*/
        {
          if ( hkCharacterContext_GetStateId((__m128 *)v88[0x1E].m128_i32) != 5 ) /*0x604c33*/
          {
            if ( v82 ) /*0x604c37*/
            {
              v35 = 1.0; /*0x604c39*/
              if ( v88[0x2E].m128_f32[2] < 1.0 ) /*0x604c46*/
                v88[0x2A].m128_i32[0] = 5; /*0x604c48*/
            }
          }
        }
        else
        {
          v88[0x2A].m128_i32[0] = 0; /*0x604c1d*/
        }
        if ( hkCharacterContext_GetStateId((__m128 *)v88[0x1E].m128_i32) == 5 ) /*0x604c5c*/
        {
          v35 = flt_A34BA0; /*0x604c62*/
          if ( v35 > v88[0x30].m128_f32[0] ) /*0x604c73*/
          {
            if ( !v186 ) /*0x604c7e*/
            {
LABEL_209:
              v111 = this == (Actor *)reference; /*0x604e12*/
              LOBYTE(v190) = 0; /*0x604e18*/
              if ( !v111 ) /*0x604e1d*/
                LOBYTE(v190) = this->vtbl->IsInCombat(this, 1); /*0x604e2e*/
              if ( sub_5E6CD0((TESObjectREFR *)this, 0) /*0x604f48*/
                || this == (Actor *)reference
                || !this->vtbl->super.super.GetAnimData(this)
                || (v112 = this->vtbl->super.super.GetAnimData(this), !ActorAnimData_IsIdleInactive(v112))
                || this->members.DeadState == 3
                || this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
                || Actor::IsSleeping(this)
                || this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this)
                || Actor_IsSneaking(reference)
                || ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_90)(this->members.super.process)
                || reference->vtbl->super.IsTresspassing((Actor *)reference)
                || !Actor::HasNPCBaseForm(this)
                || ((int (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->GetUnk220Element)(
                     this->members.super.process,
                     0)
                || ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_7F)(this->members.super.process)
                || LOBYTE(reference->unk600) )
              {
                v119 = this->members.super.process; /*0x605114*/
                if ( v119 ) /*0x605119*/
                {
                  if ( ((unsigned __int8 (__thiscall *)(LowProcess *))v119->Unk_7F)(v119) ) /*0x605123*/
                  {
                    v120 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetUnk278)(this->members.super.process); /*0x605134*/
                    v121 = this->members.super.process; /*0x605136*/
                    SayTopic = v121->SayTopic; /*0x60513b*/
                    LOBYTE(WaterHeight) = v120; /*0x605141*/
                    LOBYTE(unknownChildTag[0]) = bBackgroundLoadLipFiles; /*0x60514a*/
                    SayTopic(v121, this, 0, 0, LODWORD(WaterHeight), unknownChildTag[0]);// 3DTheft decode 2026-05-18: fallback SayTopic call with topic=null; gated by process vfunc +0x200 and passes GetUnk278 as arg3 plus bBackgroundLoadLipFiles as arg4. /*0x60515d*/
                  }
                }
              }
              else
              {
                Actor_GetDetectionLevelAgainstActor( /*0x604f68*/
                  (TESObjectREFR *)this,
                  SLODWORD(y),
                  st5_0,
                  a3,
                  v35,
                  0,
                  (TESObjectREFR *)reference,
                  &v192,
                  SLODWORD(v190),
                  0,
                  0,
                  v183);
                if ( v113 > 0 /*0x604f8e*/
                  && this != (Actor *)reference
                  && (PlayerCharacter *)sub_5EAE10((TESObjectREFR *)this) != reference )
                {
                  if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_12F)(this->members.super.process) ) /*0x604f9f*/
                  {
                    *(double *)unknownChildTag = TesObjectREF_GetDistance( /*0x604fb7*/
                                                   (TESObjectREFR *)reference,
                                                   (TESObjectREFR *)this,
                                                   0);
                    v35 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36AD8); /*0x604fc5*/
                    if ( v35 >= *(double *)unknownChildTag /*0x604fde*/
                      && !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) )
                    {
                      v114 = this->members.super.process; /*0x604feb*/
                      if ( v114 ) /*0x604ff0*/
                      {
                        editorPackage = v114->editorPackage;// 3DTheft decode 2026-05-18: player greeting/rumor branch checks editorPackage flag 0x1000 before SayTopic; this is actor update dialogue selection, separate from Follow path execution. /*0x604ff6*/
                        if ( (!editorPackage || (editorPackage->members.packageFlags & 0x1000) == 0) /*0x60504b*/
                          && !sub_5E0E80(this)
                          && !this->vtbl->IsInCombat(this, 1)
                          && !sub_5E6BA0(this)
                          && (!Actor_IsInDialogueProcedure(v116) || sub_5E05B0(this)) )
                        {
                          v35 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process); /*0x605063*/
                          if ( v35 <= *(float *)&SrcStr ) /*0x605070*/
                          {
                            if ( reference ) /*0x605076*/
                            {
                              Topic = TESTopic::GetTopic(DialogueType_Conversation, 0); /*0x605087*/
                              v118 = Topic; /*0x60508c*/
                              if ( Topic ) /*0x605093*/
                              {
                                if ( Topic != (TESTopic *)0xFFFFFFD8 /*0x6050a4*/
                                  && !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&Topic->questInfoEntries) )
                                {
                                  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))this->members.super.process->Unk_120)( /*0x6050c2*/
                                    this->members.super.process,
                                    reference);
                                  this->members.unk0E4 = (Actor *)reference; /*0x6050c9*/
                                  LOBYTE(unknownChildTag[0]) = bBackgroundLoadLipFiles; /*0x6050d5*/
                                  this->members.super.process->SayTopic( /*0x6050ef*/
                                    this->members.super.process,
                                    this,
                                    v118,
                                    0,
                                    1,
                                    unknownChildTag[0]);// 3DTheft decode 2026-05-18: player greeting branch calls HighProcess::SayTopic(topic=TESTopic::GetTopic(1,0), forceSubtitles=0, arg3=1, arg4=bBackgroundLoadLipFiles) after setting process target vfunc +0x484 and Actor+0xE4 to player.
                                  if ( !((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) ) /*0x6050fc*/
                                    ((void (__thiscall *)(LowProcess *, Actor *, int))this->members.super.process->Unk_55)( /*0x605110*/
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
              }
              if ( this->vtbl->super.IsDead((MobileObject *)this) && v197 ) /*0x60517a*/
              {
                v187 = 1; /*0x605182*/
                v123 = ActorAnimData_GetAnimGroupFromField8Value(v197, 0); /*0x605187*/
                v124 = AnimKey_GetGroupID(v123) == 0x20; /*0x6051a3*/
                v35 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process); /*0x6051a6*/
                if ( v35 != dbl_A3A5B0 ) /*0x6051b3*/
                {
                  v35 = ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process); /*0x6051c0*/
                  if ( v35 > *(float *)&SrcStr ) /*0x6051cd*/
                  {
                    v125 = this->members.super.process; /*0x6051d8*/
                    v126 = v125->__vftable; /*0x6051e1*/
                    unknownChildTag[0] = *(UInt32 *)&MEMORY[0xB33E90][0xC]; /*0x6051e3*/
                    v127 = ((double (__thiscall *)(LowProcess *))v126->GetUnk22C)(v125); /*0x6051ef*/
                    SetUnk22C = v126->SetUnk22C; /*0x6051f5*/
                    *(float *)unknownChildTag = v127 - *(float *)unknownChildTag; /*0x6051fc*/
                    v35 = *(float *)unknownChildTag; /*0x605202*/
                    ((void (__thiscall *)(LowProcess *, UInt32))SetUnk22C)(v125, unknownChildTag[0]); /*0x605209*/
                  }
                  else
                  {
                    sub_5E9E70((TESObjectREFR *)this); /*0x6051d1*/
                  }
                }
                if ( !v124 ) /*0x60520d*/
                {
                  *(float *)&WaterHeight = this->members.super.process->GetCurHour(this->members.super.process); /*0x605219*/
                  *(float *)unknownChildTag = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x605227*/
                  v129 = *(float *)unknownChildTag; /*0x60522b*/
                  a3 = *(float *)&WaterHeight; /*0x60522f*/
                  if ( *(float *)&WaterHeight <= (double)*(float *)unknownChildTag ) /*0x60523a*/
                  {
                    v130 = v129 - a3; /*0x605246*/
                  }
                  else
                  {
                    a3 = a3 + dbl_A492B8; /*0x60523c*/
                    v130 = a3 - v129; /*0x605242*/
                  }
                  v190 = v130; /*0x605248*/
                  *(double *)unknownChildTag = v190; /*0x605255*/
                  v35 = TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]) * dbl_A6EDD8; /*0x60525e*/
                  v187 = v35 > *(double *)unknownChildTag; /*0x605274*/
                }
                v131 = v197; /*0x605279*/
                AccumNode = v197->AccumNode; /*0x60527d*/
                if ( AccumNode ) /*0x605282*/
                {
                  v133 = (int)AccumNode->vtbl->super.super.Unk_02((NiObject *)AccumNode); /*0x60528d*/
                  if ( v133 ) /*0x605291*/
                  {
                    v35 = sub_88FA30(v133); /*0x605298*/
                    if ( v35 <= *(float *)&SrcStr ) /*0x6052ab*/
                    {
                      if ( this == (Actor *)reference ) /*0x6052bd*/
                      {
                        AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x6052c5*/
                        ActorAnimData_CleanupOrPromoteQueuedIdles(AnimDataByPerspective, 1, 0); /*0x6052cc*/
                        v135 = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x6052e1*/
                        ActorAnimData_ClearSlot(v135, 5, 0.0); /*0x6052e8*/
                        v136 = (float *)PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x6052f5*/
                        v136[6] = g_zeroNiPoint3.x; /*0x605300*/
                        v136[7] = g_zeroNiPoint3.y; /*0x605309*/
                        v136[8] = g_zeroNiPoint3.z; /*0x605316*/
                        v137 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x605321*/
                        ActorAnimData_CleanupOrPromoteQueuedIdles(v137, 1, 0); /*0x605328*/
                        v35 = 0.0; /*0x60532d*/
                        v138 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x60533d*/
                        ActorAnimData_ClearSlot(v138, 5, 0.0); /*0x605344*/
                        v139 = (float *)PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x605351*/
                        v139[6] = g_zeroNiPoint3.x; /*0x60535c*/
                        v139[7] = g_zeroNiPoint3.y; /*0x605365*/
                        v139[8] = g_zeroNiPoint3.z; /*0x60536e*/
                      }
                      else
                      {
                        ActorAnimData_CleanupOrPromoteQueuedIdles(v131, 1, 0); /*0x605375*/
                        v35 = 0.0; /*0x60537a*/
                        ActorAnimData_ClearSlot(v131, 5, 0.0); /*0x605384*/
                        v131->unk18 = LODWORD(g_zeroNiPoint3.x); /*0x60538e*/
                        v131->unk1C = LODWORD(g_zeroNiPoint3.y); /*0x605397*/
                        v131->unk20 = LODWORD(g_zeroNiPoint3.z); /*0x6053a0*/
                      }
                      ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)( /*0x6053af*/
                        this->members.super.process,
                        this);
                    }
                  }
                }
                v140 = v196; /*0x6053b1*/
                if ( v196 != 0.0 /*0x6053c3*/
                  && !(*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v196) + 0x98))(COERCE_FLOAT(LODWORD(v196))) )
                {
                  v141 = this->members.super.process; /*0x6053c9*/
                  if ( !v141 || !((int (__thiscall *)(LowProcess *, _DWORD))v141->GetUnk220Element)(v141, 0) ) /*0x6053da*/
                    (*(void (__thiscall **)(float, int, _DWORD))(*(_DWORD *)LODWORD(v140) + 0x9C))( /*0x6053ee*/
                      COERCE_FLOAT(LODWORD(v140)),
                      1,
                      0);
                }
                if ( !v187 ) /*0x6053f5*/
                {
                  v142 = 1; /*0x605401*/
                  if ( ActorAnimData_HasAnimKey(v197, 0x20u) ) /*0x605403*/
                  {
                    if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) ) /*0x605417*/
                      v142 = ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_9E)(this) != 0; /*0x60542e*/
                  }
                  ((void (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Unk_27)(this, 1); /*0x60543d*/
                  if ( v142 ) /*0x605441*/
                    sub_4DC550(this); /*0x605445*/
                }
              }
              else if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x605459*/
              {
                if ( ((double (__thiscall *)(LowProcess *))this->members.super.process->GetUnk22C)(this->members.super.process) == dbl_A3A5B0 ) /*0x605477*/
                  ((void (__stdcall *)(_DWORD))this->members.super.process->SetUnk22C)(0.0); /*0x60548a*/
                v143 = this->members.super.process; /*0x60548c*/
                v144 = v143->__vftable; /*0x605495*/
                unknownChildTag[0] = *(UInt32 *)&MEMORY[0xB33E90][0xC]; /*0x605497*/
                v145 = ((double (__thiscall *)(LowProcess *))v144->GetUnk22C)(v143); /*0x6054a3*/
                v146 = v144->SetUnk22C; /*0x6054a9*/
                *(float *)unknownChildTag = v145 - *(float *)unknownChildTag; /*0x6054b0*/
                v35 = *(float *)unknownChildTag; /*0x6054b6*/
                ((void (__thiscall *)(LowProcess *, UInt32))v146)(v143, unknownChildTag[0]); /*0x6054bd*/
              }
              ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_C5)( /*0x6054cb*/
                this->members.super.process,
                this);
              goto LABEL_284; /*0x6054cb*/
            }
            if ( !v187 ) /*0x604c89*/
            {
              unknownChildTag[0] = v88[0x34].m128_u32[2]; /*0x604c97*/
              v104 = sub_531E00(v88); /*0x604c9b*/
              v35 = dbl_A2FC80; /*0x604cbf*/
              *(float *)unknownChildTag = v104->z /*0x604cc1*/
                                        - *(float *)unknownChildTag
                                        + *(float *)unknownChildTag * v35 * v88[0x33].m128_f32[1];
              v105 = *(float *)unknownChildTag; /*0x604cc5*/
              *(float *)unknownChildTag = v88[0x31].m128_f32[2] - dbl_A3F3F0; /*0x604cd5*/
              st5_0 = *(float *)unknownChildTag * hkFactor; /*0x604cdd*/
              *(float *)unknownChildTag = st5_0; /*0x604ce3*/
              *(float *)unknownChildTag = v105 - *(float *)unknownChildTag; /*0x604ceb*/
              a3 = *(float *)unknownChildTag; /*0x604cef*/
              if ( *(float *)unknownChildTag >= v35 ) /*0x604cfa*/
              {
                if ( a3 > v35 ) /*0x604d28*/
                {
                  *(float *)unknownChildTag = 0.0; /*0x604d2d*/
                  *(float *)&unknownChildTag[1] = 0.0; /*0x604d35*/
                  z = flt_A5A5F8; /*0x604d3f*/
                  v35 = 1.0; /*0x604d43*/
                  bhkCharacterController_SetTransientPushVector(v88, (float *)unknownChildTag, 1.0); /*0x604d4b*/
                }
              }
              else
              {
                *(float *)unknownChildTag = 0.0; /*0x604d07*/
                *(float *)&unknownChildTag[1] = 0.0; /*0x604d0b*/
                z = flt_A31E2C; /*0x604d15*/
                v35 = 1.0; /*0x604d19*/
                bhkCharacterController_SetTransientPushVector(v88, (float *)unknownChildTag, 1.0); /*0x604d1f*/
              }
            }
          }
        }
      }
      else if ( v187 ) /*0x6048e4*/
      {
        if ( this->members.super.process->GetEquippedLightData(this->members.super.process, 1) ) /*0x6048f3*/
        {
          v89 = this->members.super.process->GetEquippedLightData(this->members.super.process, 1); /*0x604906*/
          v35 = Actor_UnequipItem(this, v35, st5_0, a3, (char)v89->type, 1, 0, 0, 0, 0); /*0x604918*/
        }
        sub_5E0610(this, 0x800); /*0x604924*/
        v88[0x2A].m128_i32[0] = 5; /*0x604929*/
      }
      else if ( Actor_IsSwimming(this) || hkCharacterContext_GetStateId((__m128 *)v88[0x1E].m128_i32) == 5 ) /*0x604955*/
      {
        if ( (v88[0x1F].m128_i32[1] & 0x100) != 0 ) /*0x604bcc*/
        {
          sub_5E05F0(this, 0x800); /*0x604bd9*/
          v88[0x2A].m128_i32[0] = 0; /*0x604bde*/
        }
      }
      else if ( v192 ) /*0x604960*/
      {
        v35 = kHeadBodyNormalMatchRadius; /*0x604966*/
        if ( v35 < v88[0x32].m128_f32[1] ) /*0x604977*/
        {
          v35 = flt_A30634; /*0x60497d*/
          if ( v35 > v88[0x2E].m128_f32[2] ) /*0x60498e*/
          {
            unknownChildTag[0] = v88[0x2E].m128_u32[2]; /*0x60499a*/
            v195 = 1.0; /*0x6049a0*/
            if ( *(float *)unknownChildTag > dbl_A6EDF0 ) /*0x6049b3*/
              v195 = *(float *)unknownChildTag * dbl_A3D360 / dbl_A3F3D0; /*0x6049c1*/
            a3 = dbl_A30E48; /*0x6049cd*/
            *(float *)unknownChildTag = pow(v195, a3); /*0x6049d8*/
            v35 = *(float *)unknownChildTag; /*0x6049e2*/
            sound = (int *)MEMORY[0xB33398]->sound; /*0x6049e6*/
            v195 = *(float *)unknownChildTag; /*0x6049e9*/
            if ( sound ) /*0x6049ef*/
            {
              if ( this->vtbl->super.super.GetNiNode(this) ) /*0x604a00*/
              {
                v91 = PlaySound___(sound, "CWaterHumanoid", 0x102, 1); /*0x604a18*/
                v92 = (int *)v91; /*0x604a1d*/
                if ( v91 ) /*0x604a21*/
                {
                  if ( !SoundHandle::IsPlaying(v91) ) /*0x604a29*/
                  {
                    v93 = this->vtbl->super.super.GetPos(this); /*0x604a41*/
                    v94 = v93[1]; /*0x604a46*/
                    v95 = *v93; /*0x604a49*/
                    v194 = v93[2]; /*0x604a4e*/
                    WaterHeight = COERCE_DOUBLE(__PAIR64__(LODWORD(v94), LODWORD(v95))); /*0x604a62*/
                    sub_6B7360(v92, v95, v94, v194); /*0x604a73*/
                    v35 = v195; /*0x604a78*/
                    sub_6B7280(v92, v195); /*0x604a82*/
                    sub_6B7190(v92, 0); /*0x604a8b*/
                    sub_6B73E0(v92); /*0x604a92*/
                    FormHeapFree((unsigned int)v92); /*0x604a98*/
                    if ( Shared_GetDwordAtOffset40(this) ) /*0x604aa2*/
                    {
                      v96 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x604ab1*/
                      if ( TESObjectCELL::GetWaterForm(v96) ) /*0x604ab8*/
                      {
                        v97 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x604ac7*/
                        WaterForm = TESObjectCELL::GetWaterForm(v97); /*0x604ace*/
                        if ( !((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) ) /*0x604add*/
                        {
                          v99 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x604ae9*/
                          v35 = TESObjectCELL_GetWaterHeight(v99); /*0x604af0*/
                          Shared_GetDwordAtOffset40(this); /*0x604af9*/
                          a3a = sub_4C9BE0((TESObjectREFR *)reference); /*0x604b0f*/
                          v100 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x604b12*/
                          y = COERCE_FLOAT(sub_441800(v100, a3a, 3u)); /*0x604b20*/
                          v101 = (BSTempEffectParticle *)FormHeapAlloc(0x20u); /*0x604b27*/
                          unknownChildTag[0] = (UInt32)v101; /*0x604b2c*/
                          v206 = 0; /*0x604b32*/
                          if ( v101 ) /*0x604b3d*/
                          {
                            a3b = *(float *)GameSetting_GetSafeFloatPointer((int *)&MEMORY[0xB37A58][0x3A]); /*0x604b58*/
                            v35 = 1.0; /*0x604b5e*/
                            v173 = *((float *)&WaterHeight + 1); /*0x604b62*/
                            unknownChildName = (char *)LODWORD(v194); /*0x604b6b*/
                            v170 = stru_B258DC.x; /*0x604b79*/
                            v171 = stru_B258DC.y; /*0x604b81*/
                            v172 = stru_B258DC.z; /*0x604b84*/
                            v169 = (const char *)LODWORD(MEMORY[0xB37A58][0x38]); /*0x604b8c*/
                            v102 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x604b94*/
                            v103 = BSTempEffectParticle_Constructor( /*0x604b9c*/
                                     v101,
                                     v102,
                                     1.0,
                                     (NiNode *)LODWORD(y),
                                     v169,
                                     v170,
                                     v171,
                                     v172,
                                     v95,
                                     v173,
                                     *(float *)&unknownChildName,
                                     a3b,
                                     1);
                          }
                          else
                          {
                            v103 = 0; /*0x604ba3*/
                          }
                          v206 = 0xFFFFFFFF; /*0x604bab*/
                          ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v103); /*0x604bb6*/
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
      if ( v186 ) /*0x604d55*/
      {
        if ( !Actor_CanFly(this) ) /*0x604d5d*/
        {
          v106 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x604d6c*/
          if ( v106 ) /*0x604d73*/
          {
            v107 = TESObjectCELL::GetWaterForm(v106); /*0x604d7b*/
            v108 = v107; /*0x604d80*/
            if ( v107 ) /*0x604d84*/
            {
              if ( ((unsigned __int8 (__thiscall *)(TESWaterForm *))v107->vtbl->Unk_22)(v107) ) /*0x604d94*/
              {
                if ( this->vtbl->GetActorValue(this, kActorVal_ResistWaterDamage) <= 0 ) /*0x604dab*/
                {
                  InitializeComponent = v108->damageForm.vtbl[1].InitializeComponent; /*0x604db6*/
                  *(float *)&WaterHeight = *(float *)&MEMORY[0xB33E90][0xC]; /*0x604db9*/
                  v110 = ((int (__thiscall *)(TESAttackDamageForm *))InitializeComponent)(&v108->damageForm); /*0x604dc2*/
                  *(float *)unknownChildTag = (double)v110 * *(float *)&WaterHeight; /*0x604dd3*/
                  v35 = 0.0; /*0x604dd7*/
                  a3 = *(float *)unknownChildTag; /*0x604dd9*/
                  if ( *(float *)unknownChildTag > 0.0 ) /*0x604de4*/
                  {
                    a3 = 0.0; /*0x604de9*/
                    v35 = ((double (__thiscall *)(Actor *, UInt32, _DWORD, _DWORD))this->vtbl->ApplyDamage)( /*0x604dff*/
                            this,
                            unknownChildTag[0],
                            0.0,
                            0);
                    Actor_PlayPainFX((TESObjectREFR *)this, st5_0, v35, 0.0, (int *)1, 1); /*0x604e07*/
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_209; /*0x604e07*/
    }
LABEL_153:
    if ( this->vtbl->GetActorValue(this, kActorVal_WaterWalking) ) /*0x604891*/
      goto LABEL_155; /*0x604895*/
    goto LABEL_154; /*0x604895*/
  }
LABEL_284:
  if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_108)(this->members.super.process) ) /*0x6054d8*/
    ((void (__thiscall *)(LowProcess *, Actor *, int, int, _DWORD))this->members.super.process->Unk_10A)( /*0x6054f0*/
      this->members.super.process,
      this,
      1,
      1,
      0);
  if ( reference != (PlayerCharacter *)this || (v35 = 0.0, 0.0 == a2) ) /*0x605508*/
  {
    v147 = this->members.super.process; /*0x60550a*/
    if ( v147 ) /*0x60550f*/
    {
      if ( !v147->GetProcessLevel(v147) ) /*0x605516*/
        sub_633250((int)this->members.super.process, (char)this, st5_0, v35, a3, this); /*0x605520*/
    }
  }
  sub_5F12D0((MobileObject *)this); /*0x605527*/
  v148 = this->members.super.process; /*0x60552c*/
  if ( v148 ) /*0x605531*/
  {
    v149 = (float *)v148->GetCharProxy(v148, (bhkCharacterProxy **)&WaterHeight); /*0x605540*/
    v150 = 1; /*0x605542*/
    v206 = 1; /*0x605547*/
  }
  else
  {
    v196 = 0.0; /*0x605550*/
    v149 = &v196; /*0x605558*/
    v150 = 2; /*0x60555c*/
  }
  v151 = *(_DWORD **)v149; /*0x605564*/
  if ( (v150 & 2) != 0 ) /*0x605566*/
  {
    v150 &= ~2u; /*0x605568*/
    unknownChildTag[0] = v150; /*0x60556f*/
    sub_7016A0((NiD3DVertexShader *)&v196); /*0x605573*/
  }
  v206 = 0xFFFFFFFF; /*0x60557b*/
  if ( (v150 & 1) != 0 ) /*0x605586*/
    sub_7016A0((NiD3DVertexShader *)&WaterHeight); /*0x60558c*/
  v152 = this->vtbl->super.super.GetNiNode(this); /*0x60559c*/
  v153 = reference; /*0x60559e*/
  v154 = (int)v152; /*0x6055a6*/
  if ( this == (Actor *)reference || !v152 ) /*0x6055b0*/
    goto LABEL_315; /*0x6055b0*/
  if ( v153->isThirdPerson && (v155 = MEMORY[0xB3BB10]) != 0 || (v155 = MEMORY[0xB3BB0C]) != 0 ) /*0x6055dc*/
  {
    v156 = *(float *)(v155 + 0x88); /*0x6055c8*/
    v157 = *(_DWORD *)(v155 + 0x8C); /*0x6055ce*/
    v158 = *(float *)(v155 + 0x90); /*0x6055d4*/
  }
  else
  {
    pos = v153->super.super.super.super.pos; /*0x6055ea*/
    a3c = sub_5E40C0(v153); /*0x6055f7*/
    v160 = sub_47DA10((float *)v201, a3c, &rhs.x); /*0x6055fb*/
    v161 = sub_47D9B0(pos, v205, v160); /*0x60560e*/
    v156 = *v161; /*0x605613*/
    v157 = *((_DWORD *)v161 + 1); /*0x605615*/
    v158 = v161[2]; /*0x605618*/
  }
  *(float *)unknownChildTag = v156; /*0x60561b*/
  v198[0] = *(_DWORD *)(v154 + 0x20); /*0x605626*/
  v162 = v156 - *(float *)v198; /*0x60562a*/
  v163 = *(float *)(v154 + 0x2C); /*0x60562e*/
  unknownChildTag[1] = v157; /*0x605631*/
  v164 = *(float *)(v154 + 0x24); /*0x605635*/
  *(float *)v201 = v162; /*0x605638*/
  *(float *)&v198[1] = v164; /*0x605640*/
  z = v158; /*0x605648*/
  v199 = *(float *)(v154 + 0x28); /*0x60564f*/
  *(float *)&v201[1] = *(float *)&unknownChildTag[1] - v164; /*0x605653*/
  v200 = v163; /*0x605657*/
  *(float *)&v201[2] = v158 - v199; /*0x605667*/
  v165 = NiPoint3_Length((float *)v201); /*0x60566b*/
  v166 = v200 * dbl_A3FA98; /*0x605675*/
  v167 = 0; /*0x60567b*/
  LOBYTE(v197) = 0; /*0x605682*/
  v196 = v165 - v166; /*0x605688*/
  if ( sub_435CC0((int)&MEMORY[0xB33E90][0x13F8], v154) ) /*0x60568c*/
  {
    *(float *)unknownChildTag = SettingLODFadeOutMultActors * flt_B075F0; /*0x6056a8*/
    *(float *)unknownChildTag = v196 / *(float *)unknownChildTag; /*0x6056b0*/
    *(float *)unknownChildTag = *(float *)unknownChildTag * *(float *)unknownChildTag; /*0x6056ba*/
    v167 = *(float *)(v154 + 0xE4) < (double)*(float *)unknownChildTag; /*0x6056cf*/
    LOBYTE(v197) = v167; /*0x6056d7*/
  }
  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x6056db*/
  if ( Global ) /*0x6056e4*/
  {
    if ( *((_DWORD *)Global + 0x88A) ) /*0x6056e6*/
    {
      if ( v167 || (LOBYTE(v190) = 1, v196 <= 0.0) ) /*0x605703*/
        LOBYTE(v190) = 0; /*0x605705*/
      sub_7ABD00(Global, this->members.super.super.super.refID, (int)v198, v190); /*0x605718*/
    }
  }
  if ( v151 ) /*0x60571f*/
  {
    sub_5EA2F0(v151, (char)v197); /*0x605728*/
LABEL_315:
    if ( v151 ) /*0x60572f*/
      sub_5EA320(v151, unk_B333B8); /*0x60573b*/
  }
}
