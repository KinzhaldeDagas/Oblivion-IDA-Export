void __cdecl ShowSleepWaitMenu(char a4)
{
  int v1; // ebp
  double v2; // st5
  double v3; // st6
  InterfaceManager *Singleton; // eax
  Tile *OpenMenuTile; // eax
  Menu *ParentMenu; // eax
  SleepWaitMenu *v7; // eax
  _DWORD *v8; // eax
  InterfaceManager *v9; // esi
  double Depth; // st7
  unsigned int *XML; // ebp
  Menu *v12; // edi
  _DWORD *v13; // eax
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
  _DWORD v30[4]; // [esp+Ch] [ebp-34h] BYREF
  float v31; // [esp+1Ch] [ebp-24h]
  float a3; // [esp+20h] [ebp-20h]
  BSStringT v33; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT v34; // [esp+2Ch] [ebp-14h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+34h] [ebp-Ch]
  void *v36; // [esp+38h] [ebp-8h]
  unsigned int v37; // [esp+3Ch] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F4);
          ParentMenu = (Menu *)Tile_GetParentMenu(OpenMenuTile);
          v7 = (SleepWaitMenu *)OblivionDynamicCast(
                                  ParentMenu,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                  &SleepWaitMenu `RTTI Type Descriptor',
                                  0);
          if ( v7 )
            v7->__ftable->Destructor((Menu *)v7, 1);
          v37 = 0xFFFFFFFF;
          v36 = &loc_9C1F90;
          ExceptionList = NtCurrentTeb()->Tib.ExceptionList;
          v30[2] = v1;
          v29 = (unsigned int)v30 ^ __security_cookie;
          byte_B3B728 = 0;
          v8 = (_DWORD *)Menu_GetOpenMenuTile(0x3F4);
          if ( !Tile_GetParentMenu(v8) )
          {
            v9 = InterfaceManager_GetSingleton(0, 1);
            Depth = InterfaceManager_GetDepth(v1, v2, v3);
            a3 = Depth;
            XML = Menu_LoadXML(v9->menuRoot, v2, v3, Depth, "Data\\Menus\\sleep_wait_menu.xml");
            v12 = (Menu *)Tile_GetParentMenu(XML);
            if ( v12 )
            {
              if ( ((int (__thiscall *)(Menu *, unsigned int))v12->__vftable->GetID)(v12, v29) == 0x3F4 )
              {
                v13 = OblivionDynamicCast(
                        XML,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &TileMenu `RTTI Type Descriptor',
                        0);
                Menu_SetTileMenu(v12, (char)XML, v2, v3, v13);
                v14 = (SleepWaitMenu *)OblivionDynamicCast(
                                         v12,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                         &SleepWaitMenu `RTTI Type Descriptor',
                                         0);
                if ( sub_5D68A0(v14) )
                {
                  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
                    || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
                  {
                    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
                  }
                  Tile_SetFloat((Tile *)v14->members.unk04, (_DWORD *)0xFB7, flt_A6B1F0);
                  Tile_SetFloat((Tile *)v14->members.unk04, (_DWORD *)0xFB7, 0.0);
                  v26 = (float)dword_B14778;
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB3, v26);
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB3, 0.0);
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFAF, 1.0);
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB0, flt_A2F930);
                  Tile_SetFloat((Tile *)v14->members.unk00, (_DWORD *)0xFB2, flt_A5977C);
                  dword_B3B730 = TESDataHandler_g_PlayerRef->HoursToSleep;
                  byte_B3B72C = 0;
                  if ( a4 )
                  {
                    v15 = fConstant_2;
                  }
                  else
                  {
                    Tile_SetString((_DWORD *)v14->members.unk08, (_DWORD *)0xFAE, (const char *)dword_B38AC8);
                    v15 = 1.0;
                    LOBYTE(v14[1].members.super.unk0C) = 0;
                  }
                  a3a = v15;
                  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a3a);
                  v33.m_data = 0;
                  v33.m_dataLen = 0;
                  v33.m_bufLen = 0;
                  v37 = 0;
                  a3 = TimeGlobals_GetGameHour(&TimeGlobals);
                  LODWORD(a3) = (char)Double_To_SInt32(a3);
                  v16 = (double)SLODWORD(a3);
                  HIBYTE(v31) = Double_To_SInt32(v16);
                  v17 = dbl_A2F910;
                  if ( v16 >= 1.0 )
                  {
                    v18 = v16;
                    if ( v17 < v16 )
                      v18 = v16 - v17;
                  }
                  else
                  {
                    v18 = v17;
                  }
                  v19 = Double_To_SInt32(v16);
                  v20 = "pm";
                  if ( v17 > v16 )
                    v20 = "am";
                  a3b = v20;
                  v24 = SHIBYTE(v31);
                  v23 = v19;
                  GameDayOfWeekName = TimeGlobals_GetGameDayOfWeekName(&TimeGlobals);
                  BSStringT_Static_Format(&v33, "%s %d:%02d %s", GameDayOfWeekName, v23, v24, a3b);
                  Tile_SetString((_DWORD *)v14->members.unk10, (_DWORD *)0xFDE, v33.m_data);
                  m_data = sub_402E50((int *)&TimeGlobals, v16, &v34)->m_data;
                  LOBYTE(v37) = 1;
                  BSStringT_Set(&v33, m_data, 0);
                  LOBYTE(v37) = 0;
                  FormHeapFree((unsigned int)v34.m_data);
                  v22 = v33.m_data;
                  Tile_SetString((_DWORD *)v14->members.unk14, (_DWORD *)0xFDE, v33.m_data);
                  byte_B3B729 = 0;
                  sub_57DE50(0xB);
                  EnableMenu(v12, v18, (char)v22, v17, v16, 0);
                  FormHeapFree((unsigned int)v22);
                }
                else
                {
                  PrintError("Sleep Menu Creation Failed... Are your menu and art resources up to date?");
                }
              }
              else if ( v12->members.tile )
              {
                v12->__vftable->Destructor(v12, 1);
              }
            }
          }
        }
      }
    }
  }
}
