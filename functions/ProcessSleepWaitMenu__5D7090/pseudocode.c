char __usercall ProcessSleepWaitMenu@<al>(
        char a1@<bpl>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5@<edi>)
{
  InputGlobal *input; // esi
  PlayerCharacter *v6; // eax
  _DWORD *OpenMenuTile; // esi
  PlayerCharacter *v11; // ecx
  void *ParentMenu; // eax
  char *v14; // eax
  char *v15; // esi
  double GameHour; // st7
  char v19; // cl
  bool v21; // pf
  const char *v22; // eax
  const char *GameDayOfWeekName; // eax
  BSStringT *a2; // eax
  int v25; // [esp-8h] [ebp-3Ch]
  float a2a; // [esp+0h] [ebp-34h]
  float a2b; // [esp+0h] [ebp-34h]
  float a2c; // [esp+0h] [ebp-34h]
  float a2d; // [esp+0h] [ebp-34h]
  const char *a2e; // [esp+0h] [ebp-34h]
  char v31; // [esp+13h] [ebp-21h]
  UInt32 HoursToSleep; // [esp+14h] [ebp-20h]
  int v34; // [esp+14h] [ebp-20h]
  BSStringT v35; // [esp+18h] [ebp-1Ch] BYREF
  BSStringT v36; // [esp+20h] [ebp-14h] BYREF
  unsigned int v37; // [esp+30h] [ebp-4h]

  input = OSGlobals->input;
  if ( dword_B3B730 != TESDataHandler_g_PlayerRef->HoursToSleep )
    byte_B3B72C = 1;
  if ( InputGlobals::QueryControlState(input, 0x10, 1) || InputGlobals::QueryControlState(input, 0x10, 0) )
  {
    if ( byte_B3B729 )
    {
      if ( InputGlobals::QueryControlState(input, 0x10, 1) )
      {
        if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
        {
          v6 = TESDataHandler_g_PlayerRef;
          v6->HoursToSleep = 0;
          v6->isSleeping = 0;
        }
        else
        {
          byte_B3B72B = 1;
        }
        a4 = ClsoeSleepWaitMenu(st5_0, a3, a4);
      }
    }
  }
  else
  {
    byte_B3B729 = 1;
  }
  if ( !byte_B3B728 )
    return 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F4);
  if ( !OpenMenuTile )
    return 0;
  __asm
  {
    fld     dword ptr ds:0B3B724h
    fsub    dword ptr ds:0B33E9Ch
    fstp    dword ptr ds:0B3B724h
  }
  flt_B3B724 = _ET1;
  __asm
  {
    fldz
    fld     dword ptr ds:0B3B724h
    fcom    st(1)
    fnstsw  ax
    fstp    st(1)
  }
  if ( (_AX & 0x4100) == 0 )
  {
    __asm { fstp    st }
    return 0;
  }
  __asm { fadd    qword ptr ds:0A2F928h }
  v11 = TESDataHandler_g_PlayerRef;
  __asm { fstp    dword ptr ds:0B3B724h }
  flt_B3B724 = _ET1;
  if ( PlayerCharacter::IsSleeping_(v11) )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    if ( !ParentMenu )
      return 0;
    v14 = (char *)OblivionDynamicCast(
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &SleepWaitMenu `RTTI Type Descriptor',
                    0);
    v15 = v14;
    if ( !v14 )
      return 0;
    if ( v14[0x4C] )
    {
      if ( TESDataHandler_g_PlayerRef->bCanLevelUp )
      {
        if ( !byte_B3B72B && !byte_B14E88 )
          byte_B3A6D1 = 1;
      }
    }
    ScriptRunner_RunScript((int)TES, 0, a4, st5_0, a3);
    sub_65F770((MagicTarget *)TESDataHandler_g_PlayerRef, 0, a5, st5_0, a3);
    __asm { fld     dword ptr ds:0A6B328h }
    __asm { fstp    [esp+34h+a2]; a3 }
    Tile_SetFloat(*((Tile **)v15 + 0xA), (_DWORD *)0xFB3, a2a);
    HoursToSleep = TESDataHandler_g_PlayerRef->HoursToSleep;
    __asm { fild    [esp+30h+var_20] }
    __asm { fstp    [esp+34h+a2]; a3 }
    Tile_SetFloat(*((Tile **)v15 + 0xA), (_DWORD *)0xFB3, a2b);
    __asm { fldz }
    __asm { fstp    [esp+34h+a2]; a3 }
    Tile_SetFloat(*((Tile **)v15 + 0xA), (_DWORD *)0xFB3, a2c);
    __asm { fld1 }
    __asm { fstp    [esp+34h+a2]; a3 }
    Tile_SetFloat(*((Tile **)v15 + 0x11), (_DWORD *)0xFA1, a2d);
    v35.m_data = 0;
    v35.m_dataLen = 0;
    v35.m_bufLen = 0;
    v37 = 0;
    GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
    __asm
    {
      fstp    [esp+30h+var_20]
      fld     [esp+30h+var_20]
      fld     st
    }
    v34 = (char)Double_To_SInt32(GameHour);
    __asm
    {
      fild    [esp+30h+var_20]
      fsub    st(1), st
      fxch    st(1)
      fmul    qword ptr ds:0A2FCC8h
    }
    __asm
    {
      fld1
      fcomp   st(1)
    }
    v31 = Double_To_SInt32(GameHour);
    __asm
    {
      fnstsw  ax
      fld     qword ptr ds:0A2F910h
    }
    if ( (_AX & 0x4100) != 0 )
    {
      __asm
      {
        fcom    st(1)
        fnstsw  ax
        fld     st(1)
      }
      if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
        __asm { fsub    st, st(1) }
    }
    else
    {
      __asm { fld     st }
    }
    __asm { fcompp }
    v19 = Double_To_SInt32(GameHour);
    __asm { fnstsw  ax }
    v21 = __SETP__(HIBYTE(_AX) & 0x41, 0);
    v22 = "pm";
    if ( v21 )
      v22 = "am";
    a2e = v22;
    v25 = v19;
    GameDayOfWeekName = TimeGlobals_GetGameDayOfWeekName(&TimeGlobals);
    BSStringT_Static_Format(&v35, "%s %d:%02d %s", GameDayOfWeekName, v25, v31, a2e);
    Tile_SetString(*((_DWORD **)v15 + 0xE), (_DWORD *)0xFDE, v35.m_data);
    a2 = sub_402E50((int *)&TimeGlobals, GameHour, &v36);
    LOBYTE(v37) = 1;
    sub_4FB4C0(&v35, (const char **)&a2->m_data);
    LOBYTE(v37) = 0;
    BSStringT_Clear((unsigned int *)&v36);
    Tile_SetString(*((_DWORD **)v15 + 0xF), (_DWORD *)0xFDE, v35.m_data);
    v37 = 0xFFFFFFFF;
    BSStringT_Clear((unsigned int *)&v35);
    return 1;
  }
  else
  {
    ClsoeSleepWaitMenu(st5_0, a3, a4);
    return 0;
  }
}
