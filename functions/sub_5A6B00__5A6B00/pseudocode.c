double __usercall sub_5A6B00@<st0>(double a1@<st2>, double result@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v9; // esi
  TileMenu *v10; // eax
  Tile **v11; // edi
  LowProcess *process; // ecx
  EntryData *v13; // eax
  CHAR *v14; // eax
  float a2; // [esp+Ch] [ebp-30h]
  float a2a; // [esp+Ch] [ebp-30h]
  char v17; // [esp+27h] [ebp-15h]
  BSStringT v18; // [esp+28h] [ebp-14h] BYREF
  unsigned int v19; // [esp+38h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->unk054[3] )
    {
      OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3EC);
      if ( OpenMenuTile )
        (**OpenMenuTile)(OpenMenuTile, 1);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      result = InterfaceManager_GetDepth(result);
      *(float *)&v18.m_data = result;
      XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a3, result, "Data\\Menus\\Main\\hud_main_menu.xml");
      ParentMenu = Tile_GetParentMenu(XML);
      v9 = (Menu *)ParentMenu;
      if ( ParentMenu )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x3EC )
        {
          v10 = (TileMenu *)OblivionDynamicCast(
                              XML,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                              &TileMenu `RTTI Type Descriptor',
                              0);
          Menu_SetTileMenu(v9, a3, result, v10);
          v11 = (Tile **)OblivionDynamicCast(
                           v9,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                           &HUDMainMenu `RTTI Type Descriptor',
                           0);
          if ( !sub_5A55A0(v11) )
            sub_404EC0("Hud Menu Creation Failed... Are your menu and art resources up to date?");
          if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
            Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, *(float *)&v18.m_data);
          sub_5A5B50(v11, 8);
          sub_5A5B50(v11, 9);
          sub_5A5B50(v11, 0xA);
          v17 = 0;
          if ( TESDataHandler_g_PlayerRef )
          {
            process = TESDataHandler_g_PlayerRef->super.super.super.process;
            if ( process )
            {
              if ( !process->GetProcessLevel(process) )
              {
                v13 = TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedWeaponData(
                        TESDataHandler_g_PlayerRef->super.super.super.process,
                        1);
                if ( v13 )
                {
                  v14 = sub_4702D0(v13->type, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
                  if ( strlen(v14) )
                  {
                    v18.m_data = 0;
                    v18.m_dataLen = 0;
                    v18.m_bufLen = 0;
                    v19 = 0;
                    BSStringT_Static_Format(&v18, "%s\\%s", "Icons", v14);
                    sub_57B190((unsigned __int8 *)v18.m_data);
                    v17 = 1;
                    v19 = 0xFFFFFFFF;
                    BSStringT_Clear((unsigned int *)&v18);
                  }
                }
              }
            }
          }
          a2 = (float)dword_B37BC0;
          Tile_SetFloat(v11[0x11], (_DWORD *)0xFB0, a2);
          a2a = (float)dword_B37BC8;
          Tile_SetFloat(v11[0x11], (_DWORD *)0xFB1, a2a);
          if ( !v17 )
            sub_57B190(dword_B33D84);
          *((float *)v11 + 0x1C) = 1.0 - Tile_GetFloat(XML, 0xFB4) / fCostant_100;
          sub_5A5900(0.0, 0.0);
          EnableMenu(v9, a1, 1.0, 0.0, 1);
          return 0.0;
        }
        else if ( v9->members.tile )
        {
          v9->__vftable->Destructor(v9, 1);
        }
      }
    }
  }
  return result;
}
