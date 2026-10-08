// Main frame/update loop; calls 0x55FA50 with world camera and menu-mode state once per frame.
void __usercall sub_40D800(
        InputGlobal **this@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>)
{
  char IsMenuMode; // al
  Actor *ListHead; // eax
  Actor *i; // esi
  ActorVtbl *vtbl; // edi
  DWORD TickCount; // eax
  double v14; // st7
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *ParentCell; // eax
  NiCamera *camera; // esi
  int v18; // edi
  char v19; // al
  void (__thiscall ***v20)(_DWORD, int); // esi
  int v21; // eax
  TESObjectCELL *v22; // esi
  TESWorldSpace *WorldSpace; // eax
  TESForm *v24; // eax
  TESObjectCELL *v25; // esi
  char v26; // al
  BSShaderAccumulator *inited; // eax
  TESWorldSpace *p_rot; // esi
  char v29; // al
  TESWorldSpace *v30; // eax
  TESObjectCELL *v31; // eax
  double v32; // st7
  float *a2; // [esp+10h] [ebp-28h]
  int v34; // [esp+18h] [ebp-20h]
  float v35; // [esp+28h] [ebp-10h]
  float v36; // [esp+2Ch] [ebp-Ch] BYREF
  float v37; // [esp+30h] [ebp-8h]
  float v38; // [esp+34h] [ebp-4h]

  IsMenuMode = InterfaceManager_IsMenuMode(); /*0x40d809*/
  SetHavokPaused(IsMenuMode); /*0x40d80f*/
  if ( InterfaceManager_IsMenuMode() ) /*0x40d817*/
  {
    if ( unk_B3341C ) /*0x40d828*/
    {
      ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x40d830*/
      for ( i = ActorList_ReturnHead((ActorList *)ListHead); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x40d840*/
      {
        if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x40d847*/
          break; /*0x40d849*/
        vtbl = i->vtbl; /*0x40d84b*/
        if ( !Actor::GetProcessLevel((Actor *)i->vtbl) ) /*0x40d84f*/
        {
          if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x55))(vtbl) ) /*0x40d862*/
            sub_651DD0((_DWORD *)vtbl->super.super.super.Unk_16); /*0x40d86b*/
        }
      }
      sub_651DD0(&reference->super.super.super.process->__vftable); /*0x40d87f*/
    }
    unk_B3341C = 0; /*0x40d884*/
  }
  else
  {
    unk_B3341C = 1; /*0x40d88c*/
  }
  SleepMax0x14Milliseconds(); /*0x40d893*/
  ++dword_B02C54; /*0x40d898*/
  TickCount = GetTickCount(); /*0x40d89f*/
  sub_47D170((float *)MEMORY[0xB33E90], TickCount); /*0x40d8ab*/
  sub_889810(*(float *)&MEMORY[0xB33E90][0xC], unk_B333B8); /*0x40d8c2*/
  InputGlobals::PollAndUpdateInputState(*(this + 8)); /*0x40d8cd*/
  IOManager_ProcessThreads(MEMORY[0xB33A10]); /*0x40d8d8*/
  if ( unk_B333B8 ) /*0x40d8e3*/
  {
    flt_B075E8 = flt_B02D90; /*0x40d8eb*/
    flt_B075EC = flt_B02D98; /*0x40d8f7*/
    v14 = flt_B02DA0; /*0x40d8fd*/
  }
  else if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) /*0x40d924*/
         && (CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]),
             Shared_GetPointerAtOffset7C(CurrentWorldspace)) )
  {
    flt_B075E8 = flt_B02DA8; /*0x40d933*/
    flt_B075EC = flt_B02DB0; /*0x40d93f*/
    v14 = flt_B02DB8; /*0x40d945*/
  }
  else if ( reference /*0x40d96d*/
         && Shared_GetDwordAtOffset40((TESObjectREFR *)reference)
         && (ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference), TESObjectCELL_IsInterior(ParentCell)) )
  {
    flt_B075E8 = flt_B02DC0; /*0x40d97c*/
    flt_B075EC = flt_B02DC8; /*0x40d988*/
    v14 = flt_B02DD0; /*0x40d98e*/
  }
  else
  {
    v14 = 1.0; /*0x40d996*/
    flt_B075E8 = 1.0; /*0x40d998*/
    flt_B075EC = 1.0; /*0x40d99e*/
  }
  flt_B075F0 = v14; /*0x40d9a6*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40d9ac*/
  camera = g_WorldSceneReceiverRoot->camera; /*0x40d9b7*/
  v18 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7]; /*0x40d9bd*/
  v19 = InterfaceManager_IsMenuMode(); /*0x40d9c6*/
  sub_7C1F50((BSTextureManager *)v18, (int)camera, v19); /*0x40d9cf*/
  if ( !InterfaceManager_IsMenuMode() /*0x40da43*/
    || LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 4
    || InterfaceManager::IsOpenedMenuDialogue()
    || InterfaceManager_IsMenuVisibleByID(0x40C, 0)
    || InterfaceManager_IsMenuVisibleByID(0x414, 0)
    || InterfaceManager_IsMenuVisibleByID(0x3F3, 0)
    || InterfaceManager_IsMenuVisibleByID(0x3E9, 0)
    || sub_579BC0() )
  {
    if ( !unk_B33397 ) /*0x40da72*/
      goto LABEL_52; /*0x40da72*/
  }
  else if ( !unk_B33397 ) /*0x40da52*/
  {
    if ( unk_B33396 ) /*0x40da5a*/
      MenuBackground_CaptureWorldToTexture((NiDX9Renderer *)this, v18, (int)camera); /*0x40da62*/
    goto LABEL_52; /*0x40da67*/
  }
  if ( (!InterfaceManager_IsMenuMode() /*0x40dad1*/
     || InterfaceManager_IsMenuVisibleByID(0x414, 0)
     || InterfaceManager::IsOpenedMenuDialogue()
     || InterfaceManager_IsMenuVisibleByID(0x40C, 0)
     || InterfaceManager_IsMenuVisibleByID(0x414, 0)
     || sub_579BC0())
    && !sub_572E70(2) )
  {
    if ( texture ) /*0x40dae1*/
    {
      BSTextureManager__ReturnRenderedTexture( /*0x40daea*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        (BSRenderedTexture *)texture);
      v20 = (void (__thiscall ***)(_DWORD, int))texture; /*0x40daef*/
      if ( texture ) /*0x40daf7*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(texture + 4)) ) /*0x40dafd*/
        {
          if ( v20 ) /*0x40db09*/
            (**v20)(v20, 1); /*0x40db13*/
        }
        texture = 0; /*0x40db15*/
      }
      if ( unk_B42D54 ) /*0x40db21*/
      {
        v14 = 0.0; /*0x40db23*/
        unk_B42D50 = 0.0; /*0x40db25*/
      }
      unk_B42D54 = 0; /*0x40db2b*/
    }
    unk_B33397 = 0; /*0x40db31*/
  }
LABEL_52:
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40db37*/
  sub_572F60(1); /*0x40db49*/
  if ( g_NiParallelUpdateTaskManager ) /*0x40db54*/
    NiParallelUpdateTaskManager_SetPendingSignalAndWait(); /*0x40db56*/
  if ( !InterfaceManager_IsMenuMode() ) /*0x40db5b*/
  {
    if ( (MEMORY[0xB333A0]->unk51 || MEMORY[0xB333A0]->unk52) && !MEMORY[0xB333A0]->unk52 ) /*0x40db74*/
      sub_445DF0(MEMORY[0xB333A0], v18, st0_0, a3, a4, a5, a6, a7, a8, v14, 0, 0); /*0x40db7b*/
    sub_411330(g_WorldSceneReceiverRoot); /*0x40db86*/
    v14 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x40db8b*/
    TimeGlobals_AdvanceGameTime(&MEMORY[0xB332E0], *(float *)&MEMORY[0xB33E90][0xC]); /*0x40db9a*/
    sub_440400(MEMORY[0xB333A0]); /*0x40dba5*/
  }
  LOBYTE(v21) = InterfaceManager_IsMenuMode(); /*0x40dbab*/
  sub_6AE860((int)*(this + 9), v18, a7, a8, v14, v21, 0.0, v34); /*0x40dbb4*/
  LOBYTE(OB_ShaderConstantStorage_010201A0[0x186FC]) = 0; /*0x40dbb9*/
  BYTE1(qword_B3BB2C[0x157]) = 0; /*0x40dbbf*/
  unk_B3B77C = 0; /*0x40dbc5*/
  unk_B333B8 = 0; /*0x40dbcb*/
  sub_4F5DB0(); /*0x40dbd1*/
  ScriptRunner_RunScript((int)MEMORY[0xB333A0], 0, v14, a7, a8); /*0x40dbdc*/
  qword_B3BB2C[0x72] = 0.0; /*0x40dbe6*/
  sub_674A20((int)&qword_B3BB2C[0x75], a7, a8, v14, a6, a5);// 3DTheft decode 2026-05-17: post-ScriptRunner boundary. ScriptRunner_RunScript has returned; next instruction sets ECX to ActorProcessManager before actor-process maintenance/update passes. Plugin update hook runs here to avoid object placement from Player_OnInput phase. /*0x40dbec*/
  LODWORD(qword_B3BB2C[0x72]) = 0x32; /*0x40dbf1*/
  if ( !InterfaceManager_IsMenuMode() || sub_572E30(2) ) /*0x40dc0c*/
  {
    unk_B333BC = 0; /*0x40dc1a*/
    LODWORD(qword_B3BB2C[0x72]) = 0x64; /*0x40dc20*/
    v14 = sub_678510((int)&qword_B3BB2C[0x75], *(float *)&v18); /*0x40dc2a*/
    LODWORD(qword_B3BB2C[0x72]) = 0xC8; /*0x40dc34*/
    sub_674A20((int)&qword_B3BB2C[0x75], a7, a8, v14, a6, a5); /*0x40dc3e*/
    LODWORD(qword_B3BB2C[0x72]) = 0x12C; /*0x40dc48*/
    sub_674950((Actor **)&qword_B3BB2C[0x75]); /*0x40dc52*/
    LODWORD(qword_B3BB2C[0x72]) = 0x190; /*0x40dc57*/
  }
  if ( InterfaceManager_IsMenuMode() ) /*0x40dc61*/
  {
    sub_65E900((TESObjectREFR *)reference); /*0x40dc70*/
  }
  else
  {
    if ( reference->vtbl->super.super.super.GetNiNode(reference) ) /*0x40dc82*/
    {
      v14 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x40dc8e*/
      ((void (__stdcall *)(_DWORD))reference->vtbl->super.ProcessControl)(*(_DWORD *)&MEMORY[0xB33E90][0xC]);// 3DTheft decode 2026-05-17: PlayerCharacter vtable +0x228 call (Player_OnInput/ProcessControl) occurs after ScriptRunner_RunScript and actor-process passes at 0x40DBEC-0x40DC52. Spawning after this call is later than vanilla PlaceAtMe command phase. /*0x40dca0*/
    }
    v22 = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x40dcad*/
    v36 = reference->super.super.super.super.pos[0]; /*0x40dcb9*/
    v37 = reference->super.super.super.super.pos[1]; /*0x40dcc0*/
    v38 = reference->super.super.super.super.pos[2]; /*0x40dcc7*/
    if ( v22 ) /*0x40dccb*/
    {
      if ( !TESObjectCELL_IsInterior(v22) && !sub_4CC540((int)v22, &v36) ) /*0x40dce3*/
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(v22); /*0x40dcf0*/
        v14 = v36; /*0x40dd07*/
        v24 = sub_44A270((TESWorldSpace **)g_TESDataHandler, v36, v37, WorldSpace, 1); /*0x40dd0e*/
        v25 = (TESObjectCELL *)v24; /*0x40dd13*/
        if ( v24 ) /*0x40dd17*/
        {
          v26 = BYTE2(v24[1].member.refID); /*0x40dd19*/
          if ( v26 != 3 && v26 != 6 ) /*0x40dd22*/
            v14 = sub_444FB0( /*0x40dd31*/
                    (unsigned int)MEMORY[0xB333A0],
                    (TESObjectREFR *)this,
                    v14,
                    st0_0,
                    a8,
                    a7,
                    a6,
                    a5,
                    a3,
                    a4,
                    &v36,
                    1);
          TESObjectCELL_AddReference(v25, a7, a8, v14, (TESObjectREFR *)reference); /*0x40dd3e*/
          inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x40dd43*/
          if ( inited ) /*0x40dd4a*/
            sub_7AA4D0(inited); /*0x40dd4e*/
        }
      }
    }
  }
  p_rot = (TESWorldSpace *)g_WorldSceneReceiverRoot->camera; /*0x40dd59*/
  v29 = InterfaceManager_IsMenuMode(); /*0x40dd5f*/
  BSTreeManager_Update((float *)p_rot, v29); /*0x40dd66*/
  if ( !InterfaceManager_IsMenuMode() && !LOBYTE(reference->unk7F8) ) /*0x40dd80*/
  {
    v14 = sub_444FB0( /*0x40dd98*/
            (unsigned int)MEMORY[0xB333A0],
            (TESObjectREFR *)this,
            v14,
            st0_0,
            a8,
            a7,
            a6,
            a5,
            a3,
            a4,
            reference->super.super.super.super.pos,
            1);
    if ( *(_WORD *)&MEMORY[0xB333A0]->unk51 ) /*0x40dda3*/
    {
      if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x40ddb1*/
      {
        p_rot = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x40ddc5*/
        if ( TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference) != p_rot ) /*0x40ddce*/
        {
          p_rot = (TESWorldSpace *)&reference->super.super.super.super.rot; /*0x40ddde*/
          v18 = ((int (*)(void))reference->vtbl->super.super.super.GetPos)(); /*0x40ddeb*/
          a2 = reference->vtbl->super.super.super.GetPos(reference); /*0x40ddfc*/
          v30 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x40ddfd*/
          TESWorldSpace_GetCellAtWorldPosition(v30, a2); /*0x40de04*/
          PlayerCharacter_ChangeCellAndPosition( /*0x40de3a*/
            (TESObjectREFR *)reference,
            v14,
            a6,
            a7,
            a8,
            st0_0,
            a5,
            a3,
            a4,
            *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v18,
            *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(v18 + 4),
            *(void *(__thiscall **)(NiAVObject *))(v18 + 8),
            (int)p_rot->vtbl,
            *(_DWORD *)&p_rot->super.type,
            p_rot->super.flags,
            v31,
            0);
        }
      }
    }
  }
  if ( !InterfaceManager_IsMenuMode() || InterfaceManager::IsOpenedMenuDialogue() || sub_572E30(2) ) /*0x40de59*/
  {
    ActorProcessManager_UpdateTempEffects((int *)&qword_B3BB2C[0x75], *(int *)&MEMORY[0xB33E90][0xC]); /*0x40de71*/
    if ( InterfaceManager_IsMenuMode() ) /*0x40de76*/
      v32 = 0.0; /*0x40de7f*/
    else
      v32 = flt_B06530 * *(float *)&MEMORY[0xB33E90][0xC];// ModernWindowsCompatible decode: main frame path passes fAnimationMult:General * frame delta into TES global scene update sub_4424D0 when not in menu mode. /*0x40de89*/
    v35 = v32; /*0x40de8f*/
    v14 = v35; /*0x40de94*/
    sub_4424D0(MEMORY[0xB333A0], v35); /*0x40dea1*/
  }
  if ( !InterfaceManager_IsMenuMode() ) /*0x40dea6*/
  {
    v14 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x40deaf*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)MEMORY[0xB333A4], *(float *)&MEMORY[0xB33E90][0xC], 1); /*0x40dec1*/
  }
  if ( g_NiParallelUpdateTaskManager ) /*0x40decd*/
  {                                             // 3DTheft decode 2026-05-16: crash-site read is g_NiParallelUpdateTaskManager->byte+0x1B0 in the main frame loop after ActorProcessManager/world update and MagicProjectileRoot update. This is not an actor/package dereference.
    if ( *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0) ) /*0x40decf*/
      NiParallelUpdateTaskManager_SubmitSignalTask(); /*0x40ded9*/
  }
  if ( sub_578FE0() == 0x3F4 ) /*0x40dee8*/
  {
    if ( ProcessSleepWaitMenu((char)this, a7, a8, v14, v18) ) /*0x40deea*/
      MenuBackground_CaptureWorldToTexture((NiDX9Renderer *)this, v18, (int)p_rot); /*0x40def5*/
  }
  InterfaceMgr_ShowDebugText((int)this, a7, a8, v14); /*0x40defc*/
  sub_5791A0((char)this, a7, a8); /*0x40df01*/
  sub_5791E0(v14, a6, a7, a8, a5, st0_0, a3, a4); /*0x40df06*/
  sub_579220((char)this, a7, a8, v14); /*0x40df0b*/
  if ( unk_B3B72A ) /*0x40df16*/
  {
    unk_B3B72A = 0; /*0x40df23*/
    sub_440AF0((int)MEMORY[0xB333A0], a7, a8, (char)this, 1, 1, 0); /*0x40df29*/
    sub_434020(MEMORY[0xB33A10], a7, a8, v14, 5); /*0x40df36*/
    v14 = flt_B33A48; /*0x40df3b*/
    sub_5732D0((NiNode **)unk_B3A6B0, a7, a8, flt_B33A48, 2, flt_B33A48); /*0x40df4d*/
  }
  Input_CheckScreenshotHotkey((InputGlobal *)this, a7, a8, v14, st0_0, a3, a4, a5, a6); /*0x40df54*/
  if ( MEMORY[0xB33E90][0x1117] ) /*0x40df5f*/
  {
    sub_497E70((char)this, a7, a8); /*0x40df61*/
    MEMORY[0xB33E90][0x1117] = 0; /*0x40df66*/
  }
}
