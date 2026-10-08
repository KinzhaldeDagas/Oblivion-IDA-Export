// ODismemberment: candidate future death/kill integration point after visual/state pipeline is stable.
void __userpurge Actor_Kill(Actor *a1@<ecx>, double a2@<st2>, double a3@<st1>, double x@<st0>, Actor *a5, int a6)
{
  ActorVtbl *vtbl; // edx
  int v8; // edi
  TESForm *v9; // ebx
  UInt32 DeadState; // eax
  void (__thiscall **v11)(LowProcess *, _DWORD); // ebx
  float *SafeFloatPointer; // eax
  LowProcess *process; // ecx
  _BYTE *v14; // eax
  double v15; // st7
  float (__thiscall *v16)(Actor *, AVCode); // eax
  double v17; // st7
  ActorVtbl *v18; // edx
  void (__thiscall *v19)(Actor *, UInt32, float, Actor *); // eax
  char *Name; // eax
  int BaseCalcAVi; // eax
  ActorVtbl *v22; // edx
  double v23; // st7
  float (__thiscall *GetAV_F)(Actor *, AVCode); // eax
  double v25; // st7
  ActorVtbl *v26; // edx
  void (__thiscall *DamageAV_F)(Actor *, UInt32, float, Actor *); // eax
  LowProcess *v28; // ecx
  Actor *v29; // edi
  LowProcess *v30; // ecx
  LowProcess *v31; // ecx
  bool v32; // zf
  PlayerCharacter *v33; // eax
  char v34; // al
  LowProcess *v35; // ecx
  LowProcess *v36; // ebx
  TESFurniture *v37; // eax
  unsigned __int16 AnimGroup; // ax
  unsigned int v39; // ebx
  ActorAnimData *v40; // eax
  LowProcess *v41; // ecx
  TESForm *v42; // eax
  int v43; // eax
  int *sound; // ebx
  float *v45; // eax
  float v46; // ecx
  float v47; // edx
  char *v48; // ebx
  LowProcess *v49; // ecx
  int v50; // eax
  PlayerCharacter *v51; // ecx
  LowProcess *v52; // ebx
  LowProcess *v53; // ecx
  LowProcess *v54; // ebx
  void (__thiscall **p_SetUnk08C)(BaseProcess *__hidden, float); // edi
  double x_low; // st7
  double GameHour; // st7
  void (__thiscall *v58)(BaseProcess *__hidden, float); // edx
  int v59; // edi
  TESForm *v60; // ebx
  NiNode *niNode; // ebx
  bhkCharacterProxy *CharProxy; // eax
  char *v63; // eax
  __m128 *LinearVelocityPtr; // eax
  LowProcess *v65; // ecx
  double v66; // st7
  LowProcess *v67; // ecx
  TESPackage *editorPackage; // ecx
  TESPackage *v69; // ecx
  char *v70; // eax
  ActorVtbl *v71; // eax
  int v72; // edi
  int v73; // ebx
  ActorVtbl *v74; // edx
  int v75; // ebx
  int v76; // edi
  const char *v77; // eax
  ActorVtbl *v78; // eax
  int v79; // ebx
  int v80; // edi
  const char *v81; // ebx
  unsigned int v82; // [esp+34h] [ebp-148h]
  unsigned int v83; // [esp+34h] [ebp-148h]
  const char *duration; // [esp+38h] [ebp-144h]
  float durationa; // [esp+38h] [ebp-144h]
  float durationb; // [esp+38h] [ebp-144h]
  int v87; // [esp+3Ch] [ebp-140h]
  NiPoint3 v88; // [esp+54h] [ebp-128h] BYREF
  Actor *v89; // [esp+64h] [ebp-118h]
  float v90; // [esp+68h] [ebp-114h]
  NiTransform v91; // [esp+6Ch] [ebp-110h] BYREF
  char string[204]; // [esp+ACh] [ebp-D0h] BYREF
  int savedregs; // [esp+17Ch] [ebp+0h] BYREF

  vtbl = a1->vtbl; /*0x600611*/
  v89 = a5; /*0x600614*/
  if ( !((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.IsDead)( /*0x600620*/
          a1,
          0,
          x,
          a3,
          a2) )
  {
    LOBYTE(a1->members.unk080[0]) = 0; /*0x60062c*/
    Actor::StopDialoguePlayback(a1); /*0x600632*/
    if ( a1 == (Actor *)reference->lastRiddenHorse ) /*0x600642*/
      reference->lastRiddenHorse = 0; /*0x600644*/
    if ( !byte_B14E98 ) /*0x60064e*/
      goto LABEL_19; /*0x60064e*/
    v8 = 0; /*0x600665*/
    v9 = a1->vtbl->super.super.GetBaseForm(a1); /*0x600669*/
    if ( v9 ) /*0x60066d*/
    {
      if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x600679*/
        v8 = (int)v9; /*0x60067f*/
    }
    if ( (*(_DWORD *)(v8 + 0x28) & 2) != 0 ) /*0x600689*/
    {
      DeadState = a1->members.DeadState; /*0x60068f*/
      if ( DeadState == 3 || DeadState == 5 ) /*0x6006a1*/
      {
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, (int)v9, v8, (int)a1, 8); /*0x6007f9*/
        v22 = a1->vtbl; /*0x6007fe*/
        LODWORD(v88.x) = BaseCalcAVi; /*0x600800*/
        v23 = (double)BaseCalcAVi; /*0x600804*/
        GetAV_F = v22->GetAV_F; /*0x600808*/
        v88.x = v23; /*0x600810*/
        v88.x = unk_B37D10[0] * v88.x; /*0x600820*/
        v25 = ((double (__thiscall *)(Actor *, int))GetAV_F)(a1, 8); /*0x600824*/
        v26 = a1->vtbl; /*0x600826*/
        v90 = v25; /*0x600828*/
        DamageAV_F = v26->DamageAV_F; /*0x600830*/
        v88.x = v88.x - v90; /*0x60083f*/
        ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))DamageAV_F)(a1, 8, LODWORD(v88.x), 0); /*0x60084c*/
        return; /*0x600862*/
      }
      sub_424770(&a1->members.super.super.baseExtraList); /*0x6006aa*/
      v11 = (void (__thiscall **)(LowProcess *, _DWORD))a1->members.super.process->__vftable; /*0x6006b2*/
      SafeFloatPointer = GameSetting_GetSafeFloatPointer(MEMORY[0xB37D08]); /*0x6006b9*/
      ((void (__thiscall *)(LowProcess *, float))v11[0x28])(a1->members.super.process, *SafeFloatPointer); /*0x6006cd*/
      ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0); /*0x6006db*/
      sub_5EAE70(a1, (int)v11, v8, v87); /*0x6006df*/
      process = a1->members.super.process; /*0x6006e4*/
      if ( process ) /*0x6006e9*/
      {
        if ( process->GetFurniture(process) ) /*0x6006f3*/
        {
          v11 = (void (__thiscall **)(LowProcess *, _DWORD))a1->members.super.process; /*0x6006f9*/
          v82 = (*((int (__thiscall **)(void (__thiscall **)(LowProcess *, _DWORD)))*v11 + 0xDF))(v11); /*0x60070c*/
          v14 = (_BYTE *)(*((int (__thiscall **)(void (__thiscall **)(LowProcess *, _DWORD)))*v11 + 0xDE))(v11); /*0x600715*/
          sub_4D7300(v14, v82, 0); /*0x600719*/
        }
      }
      if ( a1->vtbl->GetMountedHorse(a1) || ((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) ) /*0x600738*/
        sub_5F0410((TESObjectREFR *)a1, (int)&savedregs); /*0x600740*/
      MagicCaster_InitializeCasting___((char *)&a1->members.magicCaster); /*0x600748*/
      Actor_HandleDeathState(a1, 6u); /*0x600751*/
      v90 = (float)Actor_GetBaseCalcAVi((int *)a1, (int)v11, v8, (int)a1, 8); /*0x60076c*/
      v15 = *GameSetting_GetSafeFloatPointer(unk_B37D10) * v90; /*0x600779*/
      v16 = a1->vtbl->GetAV_F; /*0x60077d*/
      v90 = v15; /*0x600787*/
      v17 = ((double (__thiscall *)(Actor *, int))v16)(a1, 8); /*0x60078b*/
      v18 = a1->vtbl; /*0x60078d*/
      v88.x = v17; /*0x60078f*/
      v19 = v18->DamageAV_F; /*0x600797*/
      v88.x = v90 - v88.x; /*0x6007a6*/
      ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))v19)(a1, 8, LODWORD(v88.x), 0); /*0x6007b3*/
      duration = stru_B38908.value; /*0x6007bb*/
      Name = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x6007be*/
      _sprintf(string, "%s %s", Name, duration); /*0x6007ce*/
      GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x6007e8*/
    }
    else
    {
LABEL_19:
      v28 = a1->members.super.process; /*0x600865*/
      if ( v28 ) /*0x60086a*/
        ((void (__thiscall *)(LowProcess *, _DWORD))v28->Unk_80)(v28, 0); /*0x600876*/
      v29 = v89; /*0x600878*/
      if ( v89 ) /*0x60087e*/
      {
        v30 = v89->members.super.process; /*0x600880*/
        if ( v30 ) /*0x600885*/
        {
          if ( ((int (__thiscall *)(LowProcess *))v30->Unk_F3)(v30) ) /*0x60088f*/
          {
            v89 = (Actor *)((int (__thiscall *)(LowProcess *))v89->members.super.process->Unk_F3)(v89->members.super.process); /*0x6008a2*/
            v29 = v89; /*0x6008a6*/
          }
        }
      }
      if ( Actor_IsNPC(a1) || TESObjectREFR_GetOwner((TESObjectREFR *)a1) ) /*0x6008b5*/
      {
        if ( v29 ) /*0x6008c0*/
        {
          if ( Actor_IsNPC(v29) ) /*0x6008c4*/
          {
            v31 = a1->members.super.process; /*0x6008cd*/
            LOBYTE(a1->members.unk080[0]) = (!v31 || !v31->GetUnk01E(v31)) /*0x6008e2*/
                                         && sub_67CB50((int *)&qword_B3BB2C[0xA1], a1) == 0;
          }
        }
      }
      if ( v29 == (Actor *)reference && !a1->vtbl->super.IsDead((MobileObject *)a1) ) /*0x600913*/
      {
        v32 = !Actor_IsNPC(a1); /*0x600920*/
        v33 = reference; /*0x600922*/
        if ( v32 ) /*0x600927*/
        {
          ++v33->miscStats[5]; /*0x600950*/
        }
        else
        {
          ++v33->miscStats[6]; /*0x600929*/
          sub_4DB760((TESObjectREFR *)a1); /*0x600932*/
          if ( !v34 ) /*0x600939*/
          {
            if ( LOBYTE(a1->members.unk080[0]) ) /*0x60093b*/
              sub_6608F0((int)reference); /*0x600949*/
          }
        }
      }
      v35 = a1->members.super.process; /*0x600957*/
      if ( v35 ) /*0x60095c*/
      {
        if ( v35->GetFurniture(v35) ) /*0x600966*/
        {
          v36 = a1->members.super.process; /*0x60096c*/
          v83 = ((int (__thiscall *)(LowProcess *))v36->GetFurnitureMarkerIndex)(v36); /*0x60097f*/
          v37 = v36->GetFurniture(v36); /*0x600988*/
          sub_4D7300(v37, v83, 0); /*0x60098c*/
        }
      }
      sub_5EA380(a1, x, a3); /*0x600993*/
      if ( a1 != (Actor *)reference ) /*0x60099e*/
        a1->members.unk07C = v29; /*0x6009a0*/
      if ( a1->vtbl->GetMountedHorse(a1) || ((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) ) /*0x6009bd*/
        sub_5F0410((TESObjectREFR *)a1, (int)&savedregs); /*0x6009c5*/
      MagicCaster_InitializeCasting___((char *)&a1->members.magicCaster); /*0x6009cd*/
      AnimGroup = Actor_LoadAnimGroup_(a1, 0x20u, 0, 0); /*0x6009da*/
      v39 = AnimGroup; /*0x6009df*/
      if ( AnimKey_GetGroupID(AnimGroup) == 0x20 ) /*0x6009ee*/
      {
        v40 = a1->vtbl->super.super.GetAnimData(a1); /*0x6009fa*/
        ActorAnimData_PlayAnimGroup(v40, v39, 1u, 0xFFFFFFFF); /*0x600a03*/
        ((void (__thiscall *)(LowProcess *, Actor *))a1->members.super.process->Unk_64)(a1->members.super.process, a1); /*0x600a14*/
      }
      v41 = a1->members.super.process; /*0x600a16*/
      if ( v41 ) /*0x600a1b*/
      {
        v41->Unk_12C(v41); /*0x600a29*/
        if ( !a1->members.super.process->GetProcessLevel(a1->members.super.process) ) /*0x600a33*/
        {
          if ( a1 == (Actor *)reference /*0x600a6e*/
            || !unk_B333B8
            || (v88.x = TesObjectREF_GetDistance((TESObjectREFR *)a1, (TESObjectREFR *)reference, 0),
                x = v88.x,
                a3 = MEMORY[0xB37D78],
                a3 >= v88.x) )
          {
            if ( a1->vtbl->super.super.GetBaseForm(a1)->member.type == kFormType_Creature ) /*0x600a86*/
            {
              if ( Actor_IsCreature(a1) && (v42 = a1->vtbl->super.super.GetBaseForm(a1)) != 0 ) /*0x600aa3*/
                v43 = TESCreature_SelectSoundForAnimEnum(v42, 8u); /*0x600aa9*/
              else
                v43 = 0; /*0x600ab0*/
              sound = (int *)MEMORY[0xB33398]->sound; /*0x600aba*/
              if ( v43 ) /*0x600abd*/
              {
                if ( sound ) /*0x600ac5*/
                {
                  v29 = (Actor *)OSGLobals_PlaySound(sound, *(void **)(v43 + 0xC), 0x102, 0); /*0x600add*/
                  if ( v29 ) /*0x600ae1*/
                  {
                    v45 = a1->vtbl->super.super.GetPos(a1); /*0x600aed*/
                    v46 = *v45; /*0x600aef*/
                    v47 = v45[1]; /*0x600af1*/
                    v88.z = v45[2]; /*0x600afa*/
                    v88.y = v47; /*0x600b06*/
                    v88.x = v46; /*0x600b0e*/
                    x = v46; /*0x600b18*/
                    sub_6B7360((int *)v29, v46, v47, v88.z); /*0x600b1f*/
                    sub_6AC3E0((_DWORD **)sound, (int)v29->vtbl, (LONG)a1); /*0x600b2a*/
                    sub_6B7190((int *)v29, 0); /*0x600b33*/
                    sub_6B73E0(v29); /*0x600b3a*/
                    FormHeapFree((unsigned int)v29); /*0x600b40*/
                  }
                }
              }
            }
            else
            {
              ((void (__thiscall *)(Actor *, Actor *, int, int))a1->vtbl->Unk_C2)(a1, v89, 1, 1); /*0x600b5b*/
            }
          }
        }
      }
      Actor_HandleDeathState(a1, 1u);           // BloodOnDeath death hook: chains Actor_HandleDeathState, then queues corpse blood on the first nonzero death transition. Emission is deferred to the frame hook; each cycle lasts fLeakSeconds (default 8s) and completed cycles do not restart unless death/corpse-hit queues a new cycle. /*0x600b61*/
      v48 = (char *)MEMORY[0xB33398]->sound; /*0x600b71*/
      if ( a1 == (Actor *)reference ) /*0x600b74*/
      {
        if ( v48 ) /*0x600b78*/
        {
          SoundManager_OpenMusicFile(v48, 8, ".\\Data\\Music\\Special\\death.mp3", 0); /*0x600b85*/
          SoundManager_PlayMusic((int)v48, (int)v29); /*0x600b8c*/
        }
      }
      v49 = a1->members.super.process; /*0x600b91*/
      if ( v49 ) /*0x600b96*/
      {
        v50 = v49->Unk_39(v49, (UInt32)a1); /*0x600ba1*/
        if ( v50 ) /*0x600ba5*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v50 + 0x9C))(v50, 1, 0); /*0x600bb5*/
      }
      v51 = reference; /*0x600bb7*/
      if ( a1 == (Actor *)reference && !v51->isThirdPerson ) /*0x600bc1*/
        TogglePOV(v51, 0); /*0x600bcc*/
      v52 = a1->members.super.process; /*0x600bd1*/
      if ( v52 ) /*0x600bd6*/
      {
        if ( !v52->GetProcessLevel(a1->members.super.process) ) /*0x600bdf*/
        {
          LOBYTE(v88.x) = BYTE2(v52[2].unk048); /*0x600bed*/
          if ( LOBYTE(v88.x) ) /*0x600bf1*/
            BYTE2(v52[2].unk048) = sub_693210((TESObjectREFR *)a1, SLOBYTE(v88.x)); /*0x600c01*/
        }
      }
      v53 = a1->members.super.process; /*0x600c07*/
      if ( v53 ) /*0x600c0c*/
      {
        v53->Unk_08(v53); /*0x600c13*/
        v54 = a1->members.super.process; /*0x600c15*/
        p_SetUnk08C = &v54->SetUnk08C; /*0x600c1f*/
        LODWORD(v88.x) = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x600c2c*/
        x_low = (double)SLODWORD(v88.x); /*0x600c30*/
        if ( v88.x < 0.0 ) /*0x600c34*/
          x_low = x_low + flt_A2FC78; /*0x600c36*/
        *(double *)&v88.x = x_low * dbl_A2F920; /*0x600c47*/
        GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x600c4b*/
        v58 = *p_SetUnk08C; /*0x600c54*/
        v88.x = GameHour + *(double *)&v88.x; /*0x600c59*/
        x = v88.x; /*0x600c5d*/
        ((void (__thiscall *)(LowProcess *, _DWORD))v58)(v54, LODWORD(v88.x)); /*0x600c64*/
      }
      v59 = 0; /*0x600c70*/
      v60 = a1->vtbl->super.super.GetBaseForm(a1); /*0x600c74*/
      if ( v60 ) /*0x600c78*/
      {
        if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x600c84*/
          v59 = (int)v60; /*0x600c8a*/
      }
      sub_440FA0((int *)MEMORY[0xB333A0], v59, 1); /*0x600c95*/
      if ( a1->vtbl->IsInCombat(a1, 1) ) /*0x600ca6*/
        ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0); /*0x600cb8*/
      if ( a1->vtbl->IsTresspassing(a1) ) /*0x600cc4*/
        sub_4246F0(&a1->members.super.super.baseExtraList); /*0x600ccd*/
      niNode = (NiNode *)a1->members.super.super.niNode; /*0x600cd2*/
      if ( MobileObject_GetCharProxy((MobileObject *)a1) ) /*0x600cd7*/
      {
        CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x600ce2*/
        if ( CharProxy ) /*0x600ce9*/
        {
          v63 = *((char **)CharProxy + 2); /*0x600ceb*/
          if ( v63 ) /*0x600cf0*/
          {
            LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v63); /*0x600cf4*/
            HavokVector_ToWorldVector(&v88.x, LinearVelocityPtr); /*0x600cff*/
          }
        }
      }
      if ( a1 == (Actor *)reference ) /*0x600d0f*/
        sub_65AC20((MobileObject *)a1, 1); /*0x600d13*/
      else
        a1->vtbl->super.Unk_72((MobileObject *)a1); /*0x600d22*/
      v65 = a1->members.super.process; /*0x600d24*/
      if ( !v65 || v65->GetProcessLevel(v65) ) /*0x600d34*/
      {
        sub_5E9E70((TESObjectREFR *)a1); /*0x600ef0*/
        RunScripts((TESObjectREFR *)a1, a2, a3, x); /*0x600ef7*/
        LOBYTE(a1->members.unk0B4[3]) = 1; /*0x600efc*/
      }
      else
      {
        v66 = unk_B36C80; /*0x600d41*/
        ((void (__stdcall *)(_DWORD))a1->members.super.process->SetUnk22C)(unk_B36C80); /*0x600d53*/
        if ( !((int (__thiscall *)(LowProcess *))a1->members.super.process->GetKnockedState)(a1->members.super.process) /*0x600d7a*/
          || ((int (__thiscall *)(LowProcess *))a1->members.super.process->GetKnockedState)(a1->members.super.process) == 6 )
        {
          durationb = a1->vtbl->super.GetZRotation((MobileObject *)a1); /*0x600e23*/
          NiMatrix33_InitRotationZ((NiMatrix33 *)v91.rot.data[1], durationb); /*0x600e26*/
          v88.x = 0.0; /*0x600e2d*/
          a3 = 1.0; /*0x600e35*/
          v88.y = 1.0; /*0x600e38*/
          v88.z = 0.0; /*0x600e45*/
          v88 = *(NiPoint3 *)&sub_7101F0((NiTransform *)v91.rot.data[1], &v91, &v88)->rot.data[0][0]; /*0x600e52*/
          sub_88D070(niNode, 6, 1, 0); /*0x600e69*/
          v66 = 0.0; /*0x600e6e*/
          sub_8AB440(niNode, &v88.x, 1, 0.0, 0); /*0x600e81*/
        }
        else if ( a1->vtbl->super.super.HasFatigue((TESObjectREFR *)a1) ) /*0x600d8a*/
        {
          sub_8A5580((int)niNode, 0); /*0x600d97*/
          durationa = a1->vtbl->super.GetZRotation((MobileObject *)a1); /*0x600db0*/
          NiMatrix33_InitRotationZ((NiMatrix33 *)v91.rot.data[1], durationa); /*0x600db3*/
          v66 = 0.0; /*0x600db8*/
          v88.x = 0.0; /*0x600dba*/
          a3 = flt_A31E2C; /*0x600dc2*/
          v88.y = flt_A31E2C; /*0x600dc9*/
          v88.z = 0.0; /*0x600dd6*/
          v88 = *(NiPoint3 *)&sub_7101F0((NiTransform *)v91.rot.data[1], &v91, &v88)->rot.data[0][0]; /*0x600de1*/
          sub_4529E0(&v91.scale, &v88.x); /*0x600dfd*/
          sub_536660((int)niNode, &v91.scale); /*0x600e08*/
        }
        if ( unk_B3B914 <= g_iMaxHiPerfCombatCount_Combat /*0x600ea1*/
          || !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->Unk_9E)(a1) )
        {
          v67 = a1->members.super.process; /*0x600ea7*/
          if ( v67 ) /*0x600eac*/
          {
            if ( !((int (__thiscall *)(LowProcess *))v67->Unk_F3)(v67) /*0x600edf*/
              && (Game_RandomLargeInteger(0) % 0x64 <= (int)MEMORY[0xB378B0].value
               || !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->Unk_9E)(a1)) )
            {
              sub_5F5D10((TESObjectREFR *)a1, a2, a3, v66); /*0x600ee7*/
            }
          }
        }
      }
      if ( a1->members.super.process ) /*0x600f03*/
      {
        sub_5EAE70(a1, (int)niNode, v59, v87); /*0x600f0b*/
        editorPackage = a1->members.super.process->editorPackage; /*0x600f13*/
        if ( editorPackage ) /*0x600f18*/
        {
          if ( TESPackage_IsRuntimePackage(editorPackage) ) /*0x600f1a*/
          {
            v69 = a1->members.super.process->editorPackage; /*0x600f26*/
            if ( v69 ) /*0x600f2b*/
              v69->__vftable->super.Destroy((TESForm *)v69, 1); /*0x600f34*/
          }
        }
        a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0); /*0x600f43*/
        a1->members.super.process->editorPackage = 0; /*0x600f48*/
      }
      if ( unk_B3B908 ) /*0x600f4f*/
      {
        v70 = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x600f5a*/
        Interface_ConsolePrint("%.20s is dead!", v70); /*0x600f65*/
      }
    }
    if ( trackAllDeath ) /*0x600f6d*/
    {
      if ( v89 ) /*0x600f7f*/
      {
        v71 = v89->vtbl; /*0x600f8c*/
        LODWORD(v88.x) = v89->members.super.super.super.refID; /*0x600f8e*/
        v72 = 0; /*0x600f98*/
        v73 = (int)v71->super.super.GetBaseForm((TESObjectREFR *)v89); /*0x600f9c*/
        if ( v73 ) /*0x600fa0*/
        {
          if ( v89->vtbl->super.super.IsActor((TESObjectREFR *)v89) ) /*0x600fae*/
            v72 = v73; /*0x600fb4*/
        }
        v89 = *(Actor **)(v72 + 0xA4); /*0x600fbe*/
        if ( !v89 ) /*0x600fc2*/
          v89 = (Actor *)EmptyString; /*0x600fc4*/
        v74 = a1->vtbl; /*0x600fcf*/
        v90 = *(float *)&a1->members.super.super.super.refID; /*0x600fd1*/
        v75 = 0; /*0x600fdd*/
        v76 = (int)v74->super.super.GetBaseForm((TESObjectREFR *)a1); /*0x600fe1*/
        if ( v76 ) /*0x600fe5*/
        {
          if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x600ff1*/
            v75 = v76; /*0x600ff7*/
        }
        v77 = *(const char **)(v75 + 0xA4); /*0x600ff9*/
        if ( !v77 ) /*0x601001*/
          v77 = EmptyString; /*0x601003*/
        PrintToLog___("'%s' (%08X) was killed by '%s' (%08X).", v77, v90, (const char *)v89, v88.x); /*0x60101d*/
      }
      else
      {
        v78 = a1->vtbl; /*0x60103f*/
        LODWORD(v88.x) = a1->members.super.super.super.refID; /*0x601041*/
        v79 = 0; /*0x60104d*/
        v80 = (int)v78->super.super.GetBaseForm((TESObjectREFR *)a1); /*0x601051*/
        if ( v80 ) /*0x601055*/
        {
          if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x601061*/
            v79 = v80; /*0x601067*/
        }
        v81 = *(const char **)(v79 + 0xA4); /*0x601069*/
        if ( !v81 ) /*0x601071*/
          v81 = EmptyString; /*0x601073*/
        PrintToLog___("'%s' (%08X) has died with no attacker.", v81, v88.x); /*0x601083*/
      }
    }
  }
}
