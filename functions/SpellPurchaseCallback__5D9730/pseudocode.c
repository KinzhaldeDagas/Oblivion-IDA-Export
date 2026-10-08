void __usercall SpellPurchaseCallback(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v5; // eax
  int v6; // esi
  TESTopic *Topic; // eax
  float *ContainerChanges; // eax
  signed int unk11C; // edx
  float v10; // [esp+10h] [ebp-14h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40D); /*0x5d9738*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d9742*/
  v5 = OblivionDynamicCast( /*0x5d9756*/
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &SpellPurchaseMenu `RTTI Type Descriptor',
         0);
  v6 = (int)v5; /*0x5d975b*/
  if ( v5 ) /*0x5d9762*/
  {
    if ( v5[0x15] ) /*0x5d9768*/
    {
      if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x5d9778*/
      {
        if ( *(int *)(v6 + 0x58) < 1 || sub_5E10F0(*(void **)(v6 + 0x50), *(float *)&reference) ) /*0x5d978d*/
        {
          ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.Unk_B7)( /*0x5d97fc*/
            reference,
            *(_DWORD *)(v6 + 0x54));
          ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d9807*/
          sub_491700(ContainerChanges, a1, a2, a3, (TESObjectREFR *)reference, *(_DWORD *)(v6 + 0x58), 0); /*0x5d981a*/
          SpellPurchaseMenu_Update(v6); /*0x5d9821*/
          *(_DWORD *)(v6 + 0x54) = 0; /*0x5d9828*/
          *(_DWORD *)(v6 + 0x58) = 0; /*0x5d982b*/
          sub_57DE50(0xF); /*0x5d982e*/
          unk11C = reference->unk11C; /*0x5d9839*/
          if ( unk11C > 0 ) /*0x5d9844*/
          {
            v10 = (float)(unk11C / 0x64); /*0x5d9869*/
            ((void (__stdcall *)(int, _DWORD, _DWORD))reference->vtbl->super.ModExperience)(0x1D, 0, LODWORD(v10));// Spell purchase: Mercantile (0x1D), useValue0, scale = trunc(PlayerCharacter+0x11C / 100). /*0x5d986f*/
          }
          *(_BYTE *)(v6 + 0x5C) = 1; /*0x5d9873*/
        }
        else
        {
          sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5d979f*/
          Topic = TESTopic::GetTopic(DialogueType_Service, 2); /*0x5d97a8*/
          (*(void (__thiscall **)(_DWORD, TESTopic *, PlayerCharacter *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v6 + 0x50) /*0x5d97c6*/
                                                                                                + 0xDC))(
            *(_DWORD *)(v6 + 0x50),
            Topic,
            reference,
            0,
            0,
            0);
          GameUI_QueueMessage(MEMORY[0xB38DB8].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5d97de*/
        }
      }
      else
      {
        *(_DWORD *)(v6 + 0x54) = 0; /*0x5d987a*/
        *(_DWORD *)(v6 + 0x58) = 0; /*0x5d987d*/
      }
    }
  }
}
