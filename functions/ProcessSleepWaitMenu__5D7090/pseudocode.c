// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Wait control 16 closes/cancels Sleep/Wait menu after release gating.
char __usercall ProcessSleepWaitMenu@<al>(
        char a1@<bpl>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5@<edi>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        double a9@<st4>)
{
  InputGlobal *input; // esi
  PlayerCharacter *v10; // eax
  _DWORD *OpenMenuTile; // esi
  PlayerCharacter *v15; // ecx
  void *ParentMenu; // eax
  char *v18; // eax
  char *v19; // esi
  double GameHour; // st7
  char v23; // cl
  bool v25; // pf
  const char *v26; // eax
  const char *GameDayOfWeekName; // eax
  BSStringT *a2; // eax
  int v29; // [esp-8h] [ebp-3Ch]
  float a2a; // [esp+0h] [ebp-34h]
  float a2b; // [esp+0h] [ebp-34h]
  float a2c; // [esp+0h] [ebp-34h]
  float a2d; // [esp+0h] [ebp-34h]
  const char *a2e; // [esp+0h] [ebp-34h]
  char v35; // [esp+13h] [ebp-21h]
  UInt32 HoursToSleep; // [esp+14h] [ebp-20h]
  int v38; // [esp+14h] [ebp-20h]
  BSStringT v39; // [esp+18h] [ebp-1Ch] BYREF
  BSStringT v40; // [esp+20h] [ebp-14h] BYREF
  unsigned int v41; // [esp+30h] [ebp-4h]

  input = MEMORY[0xB33398]->input; /*0x5d70c0*/
  if ( unk_B3B730 != reference->HoursToSleep ) /*0x5d70cf*/
    unk_B3B72C = 1; /*0x5d70d1*/
  if ( InputGlobals::QueryControlState(input, 0x10, 1) || InputGlobals::QueryControlState(input, 0x10, 0) ) /*0x5d70ee*/
  {
    if ( unk_B3B729 ) /*0x5d7100*/
    {
      if ( InputGlobals::QueryControlState(input, 0x10, 1) ) /*0x5d710e*/
      {
        if ( PlayerCharacter::IsSleeping_(reference) ) /*0x5d711d*/
        {
          v10 = reference; /*0x5d7126*/
          v10->HoursToSleep = 0; /*0x5d712b*/
          v10->isSleeping = 0; /*0x5d7131*/
        }
        else
        {
          unk_B3B72B = 1; /*0x5d7139*/
        }
        a4 = ClsoeSleepWaitMenu(st5_0, a3, a4, a6, a7, a8, a9); /*0x5d7140*/
      }
    }
  }
  else
  {
    unk_B3B729 = 1; /*0x5d70f7*/
  }
  if ( !unk_B3B728 ) /*0x5d7145*/
    return 0; /*0x5d7145*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F4); /*0x5d7157*/
  if ( !OpenMenuTile ) /*0x5d715e*/
    return 0; /*0x5d715e*/
  __asm /*0x5d7160*/
  {
    fld     dword ptr ds:0B3B724h
    fsub    dword ptr ds:0B33E9Ch
    fstp    dword ptr ds:0B3B724h
  }
  unk_B3B724 = _ET1; /*0x5d716c*/
  __asm /*0x5d7172*/
  {
    fldz
    fld     dword ptr ds:0B3B724h
    fcom    st(1)
    fnstsw  ax
    fstp    st(1)
  }
  if ( (_AX & 0x4100) == 0 ) /*0x5d7183*/
  {
    __asm { fstp    st } /*0x5d7185*/
    return 0; /*0x5d719a*/
  }
  __asm { fadd    qword ptr ds:0A2F928h } /*0x5d719b*/
  v15 = reference; /*0x5d71a1*/
  __asm { fstp    dword ptr ds:0B3B724h } /*0x5d71a7*/
  unk_B3B724 = _ET1; /*0x5d71a7*/
  if ( PlayerCharacter::IsSleeping_(v15) ) /*0x5d71ad*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d71d1*/
    if ( !ParentMenu ) /*0x5d71d8*/
      return 0; /*0x5d71d8*/
    v18 = (char *)OblivionDynamicCast( /*0x5d71e7*/
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &SleepWaitMenu `RTTI Type Descriptor',
                    0);
    v19 = v18; /*0x5d71ec*/
    if ( !v18 ) /*0x5d71f3*/
      return 0; /*0x5d71f3*/
    if ( v18[0x4C] ) /*0x5d71f5*/
    {
      if ( reference->bCanLevelUp ) /*0x5d7200*/
      {
        if ( !unk_B3B72B && !byte_B14E88 ) /*0x5d7210*/
          unk_B3A6D1 = 1; /*0x5d7218*/
      }
    }
    ScriptRunner_RunScript((int)MEMORY[0xB333A0], 0, a4, st5_0, a3); /*0x5d7225*/
    sub_65F770((MagicTarget *)reference, 0, a5, a3); /*0x5d7230*/
    __asm { fld     dword ptr ds:0A6B328h } /*0x5d7235*/
    __asm { fstp    [esp+34h+a2]; value }
    Tile_SetFloat(*((Tile **)v19 + 0xA), 0xFB3u, a2a); /*0x5d7247*/
    HoursToSleep = reference->HoursToSleep; /*0x5d7257*/
    __asm { fild    [esp+30h+var_20] } /*0x5d725e*/
    __asm { fstp    [esp+34h+a2]; value }
    Tile_SetFloat(*((Tile **)v19 + 0xA), 0xFB3u, a2b); /*0x5d726b*/
    __asm { fldz } /*0x5d7270*/
    __asm { fstp    [esp+34h+a2]; value }
    Tile_SetFloat(*((Tile **)v19 + 0xA), 0xFB3u, a2c); /*0x5d727e*/
    __asm { fld1 } /*0x5d7283*/
    __asm { fstp    [esp+34h+a2]; value }
    Tile_SetFloat(*((Tile **)v19 + 0x11), 0xFA1u, a2d); /*0x5d7291*/
    v39.m_data = 0; /*0x5d7296*/
    v39.m_dataLen = 0; /*0x5d729a*/
    v39.m_bufLen = 0; /*0x5d729f*/
    v41 = 0; /*0x5d72a9*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5d72ad*/
    __asm /*0x5d72b2*/
    {
      fstp    [esp+30h+var_20]
      fld     [esp+30h+var_20]
      fld     st
    }
    v38 = (char)Double_To_SInt32(GameHour); /*0x5d72c4*/
    __asm /*0x5d72c8*/
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
    v35 = Double_To_SInt32(GameHour); /*0x5d72df*/
    __asm /*0x5d72e3*/
    {
      fnstsw  ax
      fld     qword ptr ds:0A2F910h
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5d72ee*/
    {
      __asm /*0x5d72f4*/
      {
        fcom    st(1)
        fnstsw  ax
        fld     st(1)
      }
      if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5d72fd*/
        __asm { fsub    st, st(1) } /*0x5d72ff*/
    }
    else
    {
      __asm { fld     st } /*0x5d72f0*/
    }
    __asm { fcompp } /*0x5d7306*/
    v23 = Double_To_SInt32(GameHour); /*0x5d7308*/
    __asm { fnstsw  ax } /*0x5d730a*/
    v25 = __SETP__(HIBYTE(_AX) & 0x41, 0); /*0x5d730c*/
    v26 = "pm"; /*0x5d730f*/
    if ( v25 ) /*0x5d7314*/
      v26 = "am"; /*0x5d7316*/
    a2e = v26; /*0x5d731b*/
    v29 = v23; /*0x5d7325*/
    GameDayOfWeekName = TimeGlobals_GetGameDayOfWeekName(&MEMORY[0xB332E0]); /*0x5d732b*/
    BSStringT_Static_Format(&v39, "%s %d:%02d %s", GameDayOfWeekName, v29, v35, a2e); /*0x5d733b*/
    Tile_SetString(*((_DWORD **)v19 + 0xE), (_DWORD *)0xFDE, v39.m_data); /*0x5d7350*/
    a2 = TimeGlobals_FormatGameDate((int *)&MEMORY[0xB332E0], GameHour, &v40); /*0x5d735f*/
    LOBYTE(v41) = 1; /*0x5d7369*/
    sub_4FB4C0(&v39, (const char **)&a2->m_data); /*0x5d736e*/
    LOBYTE(v41) = 0; /*0x5d7377*/
    BSStringT_Clear((unsigned int *)&v40); /*0x5d737b*/
    Tile_SetString(*((_DWORD **)v19 + 0xF), (_DWORD *)0xFDE, v39.m_data); /*0x5d738d*/
    v41 = 0xFFFFFFFF; /*0x5d7396*/
    BSStringT_Clear((unsigned int *)&v39); /*0x5d739e*/
    return 1; /*0x5d73a3*/
  }
  else
  {
    ClsoeSleepWaitMenu(st5_0, a3, a4, a6, a7, a8, a9); /*0x5d71b6*/
    return 0; /*0x5d71bb*/
  }
}
