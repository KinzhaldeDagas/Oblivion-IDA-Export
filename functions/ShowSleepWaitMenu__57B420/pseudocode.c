void __cdecl ShowSleepWaitMenu(char a4)
{
  double v1; // st5
  double v2; // st6
  InterfaceManager *Singleton; // eax
  double Float; // st7
  Tile *OpenMenuTile; // eax
  Menu *ParentMenu; // eax
  SleepWaitMenu *v7; // eax
  _DWORD *v8; // eax
  InterfaceManager *v9; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  Menu *v12; // edi
  TileMenu *v13; // eax
  SleepWaitMenu *v14; // esi
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st5
  char v19; // cl
  const char *v20; // eax
  const char *GameDayOfWeekName; // eax
  char *v22; // ebp
  int v23; // [esp-4h] [ebp-44h]
  int v24; // [esp+0h] [ebp-40h]
  char *m_data; // [esp+0h] [ebp-40h]
  float v26; // [esp+4h] [ebp-3Ch]
  float a3a; // [esp+4h] [ebp-3Ch]
  const char *a3b; // [esp+4h] [ebp-3Ch]
  unsigned int v29; // [esp+8h] [ebp-38h]
  int v30; // [esp+Ch] [ebp-34h] BYREF
  float v31; // [esp+1Ch] [ebp-24h]
  float a3; // [esp+20h] [ebp-20h]
  BSStringT v33; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT v34; // [esp+2Ch] [ebp-14h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+34h] [ebp-Ch]
  void *v36; // [esp+38h] [ebp-8h]
  unsigned int v37; // [esp+3Ch] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b424*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b440*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b452*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b45c*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57b46e*/
        if ( Float == fConstant_2 ) /*0x57b47e*/
        {
          OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F4); /*0x57b493*/
          ParentMenu = (Menu *)Tile_GetParentMenu(OpenMenuTile); /*0x57b49d*/
          v7 = (SleepWaitMenu *)OblivionDynamicCast( /*0x57b4a3*/
                                  ParentMenu,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                  &SleepWaitMenu `RTTI Type Descriptor',
                                  0);
          if ( v7 ) /*0x57b4ad*/
            v7->__ftable->Destructor((Menu *)v7, 1); /*0x57b4b7*/
          v37 = 0xFFFFFFFF; /*0x5d6d20*/
          v36 = &loc_9C1F90; /*0x5d6d22*/
          ExceptionList = NtCurrentTeb()->Tib.ExceptionList; /*0x5d6d2d*/
          v29 = (unsigned int)&v30 ^ __security_cookie; /*0x5d6d3c*/
          unk_B3B728 = 0; /*0x5d6d4e*/
          v8 = (_DWORD *)Menu_GetOpenMenuTile(0x3F4); /*0x5d6d54*/
          if ( !Tile_GetParentMenu(v8) ) /*0x5d6d5e*/
          {
            v9 = InterfaceManager_GetSingleton(0, 1); /*0x5d6d76*/
            Depth = InterfaceManager_GetDepth(Float); /*0x5d6d78*/
            a3 = Depth; /*0x5d6d7d*/
            XML = Tile::ReadFile((BSStringT *)v9->menuRoot, v1, v2, Depth, "Data\\Menus\\sleep_wait_menu.xml"); /*0x5d6d8e*/
            v12 = (Menu *)Tile_GetParentMenu(XML); /*0x5d6d97*/
            if ( v12 ) /*0x5d6d9b*/
            {
              if ( ((int (__thiscall *)(Menu *, unsigned int))v12->__vftable->GetID)(v12, v29) == 0x3F4 ) /*0x5d6daf*/
              {
                v13 = (TileMenu *)OblivionDynamicCast( /*0x5d6dc2*/
                                    XML,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                                    &TileMenu `RTTI Type Descriptor',
                                    0);
                Menu_SetTileMenu(v12, v2, Depth, v13); /*0x5d6dcd*/
                v14 = (SleepWaitMenu *)OblivionDynamicCast( /*0x5d6de4*/
                                         v12,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                         &SleepWaitMenu `RTTI Type Descriptor',
                                         0);
                if ( sub_5D68A0(v14) ) /*0x5d6deb*/
                {
                  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 /*0x5d6e36*/
                    || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
                  {
                    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3); /*0x5d6e47*/
                  }
                  Tile_SetFloat((Tile *)v14->members.unk04, (_DWORD *)0xFB7, flt_A6B1F0); /*0x5d6e5e*/
                  Tile_SetFloat((Tile *)v14->members.unk04, (_DWORD *)0xFB7, 0.0); /*0x5d6e71*/
                  v26 = (float)dword_B14778; /*0x5d6e80*/
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB3, v26); /*0x5d6e88*/
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB3, 0.0); /*0x5d6e9b*/
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFAF, 1.0); /*0x5d6eae*/
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB0, flt_A2F930); /*0x5d6ec5*/
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB2, flt_A5977C); /*0x5d6edc*/
                  unk_B3B730 = reference->HoursToSleep; /*0x5d6ef0*/
                  unk_B3B72C = 0; /*0x5d6ef6*/
                  if ( a4 ) /*0x5d6efc*/
                  {
                    v15 = fConstant_2; /*0x5d6f19*/
                  }
                  else
                  {
                    Tile_SetString((_DWORD *)v14->members.unk08, (_DWORD *)0xFAE, (char *)stru_B38AC8); /*0x5d6f0d*/
                    v15 = 1.0; /*0x5d6f12*/
                    LOBYTE(v14[1].members.super.templateNext) = 0; /*0x5d6f14*/
                  }
                  a3a = v15; /*0x5d6f20*/
                  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a3a); /*0x5d6f2a*/
                  v33.m_data = 0; /*0x5d6f2f*/
                  v33.m_dataLen = 0; /*0x5d6f33*/
                  v33.m_bufLen = 0; /*0x5d6f38*/
                  v37 = 0; /*0x5d6f42*/
                  a3 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5d6f4b*/
                  LODWORD(a3) = (char)Double_To_SInt32(a3); /*0x5d6f5d*/
                  v16 = (double)SLODWORD(a3); /*0x5d6f67*/
                  HIBYTE(v31) = Double_To_SInt32(v16); /*0x5d6f78*/
                  v17 = dbl_A2F910; /*0x5d6f7e*/
                  if ( v16 >= 1.0 ) /*0x5d6f87*/
                  {
                    v18 = v16; /*0x5d6f91*/
                    if ( v17 < v16 ) /*0x5d6f96*/
                      v18 = v16 - v17; /*0x5d6f98*/
                  }
                  else
                  {
                    v18 = v17; /*0x5d6f89*/
                  }
                  v19 = Double_To_SInt32(v16); /*0x5d6fa1*/
                  v20 = "pm"; /*0x5d6fa8*/
                  if ( v17 > v16 ) /*0x5d6fad*/
                    v20 = "am"; /*0x5d6faf*/
                  a3b = v20; /*0x5d6fb9*/
                  v24 = SHIBYTE(v31); /*0x5d6fbd*/
                  v23 = v19; /*0x5d6fbe*/
                  GameDayOfWeekName = TimeGlobals_GetGameDayOfWeekName(&MEMORY[0xB332E0]); /*0x5d6fc4*/
                  BSStringT_Static_Format(&v33, "%s %d:%02d %s", GameDayOfWeekName, v23, v24, a3b); /*0x5d6fd4*/
                  Tile_SetString((_DWORD *)v14->members.unk10, (_DWORD *)0xFDE, v33.m_data); /*0x5d6fe9*/
                  m_data = TimeGlobals_FormatGameDate((int *)&MEMORY[0xB332E0], v16, &v34)->m_data; /*0x5d7000*/
                  LOBYTE(v37) = 1; /*0x5d7005*/
                  BSStringT_Set(&v33, m_data, 0); /*0x5d700a*/
                  LOBYTE(v37) = 0; /*0x5d7014*/
                  FormHeapFree((unsigned int)v34.m_data); /*0x5d7018*/
                  v22 = v33.m_data; /*0x5d701d*/
                  Tile_SetString((_DWORD *)v14->members.unk14, (_DWORD *)0xFDE, v33.m_data); /*0x5d702d*/
                  unk_B3B729 = 0; /*0x5d7034*/
                  sub_57DE50(0xB); /*0x5d703a*/
                  EnableMenu(v12, v18, v17, v16, 0); /*0x5d7045*/
                  FormHeapFree((unsigned int)v22); /*0x5d704b*/
                }
                else
                {
                  PrintError("Sleep Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5d6df9*/
                }
              }
              else if ( v12->members.tile ) /*0x5d7069*/
              {
                v12->__vftable->Destructor(v12, 1); /*0x5d7076*/
              }
            }
          }
        }
      }
    }
  }
}
