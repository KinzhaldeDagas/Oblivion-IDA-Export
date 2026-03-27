void __userpurge sub_5C0820(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  double Float; // st5
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  signed int v12; // edi
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  void *ParentMenu; // eax
  void *v17; // eax
  _DWORD *v18; // eax
  void *v19; // eax
  void *v20; // eax
  _DWORD *v21; // eax
  void *v22; // eax
  _DWORD *OpenMenuTile; // [esp+8h] [ebp+4h]

  if ( a5 == 6 )
  {
    Float = Tile_GetFloat((_DWORD *)a1[0xC], 0xFB5);
    v9 = Double_To_SInt32(a4);
    v10 = a1[0x11];
    v11 = a1[0x13];
    v12 = v9;
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
    sub_5C07D0(Float, a3);
    v13 = a1[0x14];
    if ( v13 )
    {
      v14 = ExtraDataList_GetExtraCount((ExtraDataList *)(v13 + 0x44)) - v12;
      sub_4DDC40((TESObjectREFR *)TESDataHandler_g_PlayerRef, (TESObjectREFR *)a1[0x14], v12, 0, 0);
      v15 = a1[0x14];
      if ( v14 <= 0 )
      {
        if ( v15 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 0x10))(v15, 1);
        a1[0x14] = 0;
      }
      else
      {
        ExtraDataList_SetExtraCount((ExtraDataList *)(v15 + 0x44), v14);
        a1[0x14] = 0;
      }
    }
    else if ( OpenMenuTile )
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
      v17 = OblivionDynamicCast(
              ParentMenu,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &ContainerMenu `RTTI Type Descriptor',
              0);
      g_ContainerMenu_Quantity = v12;
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v17 + 0xC))(v17, v10, v11);
    }
    else
    {
      v18 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
      if ( v18 )
      {
        v19 = (void *)Tile_GetParentMenu(v18);
        v20 = OblivionDynamicCast(
                v19,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &InventoryMenu `RTTI Type Descriptor',
                0);
        CountDelta = v12;
        (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v20 + 0xC))(v20, v10, v11);
      }
    }
  }
  else if ( a5 == 7 )
  {
    v21 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
    if ( v21 )
    {
      v22 = (void *)Tile_GetParentMenu(v21);
      if ( OblivionDynamicCast(
             v22,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &InventoryMenu `RTTI Type Descriptor',
             0) )
      {
        byte_B3B3D8 = 0;
      }
    }
    sub_5C07D0(a2, a3);
  }
}
