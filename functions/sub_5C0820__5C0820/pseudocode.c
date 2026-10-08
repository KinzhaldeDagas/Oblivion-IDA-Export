void __userpurge sub_5C0820(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        int a8,
        int a9)
{
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // edi
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  void *ParentMenu; // eax
  void *v19; // eax
  _DWORD *v20; // eax
  void *v21; // eax
  void *v22; // eax
  _DWORD *v23; // eax
  void *v24; // eax
  _DWORD *OpenMenuTile; // [esp+8h] [ebp+4h]

  if ( a8 == 6 ) /*0x5c082a*/
  {
    Tile_GetFloat((_DWORD *)a1[0xC], 0xFB5); /*0x5c083b*/
    v11 = Double_To_SInt32(a3); /*0x5c0840*/
    v12 = a1[0x11]; /*0x5c0845*/
    v13 = a1[0x13]; /*0x5c0848*/
    v14 = v11; /*0x5c0850*/
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x5c085a*/
    sub_5C07D0(a2, a4, a5, a6, a7); /*0x5c085e*/
    v15 = a1[0x14]; /*0x5c0863*/
    if ( v15 ) /*0x5c0868*/
    {
      v16 = ExtraDataList_GetExtraCount((ExtraDataList *)(v15 + 0x44)) - v14; /*0x5c0886*/
      TESObjectREFR_AddItemFromWorldReference((TESObjectREFR *)reference, (TESObjectREFR *)a1[0x14], v14, 0, 0); /*0x5c0888*/
      v17 = a1[0x14]; /*0x5c088f*/
      if ( v16 <= 0 ) /*0x5c0892*/
      {
        if ( v17 ) /*0x5c08ad*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x10))(v17, 1); /*0x5c08b6*/
        a1[0x14] = 0; /*0x5c08bb*/
      }
      else
      {
        ExtraDataList_SetExtraCount((ExtraDataList *)(v17 + 0x44), v16); /*0x5c0898*/
        a1[0x14] = 0; /*0x5c08a0*/
      }
    }
    else if ( OpenMenuTile ) /*0x5c08cc*/
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5c08dc*/
      v19 = OblivionDynamicCast( /*0x5c08e2*/
              ParentMenu,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &ContainerMenu `RTTI Type Descriptor',
              0);
      g_ContainerMenu_Quantity = v14; /*0x5c08ea*/
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v19 + 0xC))(v19, v12, v13); /*0x5c08f9*/
    }
    else
    {
      v20 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x5c0907*/
      if ( v20 ) /*0x5c0911*/
      {
        v21 = (void *)Tile_GetParentMenu(v20); /*0x5c0923*/
        v22 = OblivionDynamicCast( /*0x5c0929*/
                v21,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &InventoryMenu `RTTI Type Descriptor',
                0);
        CountDelta = v14; /*0x5c0931*/
        (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v22 + 0xC))(v22, v12, v13); /*0x5c0940*/
      }
    }
  }
  else if ( a8 == 7 ) /*0x5c094c*/
  {
    v23 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x5c0953*/
    if ( v23 ) /*0x5c095d*/
    {
      v24 = (void *)Tile_GetParentMenu(v23); /*0x5c096f*/
      if ( OblivionDynamicCast( /*0x5c0975*/
             v24,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &InventoryMenu `RTTI Type Descriptor',
             0) )
      {
        LOBYTE(dword_B3B0B4[0xC9]) = 0; /*0x5c0981*/
      }
    }
    sub_5C07D0(a2, a4, a5, a6, a7); /*0x5c0988*/
  }
}
