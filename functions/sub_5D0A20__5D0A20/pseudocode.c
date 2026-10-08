void __userpurge sub_5D0A20(
        char a1@<cl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        EntryData *a9,
        char a10)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v13; // eax
  int v14; // edx
  _DWORD *v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // esi
  TESForm **v26; // ecx
  ExtraContainerChanges_Data *ContainerChanges; // eax
  UInt32 ItemCount; // eax
  unsigned int v29; // esi
  TESForm *type; // [esp-10h] [ebp-24h]
  _DWORD v31[4]; // [esp+4h] [ebp-10h] BYREF

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x410); /*0x5d0a2b*/
  if ( OpenMenuTile ) /*0x5d0a35*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d0a4c*/
    v13 = OblivionDynamicCast( /*0x5d0a52*/
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &AlchemyMenu `RTTI Type Descriptor',
            0);
    v15 = v13; /*0x5d0a57*/
    if ( v13 ) /*0x5d0a5e*/
    {
      v16 = v13[0x2C]; /*0x5d0a64*/
      if ( v16 ) /*0x5d0a6c*/
        v17 = *(_DWORD *)(v16 + 8); /*0x5d0a6e*/
      else
        v17 = 0; /*0x5d0a73*/
      v31[0] = v17; /*0x5d0a75*/
      v18 = v15[0x2D]; /*0x5d0a79*/
      if ( v18 ) /*0x5d0a81*/
        v19 = *(_DWORD *)(v18 + 8); /*0x5d0a83*/
      else
        v19 = 0; /*0x5d0a88*/
      v31[1] = v19; /*0x5d0a8a*/
      v20 = v15[0x2E]; /*0x5d0a8e*/
      if ( v20 ) /*0x5d0a96*/
        v21 = *(_DWORD *)(v20 + 8); /*0x5d0a98*/
      else
        v21 = 0; /*0x5d0a9d*/
      v31[2] = v21; /*0x5d0a9f*/
      v22 = v15[0x2F]; /*0x5d0aa3*/
      if ( v22 ) /*0x5d0aab*/
        v23 = *(_DWORD *)(v22 + 8); /*0x5d0aad*/
      else
        v23 = 0; /*0x5d0ab2*/
      v31[3] = v23; /*0x5d0abc*/
      v24 = 1; /*0x5d0ac0*/
      if ( a9 ) /*0x5d0ac5*/
      {
        v25 = dword_B3B0B4[0x6F]; /*0x5d0ac7*/
        v26 = (TESForm **)v31; /*0x5d0acd*/
        while ( v24 <= 4 ) /*0x5d0ad4*/
        {
          if ( v24 != v25 && *v26 == a9->type ) /*0x5d0adf*/
          {
            dword_B3B0B4[0x6F] = v24; /*0x5d0aef*/
            sub_5D0A20(a1, a2, a3, a4, 0, 0); /*0x5d0af4*/
            dword_B3B0B4[0x6F] = v25; /*0x5d0af9*/
            break; /*0x5d0af9*/
          }
          ++v24; /*0x5d0ae1*/
          ++v26; /*0x5d0ae4*/
        }
        type = a9->type; /*0x5d0aff*/
        ContainerChanges = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d0b0c*/
        ItemCount = ContainerExtraData_GetItemCount(ContainerChanges, type); /*0x5d0b13*/
        Shared_SetDwordAtOffset04(a9, ItemCount); /*0x5d0b1b*/
      }
      v29 = v15[dword_B3B0B4[0x6F] + 0x2C]; /*0x5d0b25*/
      if ( v29 ) /*0x5d0b2e*/
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)v15[dword_B3B0B4[0x6F] + 0x2C], v14); /*0x5d0b32*/
        FormHeapFree(v29); /*0x5d0b38*/
      }
      v15[dword_B3B0B4[0x6F] + 0x2C] = a9; /*0x5d0b48*/
      sub_57DE50(0x1F); /*0x5d0b4f*/
      sub_594F00((int)v15, a3, a4, a10); /*0x5d0b5e*/
    }
    sub_5D03B0(a2, a3, a1, a5, a6, a7, a8, a4); /*0x5d0b65*/
  }
}
