void __usercall sub_5A6040(double a1@<st2>, double a2@<st1>, char a3, char a4)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // edi
  void *ParentMenu; // eax
  Tile **v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax

  if ( !TESDataHandler_g_PlayerRef )
    return;
  if ( TESDataHandler_g_PlayerRef->unk5C0 )
    return;
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC);
  v7 = OpenMenuTile;
  if ( !OpenMenuTile )
    return;
  if ( !Tile_GetParentMenu(OpenMenuTile) )
    return;
  ParentMenu = (void *)Tile_GetParentMenu(v7);
  v9 = (Tile **)OblivionDynamicCast(
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &HUDMainMenu `RTTI Type Descriptor',
                  0);
  v10 = (int)v9;
  if ( !v9 )
    return;
  if ( !a3 )
  {
    Tile_SetFloat(v9[1], (_DWORD *)0xFB1, 1.0);
    v13 = *(_DWORD *)(v10 + 0x24);
    if ( v13 != 1 && v13 != 8 )
    {
      if ( a4 )
        Tile_SetFloat(v7, (_DWORD *)0xFA1, fConstant_2);
      else
        sub_584390(v10);
    }
    goto LABEL_27;
  }
  Menu_GetB3A708(1);
  if ( sub_5878B0(0x3EB)
    || (Menu_GetB3A708(1), sub_5878B0(0x3EA))
    || (Menu_GetB3A708(1), sub_5878B0(0x3FE))
    || (Menu_GetB3A708(1), sub_5878B0(0x3FF)) )
  {
    Tile_SetFloat(*(Tile **)(v10 + 4), (_DWORD *)0xFB1, 0.0);
    v12 = *(_DWORD *)(v10 + 0x24);
    if ( v12 == 1 || v12 == 8 )
      return;
    if ( !a4 )
    {
      sub_584390(v10);
      return;
    }
LABEL_27:
    Tile_SetFloat(v7, (_DWORD *)0xFA1, fConstant_2);
    return;
  }
  v11 = *(_DWORD *)(v10 + 0x24);
  if ( v11 != 4 && v11 != 2 && sub_578FE0() )
  {
    if ( a4 )
    {
      Tile_SetFloat(v7, (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*(Tile **)(v10 + 4), (_DWORD *)0xFB1, 1.0);
      return;
    }
    sub_584740((_DWORD *)v10, a1, a2);
  }
  Tile_SetFloat(*(Tile **)(v10 + 4), (_DWORD *)0xFB1, 1.0);
}
