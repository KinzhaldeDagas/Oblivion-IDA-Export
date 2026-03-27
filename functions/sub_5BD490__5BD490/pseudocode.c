void __userpurge sub_5BD490(double a1@<st2>, double a2@<st1>, double a3@<st0>, int a4, int a5)
{
  _DWORD *OpenMenuTile; // esi
  void *ParentMenu; // eax
  _DWORD *v8; // eax
  void *v9; // eax
  void *v10; // eax
  signed int v11; // [esp-10h] [ebp-10h]

  if ( a4 == 6 )
  {
    sub_57DE50(1);
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
    v11 = dword_B3B410;
    TESDataHandler_g_PlayerRef->unk11C = dword_B3B410;
    sub_597CA0(v11);
    if ( OpenMenuTile )
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
      OblivionDynamicCast(
        ParentMenu,
        0,
        (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
        &ContainerMenu `RTTI Type Descriptor',
        0);
      ContainerMenu_Update(a1, a2);
    }
    else
    {
      v8 = (_DWORD *)Menu_GetOpenMenuTile(0x40D);
      v9 = (void *)Tile_GetParentMenu(v8);
      v10 = OblivionDynamicCast(
              v9,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &SpellPurchaseMenu `RTTI Type Descriptor',
              0);
      SpellPurchaseMenu_Update((int)v10, a1, a2, a3);
    }
    sub_5BD440(a1, a2);
  }
  else if ( a4 == 7 )
  {
    sub_57DE50(2);
    sub_5BD440(a1, a2);
  }
}
