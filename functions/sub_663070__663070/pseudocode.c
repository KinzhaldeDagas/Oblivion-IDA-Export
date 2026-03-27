bhkCharacterProxy *__userpurge sub_663070@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st3>,
        double a6@<st0>,
        char a7)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v9; // esi
  void *ParentMenu; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  void *v13; // eax
  int v14; // eax
  int v15; // eax
  bhkCharacterProxy *result; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3ED);
  v9 = 0;
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v9 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &HUDInfoMenu `RTTI Type Descriptor',
           0);
  }
  v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  v12 = 0;
  if ( v11 )
  {
    v13 = (void *)Tile_GetParentMenu(v11);
    v12 = OblivionDynamicCast(
            v13,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &HUDMainMenu `RTTI Type Descriptor',
            0);
  }
  *(_BYTE *)(a1 + 0x5C0) = a7;
  if ( a7 )
  {
    if ( v9 )
    {
      v14 = v9[9];
      if ( v14 != 4 && v14 != 2 )
        sub_584740(v9, a3, a4);
    }
    if ( v12 )
    {
      v15 = v12[9];
      if ( v15 != 4 && v15 != 2 )
        sub_584740(v12, a3, a4);
    }
    sub_578CF0(a2, a3, a4, a6, a5, 0);
    sub_5732D0((NiNode **)dword_B3A6B0, a3, a4, 1.0, 0, 1.0);
    result = MobileObject_GetCharProxy((MobileObject *)a1);
    *((_DWORD *)result + 0xEC) = 0;
  }
  else
  {
    if ( v12 )
    {
      if ( v12[9] == 4 && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
        sub_584390((int)v12);
    }
    if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 && !InterfaceManager_IsMenuMode() )
      a6 = sub_578CF0(a2, a3, a4, a6, a5, 1);
    sub_572EC0(a3, a4, a6, a2, 0, 0);
    result = MobileObject_GetCharProxy((MobileObject *)a1);
    *((_DWORD *)result + 0xEC) = 0x3E8;
  }
  return result;
}
