double __usercall sub_5A6B00@<st0>(double a1@<st2>, double result@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v7; // esi
  TileMenu *v8; // eax
  Tile **v9; // edi
  LowProcess *process; // ecx
  EntryData *v11; // eax
  CHAR *v12; // eax
  float a2; // [esp+Ch] [ebp-30h]
  float a2a; // [esp+Ch] [ebp-30h]
  char v15; // [esp+27h] [ebp-15h]
  BSStringT v16; // [esp+28h] [ebp-14h] BYREF
  unsigned int v17; // [esp+38h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x5a6b2b*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->unk054[3] ) /*0x5a6b47*/
    {
      OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3EC); /*0x5a6b56*/
      if ( OpenMenuTile ) /*0x5a6b60*/
        (**OpenMenuTile)(OpenMenuTile, 1); /*0x5a6b6a*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a6b78*/
      result = InterfaceManager_GetDepth(result); /*0x5a6b7a*/
      *(float *)&v16.m_data = result; /*0x5a6b7f*/
      XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, a3, result, "Data\\Menus\\Main\\hud_main_menu.xml"); /*0x5a6b90*/
      ParentMenu = Tile_GetParentMenu(XML); /*0x5a6b94*/
      v7 = (Menu *)ParentMenu; /*0x5a6b99*/
      if ( ParentMenu ) /*0x5a6b9d*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x3EC ) /*0x5a6bb1*/
        {
          v8 = (TileMenu *)OblivionDynamicCast( /*0x5a6bc6*/
                             XML,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                             &TileMenu `RTTI Type Descriptor',
                             0);
          Menu_SetTileMenu(v7, a3, result, v8); /*0x5a6bd1*/
          v9 = (Tile **)OblivionDynamicCast( /*0x5a6bea*/
                          v7,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                          &HUDMainMenu `RTTI Type Descriptor',
                          0);
          if ( !sub_5A55A0(v9) ) /*0x5a6bf1*/
            sub_404EC0("Hud Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5a6bff*/
          if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5a6c37*/
            Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, *(float *)&v16.m_data); /*0x5a6c48*/
          sub_5A5B50(v9, 8); /*0x5a6c51*/
          sub_5A5B50(v9, 9); /*0x5a6c5a*/
          sub_5A5B50(v9, 0xA); /*0x5a6c63*/
          v15 = 0; /*0x5a6c6f*/
          if ( reference ) /*0x5a6c68*/
          {
            process = reference->super.super.super.process; /*0x5a6c7a*/
            if ( process ) /*0x5a6c7f*/
            {
              if ( !process->GetProcessLevel(process) ) /*0x5a6c8a*/
              {
                v11 = reference->super.super.super.process->GetEquippedWeaponData( /*0x5a6ca7*/
                        reference->super.super.super.process,
                        1);
                if ( v11 ) /*0x5a6cab*/
                {
                  v12 = sub_4702D0(v11->type, (TESObjectREFR *)reference); /*0x5a6cb8*/
                  if ( strlen(v12) ) /*0x5a6cc2*/
                  {
                    v16.m_data = 0; /*0x5a6cd4*/
                    v16.m_dataLen = 0; /*0x5a6cd8*/
                    v16.m_bufLen = 0; /*0x5a6cdd*/
                    v17 = 0; /*0x5a6cf2*/
                    BSStringT_Static_Format(&v16, "%s\\%s", "Icons", v12); /*0x5a6cf6*/
                    sub_57B190((unsigned __int8 *)v16.m_data); /*0x5a6d00*/
                    v15 = 1; /*0x5a6d0c*/
                    v17 = 0xFFFFFFFF; /*0x5a6d11*/
                    BSStringT_Clear((unsigned int *)&v16); /*0x5a6d19*/
                  }
                }
              }
            }
          }
          a2 = (float)SLODWORD(g_GameSettingStringPointers_B36CD8[0x3BA]); /*0x5a6d28*/
          Tile_SetFloat(v9[0x11], (_DWORD *)0xFB0, a2); /*0x5a6d30*/
          a2a = (float)SLODWORD(g_GameSettingStringPointers_B36CD8[0x3BC]); /*0x5a6d3f*/
          Tile_SetFloat(v9[0x11], (_DWORD *)0xFB1, a2a); /*0x5a6d47*/
          if ( !v15 ) /*0x5a6d51*/
            sub_57B190(stru_B33D84); /*0x5a6d5a*/
          *((float *)v9 + 0x1C) = 1.0 - Tile_GetFloat(XML, 0xFB4) / fCostant_100; /*0x5a6d7b*/
          sub_5A5900(0.0, 0.0); /*0x5a6d87*/
          EnableMenu(v7, a1, 1.0, 0.0, 1); /*0x5a6d93*/
          return 0.0; /*0x5a6d7e*/
        }
        else if ( v7->members.tile ) /*0x5a6dae*/
        {
          v7->__vftable->Destructor(v7, 1); /*0x5a6dbc*/
        }
      }
    }
  }
  return result; /*0x5a6d9a*/
}
