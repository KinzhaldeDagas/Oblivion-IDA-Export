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
  Actor *v10; // eax
  Actor *i; // esi
  ActorVtbl *vtbl; // edi
  DWORD TickCount; // eax
  double v14; // st7
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *ParentCell; // eax
  double v17; // st7
  NiCamera *camera; // esi
  BSTextureManager *v19; // edi
  char v20; // al
  void (__thiscall ***v21)(_DWORD, int); // esi
  double v22; // st7
  int v23; // eax
  double v24; // st7
  TESObjectCELL *v25; // esi
  TESWorldSpace *WorldSpace; // eax
  TESForm *v27; // eax
  TESObjectCELL *v28; // esi
  char v29; // al
  BSShaderAccumulator *inited; // eax
  void *p_rot; // esi
  char v32; // al
  TESWorldSpace *v33; // eax
  TESObjectCELL *v34; // eax
  double v35; // st7
  float *a2; // [esp+10h] [ebp-28h]
  int v37; // [esp+18h] [ebp-20h]
  float v38; // [esp+28h] [ebp-10h]
  float v39; // [esp+2Ch] [ebp-Ch] BYREF
  float v40; // [esp+30h] [ebp-8h]
  float v41; // [esp+34h] [ebp-4h]

  IsMenuMode = InterfaceManager_IsMenuMode();
  SetHavokPaused(IsMenuMode);
  if ( InterfaceManager_IsMenuMode() )
  {
    if ( byte_B3341C )
    {
      v10 = sub_673A50(&ActorProcessManager_ptr, 0);
      for ( i = sub_7616D0((ActorList *)v10); i; i = *(Actor **)&i->members.super.super.super.type )
      {
        if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
          break;
        vtbl = i->vtbl;
        if ( !Actor::GetProcessLevel((Actor *)i->vtbl) )
        {
          if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x55))(vtbl) )
            sub_651DD0((_DWORD *)vtbl->super.super.super.Unk_16);
        }
      }
      sub_651DD0(&TESDataHandler_g_PlayerRef->super.super.super.process->__vftable);
    }
    byte_B3341C = 0;
  }
  else
  {
    byte_B3341C = 1;
  }
  SleepMax0x14Milliseconds();
  ++dword_B02C54;
  TickCount = GetTickCount();
  sub_47D170(TickCount);
  sub_889810(flt_B33E9C, byte_B333B8);
  InputGlobals::PollAndUpdateInputState(*(this + 8));
  IOManager_ProcessThreads(ioManager);
  if ( byte_B333B8 )
  {
    flt_B075E8 = flt_B02D90;
    flt_B075EC = flt_B02D98;
    v14 = flt_B02DA0;
  }
  else if ( TES::GetCurrentWorldspace(TES)
         && (CurrentWorldspace = TES::GetCurrentWorldspace(TES), TESWorldSpace_GetParentWorldpsace(CurrentWorldspace)) )
  {
    flt_B075E8 = flt_B02DA8;
    flt_B075EC = flt_B02DB0;
    v14 = flt_B02DB8;
  }
  else if ( TESDataHandler_g_PlayerRef
         && TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef)
         && (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef),
             TESObjectCELL_IsInterior(ParentCell)) )
  {
    flt_B075E8 = flt_B02DC0;
    flt_B075EC = flt_B02DC8;
    v14 = flt_B02DD0;
  }
  else
  {
    v14 = 1.0;
    flt_B075E8 = 1.0;
    flt_B075EC = 1.0;
  }
  flt_B075F0 = v14;
  v17 = nullsub_returnTrue_0arg();
  camera = g_worldScenegraph->camera;
  v19 = g_textureManager;
  v20 = InterfaceManager_IsMenuMode();
  sub_7C1F50(v19, (int)camera, v20);
  if ( !InterfaceManager_IsMenuMode()
    || LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 4
    || InterfaceManager::IsOpenedMenuDialogue()
    || sub_5790E0(0x40C, 0)
    || sub_5790E0(0x414, 0)
    || sub_5790E0(0x3F3, 0)
    || sub_5790E0(0x3E9, 0)
    || sub_579BC0((char)this, a7, a8, v17) )
  {
    if ( !byte_B33397 )
      goto LABEL_52;
  }
  else if ( !byte_B33397 )
  {
    if ( byte_B33396 )
      sub_40D160((NiDX9Renderer *)this, (int)v19, (int)camera);
    goto LABEL_52;
  }
  if ( (!InterfaceManager_IsMenuMode()
     || sub_5790E0(0x414, 0)
     || InterfaceManager::IsOpenedMenuDialogue()
     || sub_5790E0(0x40C, 0)
     || sub_5790E0(0x414, 0)
     || sub_579BC0((char)this, a7, a8, v17))
    && !sub_572E70(2) )
  {
    if ( menuRenderedTexture )
    {
      sub_7C1EE0(g_textureManager, (BSRenderedTexture *)menuRenderedTexture);
      v21 = (void (__thiscall ***)(_DWORD, int))menuRenderedTexture;
      if ( menuRenderedTexture )
      {
        if ( !InterlockedDecrement((volatile LONG *)(menuRenderedTexture + 4)) )
        {
          if ( v21 )
            (**v21)(v21, 1);
        }
        menuRenderedTexture = 0;
      }
      if ( byte_B42D54 )
        flt_B42D50 = 0.0;
      byte_B42D54 = 0;
    }
    byte_B33397 = 0;
  }
LABEL_52:
  v22 = nullsub_returnTrue_0arg();
  sub_572F60(1);
  if ( dword_B3F940 )
    sub_701AB0();
  if ( !InterfaceManager_IsMenuMode() )
  {
    if ( (TES->unk51 || TES->unk52) && !TES->unk52 )
      sub_445DF0((int)TES, (int)v19, st0_0, a3, a4, a5, a6, a7, a8, v22, 0, 0);
    sub_411330(g_worldScenegraph);
    v22 = flt_B33E9C;
    sub_4029E0(&TimeGlobals, flt_B33E9C);
    sub_440400(TES);
  }
  LOBYTE(v23) = InterfaceManager_IsMenuMode();
  sub_6AE860((int)*(this + 9), (int)v19, a7, a8, v22, v23, 0.0, v37);
  byte_BA7A04 = 0;
  byte_B3C089 = 0;
  byte_B3B77C = 0;
  byte_B333B8 = 0;
  v24 = sub_4F5DB0();
  ScriptRunner_RunScript((int)TES, 0, v24, a7, a8);
  dword_B3BCF4 = 0;
  sub_674A20((int)&ActorProcessManager_ptr, a7, a8, v24, a6);
  dword_B3BCF4 = 0x32;
  if ( !InterfaceManager_IsMenuMode() || sub_572E30(2) )
  {
    dword_B333BC = 0;
    dword_B3BCF4 = 0x64;
    v24 = sub_678510((int)&ActorProcessManager_ptr, *(float *)&v19);
    dword_B3BCF4 = 0xC8;
    sub_674A20((int)&ActorProcessManager_ptr, a7, a8, v24, a6);
    dword_B3BCF4 = 0x12C;
    sub_674950(&ActorProcessManager_ptr.middleHighActors.head.node.data);
    dword_B3BCF4 = 0x190;
  }
  if ( InterfaceManager_IsMenuMode() )
  {
    sub_65E900((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  }
  else
  {
    if ( TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef) )
    {
      v24 = flt_B33E9C;
      ((void (__stdcall *)(_DWORD))TESDataHandler_g_PlayerRef->vtbl->super.ProcessControl)(LODWORD(flt_B33E9C));
    }
    v25 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    v39 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[0];
    v40 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[1];
    v41 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[2];
    if ( v25 )
    {
      if ( !TESObjectCELL_IsInterior(v25) && !sub_4CC540((int)v25, &v39) )
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(v25);
        v24 = v39;
        v27 = sub_44A270((_DWORD *)TESDataHandler, v39, v40, (int)WorldSpace, 1);
        v28 = (TESObjectCELL *)v27;
        if ( v27 )
        {
          v29 = BYTE2(v27[1].member.refID);
          if ( v29 != 3 && v29 != 6 )
            v24 = sub_444FB0((unsigned int)TES, (TESObjectREFR *)this, v24, st0_0, a8, a7, a6, a5, a3, a4, &v39, 1);
          sub_4D35D0(v28, a7, a8, v24, (TESChildCELL *)TESDataHandler_g_PlayerRef);
          inited = InitBSShaderAccumulator();
          if ( inited )
            sub_7AA4D0(inited);
        }
      }
    }
  }
  p_rot = g_worldScenegraph->camera;
  v32 = InterfaceManager_IsMenuMode();
  sub_55FA50((float *)p_rot, v32);
  if ( !InterfaceManager_IsMenuMode() && !LOBYTE(TESDataHandler_g_PlayerRef->unk7F8) )
  {
    v24 = sub_444FB0(
            (unsigned int)TES,
            (TESObjectREFR *)this,
            v24,
            st0_0,
            a8,
            a7,
            a6,
            a5,
            a3,
            a4,
            TESDataHandler_g_PlayerRef->super.super.super.super.pos,
            1);
    if ( *(_WORD *)&TES->unk51 )
    {
      if ( !TES->currentInteriorCell )
      {
        p_rot = TES::GetCurrentWorldspace(TES);
        if ( (void *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef) != p_rot )
        {
          p_rot = &TESDataHandler_g_PlayerRef->super.super.super.super.rot;
          v19 = (BSTextureManager *)((int (*)(void))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos)();
          a2 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
          v33 = TES::GetCurrentWorldspace(TES);
          TESWorldSpace::GetCellAtPos(v33, a2);
          sub_66EAF0(
            (int *)TESDataHandler_g_PlayerRef,
            v24,
            a6,
            a7,
            a8,
            st0_0,
            a5,
            a3,
            a4,
            (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v19->unk00.__vftable,
            (NiAVObject *(__thiscall *)(NiAVObject *, const char *))v19->unk00.start,
            (void *(__thiscall *)(NiAVObject *))v19->unk00.end,
            *(_DWORD *)p_rot,
            *((_DWORD *)p_rot + 1),
            *((_DWORD *)p_rot + 2),
            v34,
            0);
        }
      }
    }
  }
  if ( !InterfaceManager_IsMenuMode() || InterfaceManager::IsOpenedMenuDialogue() || sub_572E30(2) )
  {
    sub_67ACA0((int *)&ActorProcessManager_ptr, SLODWORD(flt_B33E9C));
    if ( InterfaceManager_IsMenuMode() )
      v35 = 0.0;
    else
      v35 = flt_B06530 * flt_B33E9C;
    v38 = v35;
    v24 = v38;
    sub_4424D0(TES, a8, v38);
  }
  if ( !InterfaceManager_IsMenuMode() )
  {
    v24 = flt_B33E9C;
    NiAVObject_UpdateNiAVObject((NiAVObject *)MagicProjectileRoot, flt_B33E9C, 1);
  }
  if ( dword_B3F940 )
  {
    if ( *(_BYTE *)(dword_B3F940 + 0x1B0) )
      sub_701AD0();
  }
  if ( sub_578FE0() == 0x3F4 )
  {
    if ( ProcessSleepWaitMenu((char)this, a7, a8, v24, (int)v19) )
      sub_40D160((NiDX9Renderer *)this, (int)v19, (int)p_rot);
  }
  InterfaceMgr_ShowDebugText((int)this, a7, a8, v24);
  sub_5791A0((char)this, a7, a8, v24);
  sub_5791E0(v24, a6, a7, a8, a5, st0_0, a3, a4, (char)this);
  sub_579220((char)this, a7, a8, v24);
  if ( byte_B3B72A )
  {
    byte_B3B72A = 0;
    sub_440AF0((int)TES, a7, a8, (char)this, 1, 1, 0);
    sub_434020(ioManager, a7, a8, v24, 5);
    v24 = flt_B33A48;
    sub_5732D0((NiAVObject **)dword_B3A6B0, a7, a8, flt_B33A48, 2, flt_B33A48);
  }
  sub_40D4D0((InputGlobal *)this, a7, a8, v24);
  if ( byte_B34FA7 )
  {
    sub_497E70((char)this, a7, a8);
    byte_B34FA7 = 0;
  }
}
