void __userpurge sub_5D0A20(char a1@<cl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, _DWORD *a5, char a6)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // esi
  _DWORD *v25; // ecx
  ExtraContainerChanges_Data *ContainerChanges; // eax
  UInt32 ItemCount; // eax
  unsigned int v28; // esi
  TESForm *v29; // [esp-10h] [ebp-24h]
  _DWORD v30[4]; // [esp+4h] [ebp-10h] BYREF

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x410);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v12 = OblivionDynamicCast(
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &AlchemyMenu `RTTI Type Descriptor',
            0);
    v14 = v12;
    if ( v12 )
    {
      v15 = v12[0x2C];
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 8);
      else
        v16 = 0;
      v30[0] = v16;
      v17 = v14[0x2D];
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 8);
      else
        v18 = 0;
      v30[1] = v18;
      v19 = v14[0x2E];
      if ( v19 )
        v20 = *(_DWORD *)(v19 + 8);
      else
        v20 = 0;
      v30[2] = v20;
      v21 = v14[0x2F];
      if ( v21 )
        v22 = *(_DWORD *)(v21 + 8);
      else
        v22 = 0;
      v30[3] = v22;
      v23 = 1;
      if ( a5 )
      {
        v24 = dword_B3B270;
        v25 = v30;
        while ( v23 <= 4 )
        {
          if ( v23 != v24 && *v25 == a5[2] )
          {
            dword_B3B270 = v23;
            sub_5D0A20(a1, (int)v14, (int)a5, v24, a2, a3, 0, 0);
            dword_B3B270 = v24;
            break;
          }
          ++v23;
          ++v25;
        }
        v29 = (TESForm *)a5[2];
        ContainerChanges = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        ItemCount = ContainerExtraData_GetItemCount(ContainerChanges, v29);
        sub_60D020(a5, ItemCount);
      }
      v28 = v14[dword_B3B270 + 0x2C];
      if ( v28 )
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)v14[dword_B3B270 + 0x2C], v13);
        FormHeapFree(v28);
      }
      v14[dword_B3B270 + 0x2C] = a5;
      sub_57DE50(0x1F);
      sub_594F00((int)v14, a3, a4, a6);
    }
    sub_5D03B0(a2, a3, a1);
  }
}
