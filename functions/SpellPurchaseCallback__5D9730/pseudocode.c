void __usercall SpellPurchaseCallback(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // eax
  float *ContainerChanges; // eax
  signed int unk11C; // edx
  float v11; // [esp+10h] [ebp-14h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40D);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v6 = OblivionDynamicCast(
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &SpellPurchaseMenu `RTTI Type Descriptor',
         0);
  v7 = (int)v6;
  if ( v6 )
  {
    if ( v6[0x15] )
    {
      if ( sub_578D70() == 1 )
      {
        if ( *(int *)(v7 + 0x58) < 1 || sub_5E10F0(*(void **)(v7 + 0x50), *(float *)&TESDataHandler_g_PlayerRef) )
        {
          ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B7)(
            TESDataHandler_g_PlayerRef,
            *(_DWORD *)(v7 + 0x54));
          ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
          sub_491700(
            ContainerChanges,
            a1,
            a2,
            a3,
            (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            *(_DWORD *)(v7 + 0x58),
            0);
          SpellPurchaseMenu_Update(v7, a1, a2, a3);
          *(_DWORD *)(v7 + 0x54) = 0;
          *(_DWORD *)(v7 + 0x58) = 0;
          sub_57DE50(0xF);
          unk11C = TESDataHandler_g_PlayerRef->unk11C;
          if ( unk11C > 0 )
          {
            v11 = (float)(unk11C / 0x64);
            ((void (__stdcall *)(int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.ModExperience)(
              0x1D,
              0,
              LODWORD(v11));
          }
          *(_BYTE *)(v7 + 0x5C) = 1;
        }
        else
        {
          sub_6AC3D0((_DWORD *)OSGlobals->sound);
          v8 = TESTopic::GEtTopic(5, 2);
          (*(void (__thiscall **)(_DWORD, int, PlayerCharacter *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v7 + 0x50)
                                                                                         + 0xDC))(
            *(_DWORD *)(v7 + 0x50),
            v8,
            TESDataHandler_g_PlayerRef,
            0,
            0,
            0);
          GameUI_QueueMessage((const char *)sOfferRefused, 0, 1u, flt_A30634);
        }
      }
      else
      {
        *(_DWORD *)(v7 + 0x54) = 0;
        *(_DWORD *)(v7 + 0x58) = 0;
      }
    }
  }
}
