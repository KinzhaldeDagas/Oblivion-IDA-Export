// [Controller decode 2026-07-09] Player input update. Uses joystick index 0 for look/movement axes. Look axes combine with mouse look; movement axes synthesize logical movement control presses.
//
// [Controller decode 2026-07-09] Central decoded PC controller/joystick/IsXBox summary is stored in IDB netnode "$ ControllerStuff"; full external doc is C:\src\OblivionIDA\ControllerStuff.md.
//
// [Controller decode 2026-07-09] Controller decode completion estimate stored in IDB netnode "$ ControllerStuff" sup 200. Current overall decoded PC Controller/IsXBox/Joystick knowledge is about 92%.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1065; metadata at sup 999; completion estimate at sup 200.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1067; metadata at sup 999; completion estimate at sup 200.
void __thiscall Player_OnInput(PlayerCharacter *this, float deltaTime)
{
  double v2; // st0
  double v3; // st1
  double v4; // st2
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  _DWORD **v9; // edx
  InputGlobal *input; // ecx
  Actor *v12; // edi
  bhkCharacterProxy *CharProxy; // eax
  bool v14; // c0
  LowProcess_vtbl *v15; // edx
  double v16; // st7
  UInt32 v17; // esi
  InterfaceManager *Singleton; // eax
  TESObjectREFR *ObjectToActivate; // ecx
  Actor *v20; // eax
  LowProcess *process; // ecx
  __int16 v22; // si
  double v23; // st7
  LONG MouseAxisMovement; // esi
  LONG v25; // edi
  int JoystickAxisMovement; // eax
  __int64 v27; // rdi
  double v28; // st6
  bool v29; // al
  double v30; // st7
  double AimPitch; // st7
  double v32; // st6
  double v33; // st7
  TESPackage *editorPackage; // ecx
  int v35; // eax
  char v36; // al
  int v37; // ecx
  UInt8 v38; // al
  int v39; // eax
  float v40; // edx
  const void *v41; // esi
  float v42; // eax
  TESForm::FormFlags flags; // ecx
  double v44; // st6
  int v45; // eax
  int v46; // esi
  int v47; // ecx
  int v48; // edi
  InputGlobal *v49; // edi
  double v50; // st5
  double v51; // st6
  double v52; // st7
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  MobileObject *v58; // esi
  __int16 v59; // ax
  PlayerCharacterVtbl *vtbl; // edx
  UInt8 (__thiscall *GetKnockedState)(TESObjectREFR *); // eax
  UInt32 unk57CState; // eax
  int *v63; // eax
  TESFormVtbl **v64; // eax
  TESObjectBOOK *book; // eax
  MagicCasterVtbl *v66; // edi
  int CurrentMagicItem; // eax
  int v68; // eax
  ActorAnimData *v69; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  bhkCharacterProxy *v71; // eax
  char v72; // zf
  char *v73; // ecx
  float *v74; // eax
  char v75; // al
  bhkCharacterProxy *v76; // eax
  bhkCharacterProxy *v77; // eax
  UInt32 DwordAtOffset40; // eax
  ActorAnimData *v79; // esi
  ActorAnimData *v80; // eax
  bhkCharacterProxy *v81; // esi
  _OWORD *v82; // esi
  void (__thiscall *Unk_73)(MobileObject *); // edx
  double v84; // st7
  char v85; // dl
  int *SafeFloatPointer; // eax
  TESObjectREFR *v87; // esi
  _DWORD *v88; // eax
  TESObjectREFRVtbl *v89; // edi
  TESObjectREFR *v90; // eax
  void *v91; // ecx
  Creature *(__thiscall *GetMountedHorse)(Actor *); // edx
  TESObjectREFR *v93; // eax
  int *v94; // esi
  double v95; // st7
  double v96; // st7
  double v97; // st7
  double v98; // st7
  void *v99; // ecx
  double v101; // st7
  double v102; // rt1
  PlayerCharacterVtbl *v103; // esi
  ActorAnimData *AnimData; // eax
  ActorAnimData *firstPersonAnimData; // ecx
  double v106; // st7
  TESObjectCELL *v107; // eax
  double v108; // st6
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx
  void (__thiscall *v110)(MobileObject *, UInt32); // edx
  LowProcess *v111; // ecx
  UInt8 (__thiscall *GetSitSleepState)(BaseProcess *__hidden); // edx
  LowProcess *v113; // ecx
  UInt8 (__thiscall *v114)(BaseProcess *__hidden); // edx
  void (__thiscall *v115)(MobileObject *, UInt32); // edx
  double v116; // st7
  int v117; // esi
  int *v118; // eax
  double v119; // st7
  double v120; // st7
  ExtraDataList *arg0_4; // [esp+4Ch] [ebp-A8h]
  float duration; // [esp+50h] [ebp-A4h]
  float durationa; // [esp+50h] [ebp-A4h]
  float durationb; // [esp+50h] [ebp-A4h]
  float durationc; // [esp+50h] [ebp-A4h]
  BOOL duration_4; // [esp+54h] [ebp-A0h]
  char v127; // [esp+67h] [ebp-8Dh]
  bool v128; // [esp+67h] [ebp-8Dh]
  int v129; // [esp+68h] [ebp-8Ch]
  __int16 v130; // [esp+68h] [ebp-8Ch]
  bool updated; // [esp+6Fh] [ebp-85h]
  bool v132; // [esp+6Fh] [ebp-85h]
  LONG v133; // [esp+70h] [ebp-84h]
  float v134; // [esp+70h] [ebp-84h]
  float v135; // [esp+70h] [ebp-84h]
  int v136; // [esp+70h] [ebp-84h]
  float v137; // [esp+70h] [ebp-84h]
  float v138; // [esp+70h] [ebp-84h]
  float v139; // [esp+70h] [ebp-84h]
  bool v140; // [esp+77h] [ebp-7Dh]
  char v141; // [esp+77h] [ebp-7Dh]
  InputGlobal *v142; // [esp+78h] [ebp-7Ch]
  _DWORD **v143; // [esp+7Ch] [ebp-78h]
  int v144; // [esp+7Ch] [ebp-78h]
  float v145; // [esp+7Ch] [ebp-78h]
  float v146; // [esp+7Ch] [ebp-78h]
  float v147; // [esp+7Ch] [ebp-78h]
  float v148; // [esp+7Ch] [ebp-78h]
  double worldFoV; // [esp+7Ch] [ebp-78h]
  double v150; // [esp+7Ch] [ebp-78h]
  double v151; // [esp+7Ch] [ebp-78h]
  double v152; // [esp+7Ch] [ebp-78h]
  double v153; // [esp+7Ch] [ebp-78h]
  float v154; // [esp+7Ch] [ebp-78h]
  float v155; // [esp+7Ch] [ebp-78h]
  float v156; // [esp+84h] [ebp-70h]
  int v157; // [esp+8Ch] [ebp-68h]
  float v158; // [esp+8Ch] [ebp-68h]
  float v159; // [esp+8Ch] [ebp-68h]
  float v160; // [esp+8Ch] [ebp-68h]
  int v161; // [esp+8Ch] [ebp-68h]
  float v162; // [esp+90h] [ebp-64h] BYREF
  float a2a; // [esp+94h] [ebp-60h]
  float v164; // [esp+98h] [ebp-5Ch]
  NiPoint3 v165; // [esp+9Ch] [ebp-58h] BYREF
  Actor *v166; // [esp+A8h] [ebp-4Ch]
  UInt8 isThirdPerson; // [esp+ADh] [ebp-47h]
  bool IsBlocking; // [esp+AEh] [ebp-46h]
  bool v169; // [esp+AFh] [ebp-45h]
  float v170; // [esp+B0h] [ebp-44h]
  float v171; // [esp+B4h] [ebp-40h]
  float v172; // [esp+B8h] [ebp-3Ch]
  __int64 v173; // [esp+BCh] [ebp-38h]
  float x; // [esp+C4h] [ebp-30h]
  float v175; // [esp+C8h] [ebp-2Ch]
  float v176; // [esp+CCh] [ebp-28h]
  float v177[9]; // [esp+D0h] [ebp-24h] BYREF
  int savedregs; // [esp+F4h] [ebp+0h] BYREF

  v9 = (_DWORD **)g_WorldSceneReceiverRoot; /*0x671633*/
  input = MEMORY[0xB33398]->input; /*0x67163c*/
  *(float *)&this->unk7FC = 0.0; /*0x67163f*/
  this->unk800 = 0.0; /*0x671646*/
  v142 = input; /*0x67164d*/
  v12 = 0; /*0x671651*/
  v143 = v9; /*0x671655*/
  v166 = 0; /*0x671659*/
  v127 = 0; /*0x67165d*/
  sub_667520((MobileObject *)this); /*0x671662*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x671669*/
  if ( CharProxy && (*((_DWORD *)CharProxy + 0x7D) & 0x20000) != 0 ) /*0x67167d*/
  {
    if ( !this->unk115 ) /*0x67167f*/
    {
      sub_6768C0((int)&qword_B3BB2C[0x75], v8, 0.0); /*0x67168d*/
      this->unk115 = 1; /*0x671692*/
    }
  }
  else
  {
    this->unk115 = 0; /*0x67169b*/
  }
  v14 = ((double (__thiscall *)(LowProcess *))this->super.super.super.process->Unk_12B)(this->super.super.super.process) > 0.0; /*0x6716b4*/
  v15 = this->super.super.super.process->__vftable; /*0x6716b6*/
  if ( v14 ) /*0x6716bf*/
    ((void (*)(void))v15->Unk_12A)(); /*0x6716c9*/
  else
    ((void (__stdcall *)(_DWORD))v15->SetUnk2ACCallD5)(0.0); /*0x6716d7*/
  if ( LOBYTE(this->unk738) ) /*0x6716d9*/
  {
    if ( ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.Unk_76)(this) > *(float *)&SrcStr ) /*0x6716fb*/
    {
      this->vtbl->super.super.Unk_77((MobileObject *)this); /*0x671723*/
    }
    else
    {
      sub_6636B0(); /*0x6716fd*/
      ((void (__stdcall *)(_DWORD))this->super.super.super.process->Unk_6F)(MEMORY[0xB378A8]); /*0x671717*/
    }
  }
  if ( this->unk618 > 0.0 ) /*0x671732*/
  {
    v16 = this->unk618 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x67174c*/
  }
  else
  {
    ProcessLists_SortActorDistanceCandidatesAndTrim((EntryData *)&qword_B3BB2C[0x75]); /*0x671739*/
    v16 = g_GameSettingStringPointers_B36CD8[2]; /*0x67173e*/
  }
  this->unk618 = v16; /*0x671754*/
  v17 = stru_B37D30; /*0x67175a*/
  InterfaceManager_GetSingleton(0, 1)->unk008[2] = v17; /*0x67176b*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x67176e*/
  sub_5806D0((int)Singleton, v7, 0.0, v16); /*0x671778*/
  if ( this->pad71E[1] ) /*0x67177d*/
  {
    this->pad71E[1] = 0; /*0x67178a*/
    PlayerCharacter_ProcessQueuedWorldspaceMove( /*0x671791*/
      (int)this,
      (char)&savedregs,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      0.0,
      v16,
      COERCE_FLOAT(1));
  }
  ObjectToActivate = this->ObjectToActivate; /*0x671796*/
  if ( ObjectToActivate ) /*0x67179e*/
  {
    ActivateRef(ObjectToActivate, v7, 0.0, v16, (TESObjectREFR *)this, 0, 0, 1); /*0x6717a7*/
    this->ObjectToActivate = 0; /*0x6717ac*/
    return; /*0x6717b8*/
  }
  if ( this->isFlyCam ) /*0x6717bb*/
    UpdateFlyCam((float *)this); /*0x6717c6*/
  if ( this->isThirdPerson ) /*0x6717cb*/
    this->super.super.super.process->Unk_24(this->super.super.super.process, (UInt32)this); /*0x6717e0*/
  if ( ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process) == 4 /*0x671808*/
    && (v20 = (Actor *)this->vtbl->super.GetMountedHorse(this), v12 = v20, (v166 = v20) != 0) )
  {
    process = v20->members.super.process; /*0x67180a*/
  }
  else
  {
    process = this->super.super.super.process; /*0x67180f*/
  }
  v22 = process->GetMovementFlags(process); /*0x67181e*/
  if ( Actor_IsSneaking(this) && !v12 && sub_5E05B0(this) ) /*0x671830*/
  {
    if ( dword_B3B0B4[0xAD] < 3 ) /*0x671840*/
    {
      if ( LOBYTE(this->unk5A8) ) /*0x671846*/
      {
        if ( this->unk5A4 <= 1.0 ) /*0x671860*/
        {
          this->unk5A4 = *(float *)&MEMORY[0xB33E90][0xC] + this->unk5A4; /*0x671890*/
        }
        else
        {
          ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))this->vtbl->super.ModExperience)( /*0x671875*/
            this,
            0x1F,
            0,
            0.0);
          this->unk5A4 = 0.0; /*0x671879*/
        }
      }
    }
  }
  else if ( Actor_IsSwimming((Actor *)this) && !v12 && sub_5E05B0(this) ) /*0x6718ac*/
  {
    if ( this->unk5A0 <= 1.0 ) /*0x6718c2*/
    {
      this->unk5A0 = *(float *)&MEMORY[0xB33E90][0xC] + this->unk5A0; /*0x6718f0*/
    }
    else
    {
      ((void (__thiscall *)(PlayerCharacter *, int, int, _DWORD))this->vtbl->super.ModExperience)(this, 0xD, 1, 0.0); /*0x6718d8*/
      this->unk5A0 = 0.0; /*0x6718dc*/
    }
  }
  else if ( (v22 & 0x200) != 0 && !v12 && sub_5E05B0(this) ) /*0x671906*/
  {
    if ( this->unk59C <= 1.0 ) /*0x67191c*/
    {
      v23 = this->unk59C + *(float *)&MEMORY[0xB33E90][0xC]; /*0x67193d*/
    }
    else
    {
      ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))this->vtbl->super.ModExperience)(this, 0xD, 0, 0.0); /*0x671931*/
      v23 = 0.0; /*0x671933*/
    }
    this->unk59C = v23; /*0x671943*/
  }
  v129 = v22 & 0xCC00; /*0x671957*/
  MouseAxisMovement = InputGlobals::GetMouseAxisMovement(v142, 1); /*0x671964*/
  v25 = InputGlobals::GetMouseAxisMovement(v142, 2); /*0x671971*/
  v133 = InputGlobals::GetMouseAxisMovement(v142, 3); /*0x671985*/
  JoystickAxisMovement = InputGlobals::GetJoystickAxisMovement(v142, 0, iJoystickLookLeftRight); /*0x671989*/
  HIDWORD(v27) = Double_To_SInt32((double)JoystickAxisMovement * fJoystickLookLRMult) + MouseAxisMovement; /*0x6719ac*/
  v157 = InputGlobals::GetJoystickAxisMovement(v142, 0, iJoystickLookUpDown); /*0x6719b9*/
  LODWORD(v27) = Double_To_SInt32((double)v157 * fJoystickLookUDMult) + v25; /*0x6719cc*/
  v72 = this->isFlyCam == 0; /*0x6719ce*/
  v173 = v27; /*0x6719d5*/
  if ( !v72 ) /*0x6719d9*/
  {
    v27 = 0; /*0x6719db*/
    v173 = 0; /*0x6719e3*/
    v133 = 0; /*0x6719e7*/
  }
  if ( bInvertYValues ) /*0x6719eb*/
  {
    LODWORD(v27) = -(int)v27; /*0x6719f4*/
    LODWORD(v173) = v27; /*0x6719f6*/
  }
  v134 = (float)v133; /*0x6719fe*/
  v28 = v134; /*0x671a04*/
  if ( v134 != 0.0 ) /*0x671a11*/
  {
    if ( MEMORY[0xB3BB04] || (v127 = 1, this->isThirdPerson) ) /*0x671a20*/
    {
      *(float *)&unk_B3BB24.vtbl = *(float *)&unk_B3BB24.vtbl - v134 * unk_B36B58; /*0x671a44*/
      v29 = this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0); /*0x671a52*/
      v30 = *(float *)&unk_B3BB24.vtbl; /*0x671a54*/
      if ( v29 ) /*0x671a5c*/
      {
        if ( unk_B36B80 > v30 ) /*0x671a6d*/
          *(float *)&unk_B3BB24.vtbl = unk_B36B80; /*0x671a6f*/
      }
      else if ( unk_B36B60 > v30 ) /*0x671a84*/
      {
        if ( !MEMORY[0xB3BB04] ) /*0x671a86*/
          TogglePOV(this, 1u); /*0x671a93*/
        *(float *)&unk_B3BB24.vtbl = unk_B36B60; /*0x671a9e*/
      }
      v28 = unk_B36B68; /*0x671aae*/
      if ( v28 < *(float *)&unk_B3BB24.vtbl ) /*0x671abd*/
        *(float *)&unk_B3BB24.vtbl = unk_B36B68; /*0x671abf*/
    }
    if ( !this->isThirdPerson && v134 * unk_B36B58 < dbl_A2FC68 ) /*0x671ae7*/
    {
      TogglePOV(this, 0); /*0x671aed*/
      if ( *(float *)&unk_B3BB24.vtbl < dbl_A3F3D0 ) /*0x671b03*/
        *(float *)&unk_B3BB24.vtbl = flt_A3D8F0; /*0x671b0b*/
    }
  }
  unk_B3BAC8 = this->vtbl->super.super.GetZRotation((MobileObject *)this); /*0x671b21*/
  AimPitch = Actor_GetAimPitch((Actor *)this); /*0x671b29*/
  unk_B3BAC4 = AimPitch; /*0x671b2e*/
  if ( MEMORY[0xB3BB04] /*0x671b4c*/
    && !((int (__thiscall *)(LowProcess *))this->super.super.super.process->Unk_11E)(this->super.super.super.process) )
  {
    v32 = dbl_A31C78; /*0x671b5a*/
    v6 = unk_B3BB28; /*0x671b71*/
    v7 = (double)SHIDWORD(v173) * v32 * unk_B36B88 * deltaTime + v6; /*0x671b79*/
    unk_B3BB28 = v7; /*0x671b7b*/
    v28 = v32 * (double)(int)v173 * unk_B36B90; /*0x671b85*/
    v33 = deltaTime * v28 + *(float *)&unk_B3BB20; /*0x671b8d*/
    *(float *)&unk_B3BB20 = v33; /*0x671b93*/
    goto LABEL_72; /*0x671b93*/
  }
  if ( HIDWORD(v27) || v166 ) /*0x671c4c*/
  {
    AimPitch = (double)SHIDWORD(v173) * flt_B14EE8; /*0x671c58*/
    v135 = AimPitch; /*0x671c5e*/
    if ( HIDWORD(v27) ) /*0x671c62*/
    {
      AimPitch = 0.0; /*0x671c64*/
      if ( v135 >= 0.0 ) /*0x671c6f*/
        v129 |= 0x20u; /*0x671c78*/
      else
        v129 |= 0x10u; /*0x671c71*/
    }
    if ( !Actor::GetDeadState((Actor *)this) /*0x671ca9*/
      && Actor_GetCurrentAction(this) != 8
      && !this->isWakeUpPackage
      && !this->isTravelPackage )
    {
      v35 = ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process); /*0x671cc1*/
      if ( v35 ) /*0x671cc5*/
      {
        if ( v35 != 4 ) /*0x671cca*/
          goto LABEL_104; /*0x671cca*/
        v158 = this->unk61C + v135; /*0x671cda*/
        AimPitch = v158; /*0x671cde*/
        this->unk61C = v158; /*0x671ce2*/
        if ( v158 >= dbl_A73DD0 ) /*0x671cf3*/
        {
          if ( AimPitch <= dbl_A6E740 ) /*0x671d0a*/
            goto LABEL_99; /*0x671d0a*/
          AimPitch = flt_A3F3E0; /*0x671d0c*/
        }
        else
        {
          AimPitch = flt_A3721C; /*0x671cf7*/
        }
        this->unk61C = AimPitch; /*0x671d12*/
LABEL_99:
        if ( v166 ) /*0x671d1d*/
        {
          AimPitch = flt_A35AA4; /*0x671d1f*/
          flt_B14E5C = flt_A35AA4; /*0x671d25*/
        }
        goto LABEL_104; /*0x671d2b*/
      }
      AimPitch = v135; /*0x671d37*/
      v159 = fabs(v135); /*0x671d3f*/
      v7 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B14EE8) * dbl_A2F920; /*0x671d49*/
      flt_B14E5C = v159 / v7; /*0x671d51*/
      v28 = flt_A35AA4; /*0x671d57*/
      if ( v28 < flt_B14E5C ) /*0x671d68*/
        flt_B14E5C = flt_A35AA4; /*0x671d6a*/
      sub_659B90((int *)this, AimPitch, v135); /*0x671d7a*/
    }
  }
LABEL_104:
  if ( (_DWORD)v27 ) /*0x671d81*/
  {
    v160 = (double)(int)v173 * flt_B14EE8; /*0x671d90*/
    AimPitch = v160; /*0x671d94*/
    sub_65ABC0((TESObjectREFR *)this, v160); /*0x671d9b*/
  }
  v33 = sub_633250((int)this->super.super.super.process, (char)&savedregs, v7, AimPitch, v28, (Actor *)this); /*0x671da4*/
  if ( v36 ) /*0x671dab*/
  {
    if ( this->unk574 ) /*0x671db1*/
      sub_66A670((TESObjectREFR *)this); /*0x671dbc*/
    sub_65E900((TESObjectREFR *)this); /*0x671dc3*/
    this->isThirdPerson = this->isThirdPerson == 0; /*0x671ddb*/
    sub_603CA0((Actor *)this, v7, v28, deltaTime, deltaTime); /*0x671de1*/
    this->isThirdPerson = this->isThirdPerson == 0; /*0x671df3*/
    sub_603CA0((Actor *)this, v7, v28, deltaTime, deltaTime); /*0x671dff*/
    sub_66B710(this, deltaTime, 0); /*0x671e08*/
    return; /*0x671e13*/
  }
LABEL_72:
  if ( !this->isWakeUpPackage /*0x671bbf*/
    && !this->isTravelPackage
    && !this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) )
  {
    editorPackage = reference->super.super.super.process->editorPackage; /*0x671bd2*/
    if ( editorPackage ) /*0x671bd7*/
    {
      editorPackage->__vftable->super.Destroy((TESForm *)editorPackage, 1); /*0x671be0*/
      reference->super.super.super.process->editorPackage = 0; /*0x671bea*/
    }
    if ( ((int (__thiscall *)(LowProcess *))reference->super.super.super.process->Unk_5C)(reference->super.super.super.process) ) /*0x671c02*/
      reference->super.super.super.process->SetCurrentPackage(reference->super.super.super.process, 0); /*0x671c1a*/
    if ( this->bCanLevelUp && byte_B14E88 ) /*0x671c29*/
    {
      LevelUpMenu_Open(v7, v28, v33); /*0x671c36*/
      return; /*0x671c41*/
    }
    sub_6606F0((int)this); /*0x671e18*/
    sub_65DA20(v37); /*0x671e1d*/
    if ( InputGlobals::QueryControlState(v142, 8, 1) ) /*0x671e2c*/
    {
      if ( IsWeaponReady(this) && !this->unk5C0 && Actor_GetCurrentAction(this) == 0xFFFFFFFF ) /*0x671e53*/
      {
        v38 = this->super.super.super.process->GetCombatMode(this->super.super.super.process); /*0x671e60*/
        sub_5E6D70(this, v38 == 0); /*0x671e6e*/
      }
    }
    if ( InputGlobals::QueryControlState(v142, 0xB, 1) ) /*0x671e79*/
      this->AlwaysRun = this->AlwaysRun == 0; /*0x671e8c*/
    if ( InputGlobals::QueryControlState(v142, 0xC, 1) ) /*0x671e98*/
      this->AutoMove = this->AutoMove == 0; /*0x671eab*/
    if ( this->AutoMove ) /*0x671eb1*/
    {
      if ( InputGlobals::QueryControlState(v142, 0, 0) /*0x671ef8*/
        || InputGlobals::QueryControlState(v142, 1, 0)
        || (InputGlobals::QueryControlState(v142, 3, 0) || InputGlobals::QueryControlState(v142, 2, 0)) && !v166 )
      {
        this->AutoMove = 0; /*0x671f05*/
      }
      else
      {
        InputGlobals::SendControlPress(v142, 0); /*0x671efe*/
      }
    }
    if ( !v166 ) /*0x671f11*/
    {
      if ( InputGlobals::QueryControlState(v142, 9, 1) ) /*0x671f19*/
      {
        if ( !this->vtbl->super.super.super.HasFatigue((TESObjectREFR *)this) /*0x671f6a*/
          && !this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0)
          && !this->vtbl->super.super.super.GetKnockedState((TESObjectREFR *)this)
          && Actor::GetDeadState((Actor *)this) != 5
          && Actor::GetDeadState((Actor *)this) != 3 )
        {
          if ( (v129 & 0x400) != 0 ) /*0x671f75*/
            v129 &= 0xFBFFu; /*0x671f77*/
          else
            v129 |= 0x400u; /*0x671f81*/
        }
      }
    }
    if ( *((_WORD *)v143 + 0x5B) ) /*0x671f89*/
      v39 = *v143[0x2C]; /*0x671f9d*/
    else
      v39 = 0; /*0x671f93*/
    v40 = this->super.super.super.super.pos[1]; /*0x671fa1*/
    v162 = 1.0; /*0x671fa4*/
    v41 = (const void *)(v39 + 0x30); /*0x671fa8*/
    v42 = this->super.super.super.super.pos[2]; /*0x671fad*/
    a2a = 0.0; /*0x671fb0*/
    v164 = 0.0; /*0x671fb9*/
    qmemcpy(v177, v41, sizeof(v177)); /*0x671fc1*/
    v165.x = this->super.super.super.super.pos[0]; /*0x671fcd*/
    x = v165.x; /*0x671fd1*/
    v170 = 1.0; /*0x671fd9*/
    flags = this->super.super.super.super.super.flags; /*0x671fdd*/
    v162 = v177[1]; /*0x671fe0*/
    v165.y = v40; /*0x671feb*/
    v175 = v40; /*0x671fef*/
    v165.z = v42; /*0x671ff7*/
    a2a = v177[4]; /*0x671ffb*/
    v176 = v42; /*0x671fff*/
    v44 = v177[7]; /*0x672007*/
    v164 = v177[7]; /*0x672014*/
    v171 = 0.0; /*0x672018*/
    v172 = 0.0; /*0x67201c*/
    if ( (flags & 0x10) != 0 ) /*0x672020*/
    {
      v170 = v177[0]; /*0x672039*/
      v171 = v177[3]; /*0x672044*/
      v172 = v177[6]; /*0x67204f*/
    }
    else
    {
      v164 = 0.0; /*0x672026*/
      Vector3_NormalizeInPlace(&v162); /*0x67202a*/
    }
    updated = 0; /*0x67205a*/
    if ( this->unk57CState == 2 ) /*0x67205f*/
      updated = Player_UpdateGrabObjectAttackControl((TESObjectREFR *)this, v7, v44, deltaTime, SLODWORD(deltaTime)); /*0x67206f*/
    sub_663740((int *)this); /*0x672075*/
    v45 = InputGlobals::GetJoystickAxisMovement(v142, 0, iJoystickMoveLeftRight); /*0x672089*/
    v46 = Double_To_SInt32((double)v45 * fJoystickMoveLRMult); /*0x6720a1*/
    v144 = InputGlobals::GetJoystickAxisMovement(v142, 0, iJoystickMoveFrontBack); /*0x6720b2*/
    v161 = Double_To_SInt32((double)v144 * fJoystickMoveFBMult); /*0x6720c7*/
    if ( v46 ) /*0x6720cb*/
    {
      if ( v46 <= 0 ) /*0x6720cd*/
        InputGlobals::SendControlPress(v142, 2); /*0x6720db*/
      else
        InputGlobals::SendControlPress(v142, 3); /*0x6720d1*/
      flt_B14E5C = (double)(int)abs32(v46) * dbl_A73E80; /*0x6720f5*/
      if ( flt_A35AA4 < (double)flt_B14E5C ) /*0x67210c*/
        flt_B14E5C = flt_A35AA4; /*0x67210e*/
    }
    v47 = abs32(v161); /*0x672121*/
    v48 = abs32(v46); /*0x67212a*/
    v136 = v47; /*0x67212e*/
    if ( v47 >= v48 ) /*0x672136*/
    {
      if ( v161 ) /*0x672160*/
      {
        if ( v161 >= 0 ) /*0x672162*/
          InputGlobals::SendControlPress(v142, 1); /*0x672172*/
        else
          InputGlobals::SendControlPress(v142, 0); /*0x672166*/
        v47 = v136; /*0x672177*/
        flt_B14E58 = (double)v136 * dbl_A73E80; /*0x672185*/
      }
    }
    else
    {
      flt_B14E58 = (double)v48 * dbl_A73E80; /*0x672144*/
      if ( v46 >= 0 ) /*0x67214a*/
        v129 |= 8u; /*0x672153*/
      else
        v129 |= 4u; /*0x67214c*/
    }
    if ( flt_B14E58 > 1.0 ) /*0x672198*/
      flt_B14E58 = 1.0; /*0x67219a*/
    if ( v48 > 0x62 || v47 > 0x62 ) /*0x6721ac*/
      InputGlobals::SendControlPress(v142, 0xA); /*0x6721b4*/
    if ( this->AlwaysRun ) /*0x6721b9*/
    {
      v49 = v142; /*0x6721c6*/
      if ( !InputGlobals::QueryControlState(v142, 0xA, 1) && !InputGlobals::QueryControlState(v142, 0xA, 0) ) /*0x6721da*/
      {
        InputGlobals::SendControlPress(v142, 0xA); /*0x6721e7*/
        v129 |= 0x200u; /*0x6721ec*/
LABEL_173:
        v145 = sub_5E65B0((TESObjectREFR *)this); /*0x672223*/
        v72 = this->isFlyCam == 0; /*0x67222e*/
        v146 = flt_B14E58 * v145; /*0x67223f*/
        v170 = v146 * v170; /*0x672255*/
        v50 = v171 * v146; /*0x67225d*/
        v171 = v50; /*0x67225f*/
        v172 = v146 * v172; /*0x672267*/
        v162 = v146 * v162; /*0x672279*/
        v51 = a2a * v146; /*0x672281*/
        a2a = v51; /*0x672283*/
        v52 = v146 * v164; /*0x672287*/
        v164 = v52; /*0x67228b*/
        if ( !v72 ) /*0x67228f*/
          goto LABEL_194; /*0x67228f*/
        if ( InputGlobals::QueryControlState(v49, 0, 1) || InputGlobals::QueryControlState(v49, 0, 0) ) /*0x6722a8*/
        {
          v53 = v129; /*0x6722b5*/
          v165.x = v165.x + v162; /*0x6722c2*/
          v165.y = v165.y + a2a; /*0x6722ce*/
          v52 = v165.z + v164; /*0x6722d6*/
          v165.z = v52; /*0x6722da*/
          if ( (v129 & 0x200) == 0 ) /*0x6722de*/
            v53 = v129 | 0x100; /*0x6722e0*/
          v129 = v53 | 1; /*0x6722e8*/
        }
        if ( InputGlobals::QueryControlState(v49, 1, 1) || InputGlobals::QueryControlState(v49, 1, 0) ) /*0x672300*/
        {
          v54 = v129; /*0x67230d*/
          v165.x = v165.x - v162; /*0x67231a*/
          v165.y = v165.y - a2a; /*0x672326*/
          v52 = v165.z - v164; /*0x67232e*/
          v165.z = v52; /*0x672332*/
          if ( (v129 & 0x200) == 0 ) /*0x672336*/
            v54 = v129 | 0x100; /*0x672338*/
          v129 = v54 | 2; /*0x672340*/
        }
        if ( InputGlobals::QueryControlState(v49, 2, 1) || InputGlobals::QueryControlState(v49, 2, 0) ) /*0x672358*/
        {
          v55 = v129; /*0x672365*/
          v165.x = v165.x - v170; /*0x672372*/
          v165.y = v165.y - v171; /*0x67237e*/
          v52 = v165.z - v172; /*0x672386*/
          v165.z = v52; /*0x67238a*/
          if ( (v129 & 0x200) == 0 ) /*0x67238e*/
            v55 = v129 | 0x100; /*0x672390*/
          v129 = v55 | 4; /*0x672398*/
        }
        if ( InputGlobals::QueryControlState(v49, 3, 1) || InputGlobals::QueryControlState(v49, 3, 0) ) /*0x6723b0*/
        {
          v56 = v129; /*0x6723bd*/
          v165.x = v165.x + v170; /*0x6723ca*/
          v165.y = v165.y + v171; /*0x6723d6*/
          v52 = v165.z + v172; /*0x6723de*/
          v165.z = v52; /*0x6723e2*/
          if ( (v129 & 0x200) == 0 ) /*0x6723e6*/
            v56 = v129 | 0x100; /*0x6723e8*/
          v57 = v56 | 8; /*0x6723ed*/
          v129 = v57; /*0x6723f0*/
        }
        else
        {
LABEL_194:
          LOWORD(v57) = v129; /*0x6723f6*/
        }
        v58 = (MobileObject *)v166; /*0x6723fa*/
        if ( v166 ) /*0x672400*/
        {
          v59 = v57 & 0xFFCF; /*0x672406*/
          v130 = v59; /*0x67240d*/
          if ( (v59 & 4) != 0 ) /*0x672411*/
          {
            qword_B3BB2C[0x70] = (double)MEMORY[0xB37520] * deltaTime + qword_B3BB2C[0x70]; /*0x67242a*/
            v137 = (float)MEMORY[0xB37518]; /*0x672436*/
            v50 = v137; /*0x672440*/
            if ( v137 < (double)qword_B3BB2C[0x70] ) /*0x67244d*/
              qword_B3BB2C[0x70] = v137; /*0x67244f*/
            v51 = qword_B3BB2C[0x70] * dbl_A73E78; /*0x672460*/
            v147 = deltaTime * v51 * flt_B14E5C; /*0x672470*/
            sub_659B90((int *)v58, v147, v147); /*0x67247b*/
            v130 |= 0x10u; /*0x672480*/
            LOBYTE(v59) = v130; /*0x672485*/
          }
          else
          {
            qword_B3BB2C[0x70] = 0.0; /*0x67248d*/
          }
          if ( (v59 & 8) != 0 ) /*0x672495*/
          {
            qword_B3BB2C[0x6F] = (double)MEMORY[0xB37520] * deltaTime + qword_B3BB2C[0x6F]; /*0x6724ae*/
            v138 = (float)MEMORY[0xB37518]; /*0x6724ba*/
            v50 = v138; /*0x6724c4*/
            if ( v138 < (double)qword_B3BB2C[0x6F] ) /*0x6724d1*/
              qword_B3BB2C[0x6F] = v138; /*0x6724d3*/
            v51 = qword_B3BB2C[0x6F] * dbl_A31C78; /*0x6724e4*/
            v148 = deltaTime * v51 * flt_B14E5C; /*0x6724f4*/
            sub_659B90((int *)v58, v148, v148); /*0x6724ff*/
            v130 |= 0x20u; /*0x672504*/
          }
          else
          {
            qword_B3BB2C[0x6F] = 0.0; /*0x67250d*/
          }
          v129 = v130 & 0xFFF3; /*0x672521*/
          ((void (__thiscall *)(LowProcess *, int))v58->process->Unk_B1)(v58->process, v129); /*0x67252c*/
          if ( (v129 & 1) != 0 && (v129 & 0x3E) == 0 ) /*0x67253a*/
          {
            if ( InputGlobals::QueryControlState(v49, 0xD, 1) ) /*0x672542*/
            {
              if ( !((unsigned __int8 (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_97)(this) ) /*0x672555*/
              {
                if ( (*((_DWORD *)MobileObject_GetCharProxy(v58) + 0x7D) & 0x400) != 0 ) /*0x67256e*/
                  v58->vtbl->Jump(v58); /*0x67257a*/
                v127 = 1; /*0x67257c*/
              }
            }
          }
          v52 = Actor_GetAimPitch((Actor *)this); /*0x672583*/
          duration = v52; /*0x67258b*/
          sub_65A650((TESObjectREFR *)v58, duration); /*0x67258e*/
        }
        else
        {
          ((void (__thiscall *)(LowProcess *, int))this->super.super.super.process->Unk_B1)( /*0x6725a5*/
            this->super.super.super.process,
            v129);
        }
        sub_66C650((Concurrency::details::SchedulerBase *)this); /*0x6725a9*/
        vtbl = this->vtbl; /*0x6725b4*/
        isThirdPerson = this->isThirdPerson; /*0x6725b6*/
        GetKnockedState = vtbl->super.super.super.GetKnockedState; /*0x6725ba*/
        this->isThirdPerson = 1; /*0x6725c2*/
        if ( GetKnockedState((TESObjectREFR *)this) /*0x67261d*/
          || this->unk5C0
          || this->vtbl->super.super.super.HasFatigue((TESObjectREFR *)this)
          || Actor::GetDeadState((Actor *)this)
          || Actor_GetCurrentAction(this) == 8
          || ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process) )
        {
          ((void (__thiscall *)(LowProcess *, int, _DWORD))this->super.super.super.process->Unk_B0)( /*0x672bad*/
            this->super.super.super.process,
            0x33F,
            0);
          if ( ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process) != 4 ) /*0x672bbf*/
          {
            if ( unk_B3B43D ) /*0x672bc8*/
              sub_5C1000(v51); /*0x672bd1*/
LABEL_300:
            if ( InputGlobals::QueryControlState(v49, 0x10, 1) && !this->unk5C0 ) /*0x672be9*/
            {
              if ( this->JailedState ) /*0x672bf6*/
              {
                ShowUIMessageBox( /*0x672c13*/
                  (char *)MEMORY[0xB38CF0],
                  v50,
                  v51,
                  v52,
                  (char *)stru_B38AD0,
                  0,
                  1,
                  (char *)MEMORY[0xB38CF0],
                  0);
                goto LABEL_321; /*0x672c13*/
              }
              if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)this, 0) ) /*0x672c1a*/
              {
                GameUI_QueueMessage((const char *)stru_B38AE0, 0, 1u, fConstant_2); /*0x672c37*/
                goto LABEL_321; /*0x672c3f*/
              }
              if ( this->vtbl->super.IsTresspassing((Actor *)this) ) /*0x672c4e*/
              {
                ShowUIMessageBox( /*0x672c68*/
                  (char *)MEMORY[0xB38CF0],
                  v50,
                  v51,
                  v52,
                  (char *)stru_B38AE8,
                  0,
                  1,
                  (char *)MEMORY[0xB38CF0],
                  0);
                goto LABEL_321; /*0x672c68*/
              }
              if ( sub_65D9E0(this) ) /*0x672c6f*/
              {
                v73 = (char *)stru_B38AD8; /*0x672c78*/
LABEL_320:
                ShowUIMessageBox(v73, v50, v51, v52, v73, 0, 1, (char *)MEMORY[0xB38CF0], 0); /*0x672d7f*/
                goto LABEL_321; /*0x672d8c*/
              }
              v52 = flt_A6E688; /*0x672c83*/
              durationb = flt_A6E688; /*0x672c8c*/
              arg0_4 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x672c96*/
              v74 = this->vtbl->super.super.super.GetPos(this); /*0x672c9f*/
              if ( Actor_IsUnderwater__(this, (int)v74, arg0_4, durationb) ) /*0x672ca4*/
              {
                ShowUIMessageBox( /*0x672cc1*/
                  (char *)MEMORY[0xB38CF0],
                  v50,
                  v51,
                  v52,
                  (char *)stru_B38AF0,
                  0,
                  1,
                  (char *)MEMORY[0xB38CF0],
                  0);
                goto LABEL_321; /*0x672cc1*/
              }
              v75 = sub_4D8B90((TESObjectREFR *)reference); /*0x672ccc*/
              if ( ActorProcessManager::AreHostilesNEarby((int)&qword_B3BB2C[0x75], (signed int)v49, v75, duration_4) ) /*0x672cd7*/
              {
                GameUI_QueueMessage((const char *)stru_B38AF8, 0, 1u, fConstant_2); /*0x672cf4*/
                goto LABEL_321; /*0x672cfc*/
              }
              v76 = MobileObject_GetCharProxy((MobileObject *)reference); /*0x672d07*/
              if ( hkCharacterContext_GetStateId((_DWORD *)v76 + 0x78) == 1 /*0x672d35*/
                || (v77 = MobileObject_GetCharProxy((MobileObject *)reference),
                    hkCharacterContext_GetStateId((_DWORD *)v77 + 0x78) == 2) )
              {
                v73 = (char *)stru_B38B00; /*0x672d79*/
                goto LABEL_320; /*0x672d79*/
              }
              DwordAtOffset40 = Shared_GetDwordAtOffset40(reference); /*0x672d3d*/
              if ( sub_4CA6A0(DwordAtOffset40) ) /*0x672d44*/
              {
                ShowUIMessageBox( /*0x672d61*/
                  (char *)MEMORY[0xB38CF0],
                  v50,
                  v51,
                  v52,
                  (char *)stru_B38B08,
                  0,
                  1,
                  (char *)MEMORY[0xB38CF0],
                  0);
              }
              else
              {
                sub_676EE0((int)&qword_B3BB2C[0x75]); /*0x672d68*/
                ShowSleepWaitMenu(0); /*0x672d6f*/
              }
            }
LABEL_321:
            if ( this->vtbl->super.super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sitting ) /*0x672da3*/
            {
              if ( v58 ) /*0x672da7*/
              {
                v79 = this->vtbl->super.super.super.GetAnimData(this); /*0x672dbb*/
                v80 = v166->vtbl->super.super.GetAnimData(v166); /*0x672dc3*/
                if ( v80 ) /*0x672dc7*/
                {
                  if ( v79 ) /*0x672dcb*/
                    v80->unk94 = v79->unk94; /*0x672dd3*/
                }
                ((void (__stdcall *)(_DWORD))v166->vtbl->ProcessControl)(LODWORD(deltaTime)); /*0x672dec*/
              }
            }
            this->isThirdPerson = 1; /*0x672dee*/
            Actor_ProcessAction((Actor *)this, flt_B14E58, flt_B14E5C); /*0x672e0d*/
            v72 = this->isSleeping == 0; /*0x672e12*/
            this->isThirdPerson = isThirdPerson; /*0x672e1d*/
            if ( !v72 ) /*0x672e23*/
              sub_65F770((MagicTarget *)this, (int)this, (int)v49, v50); /*0x672e27*/
            if ( MEMORY[0xB33A34] || byte_B14F40 ) /*0x672e35*/
            {
              if ( (this->super.super.super.super.super.flags & 0x10) == 0 ) /*0x672e55*/
              {
                v81 = MobileObject_GetCharProxy((MobileObject *)this); /*0x672e5e*/
                if ( v81 ) /*0x672e62*/
                {
                  sub_452A10(v81, &v165); /*0x672e6b*/
                  v82 = *((_OWORD **)v81 + 2); /*0x672e70*/
                  if ( v82 ) /*0x672e75*/
                    sub_8AC0B0(v82, &unk_BA7A40); /*0x672e7e*/
                }
                sub_46A9C0(this, 1); /*0x672e87*/
              }
              Unk_73 = this->vtbl->super.super.Unk_73; /*0x672e96*/
              v154 = v165.z - v176; /*0x672ea9*/
              v156 = v154 * deltaTime; /*0x672eb4*/
              v50 = x + 0.0; /*0x672ec0*/
              v162 = v50; /*0x672ec2*/
              v51 = v175 + 0.0; /*0x672ec6*/
              a2a = v51; /*0x672eca*/
              v164 = v176 + v156; /*0x672ed2*/
              ((void (__thiscall *)(PlayerCharacter *, float *))Unk_73)(this, &v162); /*0x672ed6*/
            }
            else
            {
              sub_46A9C0(this, 0); /*0x672e42*/
            }
            Shared_NoOpVirtual_60D0A0(this); /*0x672eda*/
            v84 = ((double (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD, _DWORD, _DWORD))this->super.super.super.process->Unk_B2)( /*0x672f04*/
                    this->super.super.super.process,
                    this,
                    LODWORD(v170),
                    LODWORD(v171),
                    LODWORD(v172));
            PlayerCharacter_ProcessQueuedMoveIfAllowed((int)this, v2, v3, v4, v5, v6, v50, v51, v84); /*0x672f08*/
            if ( v173 || (v129 & 0xF) != 0 ) /*0x672f20*/
              v127 = 1; /*0x672f22*/
            if ( InputGlobals::QueryControlState(v49, 0x1A, 1) ) /*0x672f2d*/
              sub_466AD0( /*0x672f3c*/
                (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)g_TESSaveLoadGame,
                v2,
                v3,
                v4,
                v5,
                v6,
                v50,
                v51);
            if ( InputGlobals::QueryControlState(v49, 0x1B, 1) ) /*0x672f47*/
              sub_466B00((char *)g_TESSaveLoadGame, (char)&savedregs, v2, v3, v4, v5, v6, v50, v51); /*0x672f56*/
            if ( InputGlobals::QueryControlState(v49, 0xE, 1) || InputGlobals::QueryControlState(v49, 0xE, 0) ) /*0x672f73*/
            {
              if ( !InterfaceManager_IsMenuMode() ) /*0x673020*/
              {
                v127 = 1; /*0x67302e*/
                SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)unk_B36B50); /*0x673033*/
                v84 = qword_B3BB2C[0x6D]; /*0x673038*/
                v51 = *(float *)SafeFloatPointer; /*0x67303e*/
                if ( v51 > v84 || MEMORY[0xB3BB04] ) /*0x673049*/
                {
                  v84 = v84 + deltaTime; /*0x67306d*/
LABEL_360:
                  qword_B3BB2C[0x6D] = v84; /*0x673070*/
                  goto LABEL_361; /*0x673070*/
                }
                MEMORY[0xB3BB04] = 1; /*0x673058*/
                byte_B14E4D = 1; /*0x67305f*/
                ToggleBody(this, 0); /*0x673066*/
              }
            }
            else if ( InputGlobals::QueryControlState(v49, 0xE, 2) || MEMORY[0xB3BB04] && !unk_B3BB05 ) /*0x672f9b*/
            {
              v51 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36B50); /*0x672fb7*/
              if ( v51 <= qword_B3BB2C[0x6D] ) /*0x672fc0*/
              {
                if ( MEMORY[0xB3BB04] ) /*0x672fee*/
                {
                  byte_B14E4D = 1; /*0x672ff7*/
                  v85 = this->isThirdPerson == 0; /*0x673007*/
                  MEMORY[0xB3BB04] = 0; /*0x67300a*/
                  ToggleBody(this, v85); /*0x673012*/
                }
                v84 = 0.0; /*0x673017*/
                v127 = 1; /*0x673019*/
              }
              else
              {
                this->isThirdPerson ^= 1u; /*0x672fc2*/
                byte_B14E4D = 1; /*0x672fc9*/
                ToggleBody(this, this->isThirdPerson == 0); /*0x672fdd*/
                v84 = 0.0; /*0x672fe2*/
                v127 = 1; /*0x672fe4*/
              }
              goto LABEL_360; /*0x672fe9*/
            }
LABEL_361:
            if ( !InputGlobals::QueryControlState(v49, 5, 1) /*0x6730ba*/
              || InterfaceManager_IsMenuMode()
              || this->unk5C0
              || this->vtbl->super.super.super.HasFatigue((TESObjectREFR *)this)
              || updated )
            {
LABEL_388:
              if ( unk_B3BB05 ) /*0x67322b*/
              {
                if ( v127 ) /*0x67323d*/
                {
                  v72 = this->isThirdPerson == 0; /*0x67323f*/
                  unk_B3BB08 = 0.0; /*0x67324a*/
                  unk_B3BB05 = 0; /*0x673253*/
                  MEMORY[0xB3BB04] = 0; /*0x67325a*/
                  ToggleBody(this, v72); /*0x673262*/
                }
                else
                {
                  qword_B3BB2C[2] = qword_B3BB2C[2] /*0x67328e*/
                                  - *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36BA0)
                                  * dbl_A31C78
                                  * deltaTime;
                  qword_B3BB2C[0x6C] = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36BA8) /*0x6732af*/
                                     * dbl_A31C78
                                     * deltaTime
                                     + qword_B3BB2C[0x6C];
                  v94 = GameSetting_GetSafeFloatPointer((int *)unk_B36BB0); /*0x6732c0*/
                  v155 = sin(qword_B3BB2C[0x6C]); /*0x6732c7*/
                  qword_B3BB2C[0] = v155 * *(float *)v94 * dbl_A31C78; /*0x6732d7*/
                  v95 = qword_B3BB2C[0x6C]; /*0x6732dd*/
                  v51 = dbl_A3D5B0; /*0x6732e3*/
                  if ( v51 < v95 ) /*0x6732f0*/
                    qword_B3BB2C[0x6C] = v95 - v51; /*0x6732f8*/
                }
              }
              else if ( !MEMORY[0xB3BB04] ) /*0x673303*/
              {
                if ( v127 ) /*0x673315*/
                  v96 = 0.0; /*0x673317*/
                else
                  v96 = unk_B3BB08 + deltaTime; /*0x673321*/
                unk_B3BB08 = v96; /*0x673329*/
                v51 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36B98); /*0x67333a*/
                if ( v51 < unk_B3BB08 ) /*0x673343*/
                {
                  v97 = 0.0; /*0x673345*/
                  qword_B3BB2C[2] = 0.0; /*0x673347*/
                  if ( this->isThirdPerson ) /*0x67334d*/
                    v97 = Actor_GetAimPitch((Actor *)this); /*0x67335a*/
                  qword_B3BB2C[0] = v97; /*0x67335f*/
                  byte_B14E4D = 1; /*0x673365*/
                  v72 = this->isThirdPerson == 0; /*0x67336c*/
                  unk_B3BB05 = 1; /*0x673373*/
                  MEMORY[0xB3BB04] = 1; /*0x67337a*/
                  if ( v72 ) /*0x673381*/
                    ToggleBody(this, 0); /*0x673387*/
                }
              }
              v98 = deltaTime; /*0x673392*/
              Player_ProcessGrabControl((int *)this, v50, v51, deltaTime, SLODWORD(deltaTime)); /*0x67339b*/
              v99 = (void *)unk_B3BB1C; /*0x6733a0*/
              if ( unk_B3BB1C ) /*0x6733a0*/
              {
                if ( LODWORD(qword_B3BB2C[0x6B])++ < 0x14u ) /*0x6733b4*/
                {
                  v101 = v165.z + dbl_A3F428; /*0x6733c6*/
                  v162 = v165.x; /*0x6733d0*/
                  a2a = v165.y; /*0x6733d8*/
                  v164 = v101; /*0x6733e0*/
                  v102 = dbl_A4D910; /*0x6733f5*/
                  v51 = v165.y + v102; /*0x6733f5*/
                  a2a = v51; /*0x6733f7*/
                  v98 = v102 + v165.x; /*0x6733fb*/
                  v162 = v98; /*0x6733ff*/
                  sub_4D69A0(v99, &v162); /*0x673403*/
                  sub_4D9960((int *)unk_B3BB1C, &g_zeroNiPoint3.x); /*0x673413*/
                }
              }
              if ( MEMORY[0xB3BB04] || this->isThirdPerson || unk_B3BB05 || InterfaceManager_IsMenuMode() ) /*0x673433*/
                sub_578CF0((char)&savedregs, v50, v51, v98, v6, 0); /*0x673442*/
              else
                sub_578CF0((char)&savedregs, v50, v51, v98, v6, 1); /*0x67343e*/
              if ( !this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) /*0x673466*/
                && !this->vtbl->super.super.IsDead((MobileObject *)this) )
              {
                v103 = this->vtbl; /*0x67346c*/
                durationc = sub_673B00(); /*0x673481*/
                ((void (__thiscall *)(PlayerCharacter *, _DWORD))v103->super.Unk_DA)(this, LODWORD(durationc)); /*0x673484*/
              }
              AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x673488*/
              firstPersonAnimData = this->firstPersonAnimData; /*0x673493*/
              firstPersonAnimData->unkBC = AnimData->unkBC; /*0x673499*/
              firstPersonAnimData->unkC0 = AnimData->unkC0; /*0x6734a6*/
              SetAimingZoom(this, deltaTime); /*0x6734b4*/
              this->isThirdPerson = this->isThirdPerson == 0; /*0x6734c6*/
              sub_603CA0((Actor *)this, v50, v51, deltaTime, deltaTime); /*0x6734d2*/
              v106 = deltaTime; /*0x6734d7*/
              this->isThirdPerson = this->isThirdPerson == 0; /*0x6734ea*/
              sub_603CA0((Actor *)this, v50, v51, deltaTime, deltaTime); /*0x6734f0*/
              if ( !this->isFlyCam ) /*0x6734f5*/
                sub_66B710(this, v106, 0); /*0x673502*/
              if ( ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetKnockedState)(this->super.super.super.process) /*0x673522*/
                || this->vtbl->super.super.super.HasFatigue((TESObjectREFR *)this) )
              {
                if ( this->isThirdPerson ) /*0x673528*/
                {
LABEL_423:
                  sub_4D5370(); /*0x67355c*/
                  if ( !LODWORD(qword_B3BB2C[0x6A]) || LODWORD(qword_B3BB2C[0x6A]) != Shared_GetDwordAtOffset40(this) ) /*0x673577*/
                  {
                    LODWORD(qword_B3BB2C[0x6A]) = Shared_GetDwordAtOffset40(this); /*0x673586*/
                    v107 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x67358b*/
                    if ( sub_43E000(MEMORY[0xB33A1C], v107) ) /*0x673597*/
                    {
                      LoadingAreaMessage((char)&savedregs, v6, v50, v51, v106, v2, v3, v5, v4); /*0x6735aa*/
                      sub_43DF10(MEMORY[0xB33A1C]); /*0x6735b5*/
                      sub_434020(MEMORY[0xB33A10], v50, v51, v106, 1); /*0x6735c2*/
                    }
                  }
                  return; /*0x6735cd*/
                }
                RestoreCamera(this); /*0x673533*/
              }
              if ( !this->isThirdPerson && this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x67354d*/
                TogglePOV(this, 0); /*0x673557*/
              goto LABEL_423; /*0x673557*/
            }
            v87 = (TESObjectREFR *)sub_579540(); /*0x6730c5*/
            if ( this->vtbl->super.GetActorValue((Actor *)this, kActorVal_Invisibility) > 0 ) /*0x6730d7*/
              MagicTarget_RemoveActiveEffectsByCode(&this->super.super.magicTarget, 0x49564E49u, 0); /*0x6730e3*/
            v132 = 0; /*0x6730ea*/
            if ( !v87 ) /*0x6730ef*/
              goto LABEL_376; /*0x6730ef*/
            if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))v87->vtbl->Unk_3A)(v87) ) /*0x6730fb*/
            {
              v88 = OblivionDynamicCast( /*0x673110*/
                      v87,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &ArrowProjectile `RTTI Type Descriptor',
                      0);
              if ( v88 ) /*0x67311a*/
                v132 = v88[0x18] == 0; /*0x673122*/
            }
            if ( !v87->vtbl->IsActor(v87) /*0x67315e*/
              || (v89 = v87[1].vtbl,
                  (*((int (__thiscall **)(TESObjectREFRVtbl *))v89->super.super.InitializeComponent + 0x11F))(v89) != 5)
              && (*((int (__thiscall **)(TESObjectREFRVtbl *))v89->super.super.InitializeComponent + 0x11F))(v89) != 6 )
            {
              if ( !v132 ) /*0x673169*/
              {
LABEL_376:
                sub_5A4980(v50, v51, v84, 0, 0, 0); /*0x673175*/
                if ( v87 ) /*0x67317f*/
                {
                  if ( ActivateRef(v87, v50, v51, v84, (TESObjectREFR *)this, 0, 0, 1) ) /*0x67318a*/
                    goto LABEL_387; /*0x673191*/
                  if ( this->vtbl->super.GetMountedHorse(this) ) /*0x6731a1*/
                  {
                    if ( TESObjectREFR_GetTeleportData(v87) /*0x6731c2*/
                      || v87->vtbl->GetBaseForm(v87)->member.type == kFormType_Activator )
                    {
                      v90 = (TESObjectREFR *)this->vtbl->super.GetMountedHorse(this); /*0x6731d5*/
                      ActivateRef(v90, v50, v51, v84, (TESObjectREFR *)this, 0, 0, 1); /*0x6731d9*/
                    }
                  }
                }
                if ( this->super.super.super.process->GetFurniture(this->super.super.super.process) ) /*0x6731e9*/
                {
                  v91 = this->super.super.super.process; /*0x6731ef*/
                  GetMountedHorse = *(Creature *(__thiscall **)(Actor *))(*(_DWORD *)v91 + 0x378); /*0x6731f4*/
LABEL_386:
                  v93 = (TESObjectREFR *)((int (__fastcall *)(void *))GetMountedHorse)(v91); /*0x673216*/
                  ActivateRef(v93, v50, v51, v84, (TESObjectREFR *)this, 0, 0, 1); /*0x673221*/
                  goto LABEL_387; /*0x673221*/
                }
                if ( this->vtbl->super.GetMountedHorse(this) ) /*0x673206*/
                {
                  GetMountedHorse = this->vtbl->super.GetMountedHorse; /*0x67320e*/
                  v91 = this; /*0x673214*/
                  goto LABEL_386; /*0x673214*/
                }
              }
            }
LABEL_387:
            v127 = 1; /*0x673226*/
            goto LABEL_388; /*0x673226*/
          }
LABEL_297:
          Input_ProcessQuickSlotHotkeys((int)&savedregs, v2, v3, v4, v5, v6, v50, v51, v52); /*0x672bc1*/
          goto LABEL_300; /*0x672bc6*/
        }
        unk57CState = this->unk57CState; /*0x672627*/
        if ( unk57CState == 2 || unk57CState == 3 ) /*0x672639*/
        {
          v52 = 0.0; /*0x672927*/
          unk_B3BAF4 = 0; /*0x672929*/
          unk_B3BAF8 = 0.0; /*0x672933*/
          goto LABEL_263; /*0x672933*/
        }
        if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->super.super.super.process->Unk_B6)(this->super.super.super.process) /*0x672659*/
          && (!MEMORY[0xB3BB04] || unk_B3BB05) )
        {                                       // Sole direct caller: Player_OnInput invokes PlayerCharacter_ProcessAttackControl with ECX=PlayerCharacter, pushes no arguments, and consumes only AL.
          if ( PlayerCharacter_ProcessAttackControl(this) ) /*0x672664*/
            v127 = 1; /*0x67266d*/
        }
        else
        {
          v52 = 0.0; /*0x672674*/
          unk_B3BAF4 = 0; /*0x672676*/
          unk_B3BAF8 = 0.0; /*0x672680*/
        }
        if ( (InputGlobals::QueryControlState(v49, 6, 1) || InputGlobals::QueryControlState(v49, 6, 0)) /*0x6726b7*/
          && ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetCurrentAction)(this->super.super.super.process) != 6 )
        {
          if ( byte_B1501C && Actor_GetCurrentAction(this) == 5 ) /*0x6726d4*/
          {
            LOBYTE(unk_B3BAEA.vtbl) = 1; /*0x6726da*/
            worldFoV = this->worldFoV; /*0x6726ec*/
            byte_B1501C = 0; /*0x6726f0*/
            if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV) <= worldFoV ) /*0x672707*/
            {
              v63 = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF6]); /*0x67278d*/
              v52 = *(float *)&unk_B3BAFC.vtbl; /*0x672792*/
              v51 = *(float *)v63; /*0x672798*/
              if ( v51 < v52 ) /*0x6727a1*/
              {
                v64 = (TESFormVtbl **)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF6]); /*0x6727a8*/
                v52 = *(float *)v64; /*0x6727ad*/
                unk_B3BAFC.vtbl = *v64; /*0x6727af*/
              }
            }
            else
            {
              v150 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV); /*0x67271a*/
              *(float *)&v150 = v150 /*0x67272e*/
                              - *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF2]);
              *(float *)&v150 = fabs(*(float *)&v150); /*0x672738*/
              v151 = (*(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV) - this->worldFoV) / *(float *)&v150; /*0x67275a*/
              v152 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF4]) * v151; /*0x67276e*/
              v52 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF6]) + v152; /*0x672779*/
              *(float *)&unk_B3BAFC.vtbl = v52; /*0x67277d*/
            }
            goto LABEL_247; /*0x672783*/
          }
          v72 = LOBYTE(unk_B3BAEA.vtbl) == 0; /*0x6727b7*/
          byte_B1501C = 1; /*0x6727be*/
          if ( !v72 || MEMORY[0xB3BB04] && !unk_B3BB05 ) /*0x6727d0*/
            goto LABEL_247; /*0x6727d7*/
          Actor_UpdateBlockingState((Actor *)this, 1); /*0x6727db*/
        }
        else
        {
          if ( !InputGlobals::QueryControlState(v49, 6, 2) && InputGlobals::QueryControlState(v49, 6, 0) ) /*0x6727f1*/
            goto LABEL_247; /*0x6727f1*/
          LOBYTE(unk_B3BAEA.vtbl) = 0; /*0x6727fa*/
          if ( ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetCurrentAction)(this->super.super.super.process) != 6 ) /*0x672811*/
            goto LABEL_247; /*0x672811*/
          Actor_UpdateBlockingState((Actor *)this, 0); /*0x672817*/
        }
        v127 = 1; /*0x67281c*/
LABEL_247:
        if ( Player_GetCurrentMagicItem(this) ) /*0x672823*/
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->super.super.super.process->Unk_B6)(this->super.super.super.process) ) /*0x67283b*/
          {
            if ( !InputGlobals::QueryControlState(v49, 7, 1) && !InputGlobals::QueryControlState(v49, 7, 0) /*0x6728a0*/
              || Actor_GetCurrentAction(this) == 2
              || Actor_GetCurrentAction(this) == 4
              || Actor_GetCurrentAction(this) == 5
              || Actor_GetCurrentAction(this) == 3 )
            {
              LOBYTE(qword_B3BB2C[0x6E]) = 0; /*0x67291e*/
            }
            else
            {
              book = this->book; /*0x6728a2*/
              if ( book ) /*0x6728aa*/
              {
                ((void (__thiscall *)(PlayerCharacter *, TESObjectBOOK *, _DWORD))this->vtbl->super.Unk_B4)( /*0x6728b9*/
                  this,
                  book,
                  0);
                v58 = (MobileObject *)v166; /*0x6728bb*/
                v127 = 1; /*0x6728bf*/
              }
              else
              {
                if ( !LOBYTE(qword_B3BB2C[0x6E]) ) /*0x6728c6*/
                {
                  v66 = this->super.super.magicCaster.vtbl; /*0x6728cf*/
                  CurrentMagicItem = Player_GetCurrentMagicItem(this); /*0x6728dd*/
                  v140 = v66->IsMagicItemUsable(&this->super.super.magicCaster, (MagicItem *)CurrentMagicItem, 0, 0, 0); /*0x6728f0*/
                  v68 = Player_GetCurrentMagicItem(this); /*0x6728f4*/
                  MagicCaster_CastMagicItem(&this->super.super.magicCaster.vtbl, v68, 0, 0); /*0x6728fc*/
                  v49 = v142; /*0x672906*/
                  if ( !v140 ) /*0x67290a*/
                    LOBYTE(qword_B3BB2C[0x6E]) = 1; /*0x67290c*/
                }
                v58 = (MobileObject *)v166; /*0x672913*/
                v127 = 1; /*0x672917*/
              }
            }
          }
        }
LABEL_263:
        if ( v58 ) /*0x67293b*/
          goto LABEL_297; /*0x67293b*/
        if ( !InputGlobals::QueryControlState(v49, 0xD, 1) ) /*0x672947*/
          goto LABEL_297; /*0x672947*/
        if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_97)(this) ) /*0x67295e*/
          goto LABEL_297; /*0x67295e*/
        v69 = this->vtbl->super.super.super.GetAnimData(this); /*0x672974*/
        AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v69, 3); /*0x672978*/
        if ( AnimGroup_UsesPowerOrCastNoteTemplate(AnimGroupFromField8Value) /*0x6729b4*/
          || Actor_GetCurrentAction(this) == 9
          || Actor_IsCurrentActionInRange2To5(this)
          && Actor_GetSkillMasteryLevel((Actor *)this, kSkillAV_Acrobatics) <= kSkillMastery_Novice )
        {
          goto LABEL_297; /*0x6729b4*/
        }
        if ( MobileObject_IsJumpSuppressedByFallAnimOrInAir((MobileObject *)this) /*0x6729c7*/
          || (v141 = 1, Actor_IsSwimming((Actor *)this)) )
        {
          v141 = 0; /*0x6729d5*/
        }
        v128 = 0; /*0x6729e0*/
        v169 = InputGlobals::QueryControlState(v49, 6, 0) != 0; /*0x6729ee*/
        IsBlocking = Actor_IsBlocking(this); /*0x6729fd*/
        if ( v169 ) /*0x672a01*/
        {
          if ( !sub_579540() /*0x672a18*/
            && Actor_GetSkillMasteryLevel((Actor *)this, kSkillAV_Acrobatics) >= kSkillMastery_Journeyman )
          {
            v71 = MobileObject_GetCharProxy((MobileObject *)this); /*0x672a28*/
            if ( hkCharacterContext_GetStateId((_DWORD *)v71 + 0x78) ) /*0x672a33*/
              goto LABEL_284; /*0x672a3a*/
            v72 = sub_5F5050((Actor *)this, v129) == 0xFF; /*0x672a48*/
            goto LABEL_283; /*0x672a4d*/
          }
          if ( IsBlocking || (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)this) + 0x7D) & 0x400) == 0 ) /*0x672a69*/
          {
LABEL_284:
            sub_66A670((TESObjectREFR *)this); /*0x672aa0*/
            if ( v141 ) /*0x672aac*/
            {
              if ( !v128 ) /*0x672ab3*/
              {
LABEL_294:
                v127 = 1; /*0x672b8f*/
                goto LABEL_297; /*0x672b8f*/
              }
              if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)this) + 0x7D) & 0x400) != 0 ) /*0x672acc*/
              {
                v52 = 0.0; /*0x672ace*/
                ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))this->vtbl->super.ModExperience)( /*0x672ae2*/
                  this,
                  0x1A,
                  0,
                  0.0);
              }
            }
            if ( v128 ) /*0x672ae9*/
            {
              v153 = (double)this->vtbl->super.GetActorValue((Actor *)this, kActorVal_Encumbrance); /*0x672b07*/
              *(float *)&v153 = v153 / Actor_GetBaseEncumberance((int)this, v153); /*0x672b15*/
              v52 = Calc_FatigueJumpMultiplier_(*(float *)&v153); /*0x672b20*/
              v139 = v52; /*0x672b25*/
              if ( Actor_GetSkillMasteryLevel((Actor *)this, kSkillAV_Acrobatics) >= kSkillMastery_Expert ) /*0x672b38*/
              {
                v52 = v139 * *(float *)GameSetting_GetSafeFloatPointer((int *)MEMORY[0xB37510]); /*0x672b48*/
                v139 = v52; /*0x672b4a*/
              }
              if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)this) + 0x7D) & 0x400) != 0 ) /*0x672b61*/
              {
                v51 = v139; /*0x672b65*/
                v52 = v139; /*0x672b6d*/
                if ( v139 > 0.0 ) /*0x672b72*/
                {
                  v52 = -v52; /*0x672b75*/
                  durationa = v52; /*0x672b79*/
                  Actor_ApplyNegativeFatigueDeltaClamped((Actor *)this, durationa); /*0x672b7c*/
                  v127 = 1; /*0x672b81*/
                  Input_ProcessQuickSlotHotkeys((int)&savedregs, v2, v3, v4, v5, v6, v50, v51, v52); /*0x672b86*/
                  goto LABEL_300; /*0x672b8b*/
                }
              }
            }
            goto LABEL_294; /*0x672b72*/
          }
        }
        else if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)this) + 0x7D) & 0x400) == 0 ) /*0x672a8b*/
        {
          goto LABEL_284; /*0x672a8b*/
        }
        v72 = ((int (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.Jump)(this) == 0; /*0x672a99*/
LABEL_283:
        v128 = !v72; /*0x672a9b*/
        goto LABEL_284; /*0x672a9b*/
      }
    }
    else if ( InputGlobals::QueryControlState(v142, 0xA, 1) || InputGlobals::QueryControlState(v142, 0xA, 0) ) /*0x67220a*/
    {
      v129 |= 0x200u; /*0x672213*/
      v49 = v142; /*0x67221b*/
      goto LABEL_173; /*0x67221d*/
    }
    v49 = v142; /*0x67221f*/
    goto LABEL_173; /*0x67221f*/
  }
  v108 = unk_B3BAE0; /*0x6735d6*/
  if ( v108 <= flt_A31C80 ) /*0x6735e5*/
  {
    if ( this->isTravelPackage ) /*0x6736bd*/
    {
      v111 = this->super.super.super.process; /*0x6736ca*/
      GetSitSleepState = v111->GetSitSleepState; /*0x6736d5*/
      unk_B3BAE0 = v108 + *(float *)&MEMORY[0xB33E90][0xC]; /*0x6736db*/
      if ( ((int (__thiscall *)(LowProcess *))GetSitSleepState)(v111) == 4 /*0x673705*/
        || ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process) == 9
        || !this->super.super.super.process->GetCurrentPackage(this->super.super.super.process) )
      {
        v72 = this->isWakeUpPackage == 0; /*0x67370f*/
        Unk_6F = this->vtbl->super.super.Unk_6F; /*0x673718*/
        this->isTravelPackage = 0; /*0x67371e*/
        if ( !v72 ) /*0x673727*/
          goto LABEL_431; /*0x673727*/
        goto LABEL_432; /*0x673727*/
      }
    }
    else if ( this->isWakeUpPackage ) /*0x673753*/
    {
      v113 = this->super.super.super.process; /*0x67375c*/
      v114 = v113->GetSitSleepState; /*0x673767*/
      unk_B3BAE0 = v108 + *(float *)&MEMORY[0xB33E90][0xC]; /*0x67376d*/
      if ( !((int (__thiscall *)(LowProcess *))v114)(v113) ) /*0x673773*/
      {
        v72 = this->isTravelPackage == 0; /*0x673779*/
        this->isWakeUpPackage = 0; /*0x673780*/
        v115 = this->vtbl->super.super.Unk_6F; /*0x673788*/
        if ( v72 ) /*0x673790*/
          ((void (__stdcall *)(int))v115)(1); /*0x673798*/
        else
          ((void (__stdcall *)(_DWORD))v115)(0); /*0x673794*/
        this->super.super.super.process->SetCurrentPackage(this->super.super.super.process, 0); /*0x6737a7*/
        unk_B3BAE0 = 0.0; /*0x6737ab*/
      }
    }
    sub_605770((Actor *)this, deltaTime); /*0x6737be*/
    ((void (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD, _DWORD, _DWORD))this->super.super.super.process->Unk_B2)( /*0x6737ee*/
      this->super.super.super.process,
      this,
      LODWORD(g_zeroNiPoint3.x),
      LODWORD(g_zeroNiPoint3.y),
      LODWORD(g_zeroNiPoint3.z));
    v116 = 0.0; /*0x6737f0*/
    if ( unk_B36C90[0] <= 0.0 ) /*0x6737ff*/
    {
      if ( Actor::GetDeadState((Actor *)this) == 2 && !unk_B3BB07 ) /*0x6738d9*/
      {
        this->vtbl->super.super.Unk_72((MobileObject *)this); /*0x6738ec*/
        if ( g_TESSaveLoadGame[5].unk030[0] ) /*0x6738f4*/
          ShowUIMessageBox( /*0x67391a*/
            (char *)stru_B38C08,
            v7,
            v108,
            0.0,
            (char *)stru_B38C08,
            (int)sub_663270,
            1,
            (char *)stru_B38C10,
            stru_B38C18);
        else
          MEMORY[0xB33398]->exitToMainMenu = 1; /*0x67392a*/
        unk_B3BB07 = 1; /*0x67392e*/
      }
    }
    else if ( Actor::GetDeadState((Actor *)this) == 2 || Actor::GetDeadState((Actor *)this) == 1 ) /*0x673819*/
    {
      v117 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x67382e*/
      if ( flt_B15018 < 0.0 ) /*0x67383f*/
      {
        v118 = GameSetting_GetSafeFloatPointer((int *)unk_B36C90); /*0x673846*/
        v119 = (double)v117; /*0x673853*/
        if ( v117 < 0 ) /*0x673857*/
          v119 = v119 + flt_A2FC78; /*0x673859*/
        flt_B15018 = v119 / dbl_A2FC70 + *(float *)v118; /*0x673867*/
      }
      v120 = (double)v117; /*0x673873*/
      if ( v117 < 0 ) /*0x673877*/
        v120 = v120 + flt_A2FC78; /*0x673879*/
      v116 = v120 / dbl_A2FC70; /*0x67387f*/
      v108 = flt_B15018; /*0x673885*/
      if ( v108 < v116 ) /*0x673892*/
      {
        v116 = kTerrainLODQuadRayDirectionZ; /*0x67389e*/
        v72 = g_TESSaveLoadGame[5].unk030[0] == 0; /*0x6738a4*/
        flt_B15018 = kTerrainLODQuadRayDirectionZ; /*0x6738ab*/
        if ( v72 ) /*0x6738b1*/
        {
          MEMORY[0xB33398]->exitToMainMenu = 1; /*0x6738c9*/
        }
        else
        {
          sub_5BDA90((char)&savedregs, v7, v108, v116); /*0x6738b3*/
          LoadgameMenu_Open(v2, v3, v4, v5, v6, v7, v108, v116, 0); /*0x6738ba*/
        }
      }
    }
    else
    {
      v116 = kTerrainLODQuadRayDirectionZ; /*0x67381b*/
      flt_B15018 = kTerrainLODQuadRayDirectionZ; /*0x673821*/
    }
    sub_66B710(this, v116, 0); /*0x673939*/
    if ( InputGlobals::QueryControlState(v142, 0x1B, 1) ) /*0x673946*/
    {
      if ( sub_466B00((char *)g_TESSaveLoadGame, (char)&savedregs, v2, v3, v4, v5, v6, v7, v108) ) /*0x673955*/
        flt_B15018 = kTerrainLODQuadRayDirectionZ; /*0x673964*/
    }
  }
  else
  {
    if ( this->isWakeUpPackage /*0x673606*/
      && ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process) == 4 )
    {
      v72 = this->isTravelPackage == 0; /*0x673608*/
      Unk_6F = this->vtbl->super.super.Unk_6F; /*0x673611*/
      this->isWakeUpPackage = 0; /*0x673617*/
      if ( !v72 ) /*0x673620*/
      {
LABEL_431:
        ((void (__stdcall *)(_DWORD))Unk_6F)(0); /*0x673622*/
LABEL_433:
        this->super.super.super.process->SetCurrentPackage(this->super.super.super.process, 0); /*0x67362a*/
        unk_B3BAE0 = 0.0; /*0x67363d*/
        return; /*0x673649*/
      }
LABEL_432:
      ((void (__stdcall *)(int))Unk_6F)(1); /*0x673626*/
      goto LABEL_433; /*0x673628*/
    }
    if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) /*0x673669*/
      || !((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetSitSleepState)(this->super.super.super.process) )
    {
      sub_5EAE70((Actor *)this, (int)this, v27, duration_4); /*0x673671*/
      v72 = this->isWakeUpPackage == 0; /*0x673676*/
      v110 = this->vtbl->super.super.Unk_6F; /*0x67367f*/
      this->isTravelPackage = 0; /*0x673685*/
      if ( v72 ) /*0x67368e*/
        ((void (__stdcall *)(int))v110)(1); /*0x673696*/
      else
        ((void (__stdcall *)(_DWORD))v110)(0); /*0x673692*/
      this->super.super.super.process->SetSleepState(this->super.super.super.process, (Actor *)this, 0, 0, 0x7F); /*0x6736aa*/
    }
    unk_B3BAE0 = 0.0; /*0x6736ae*/
  }
}
