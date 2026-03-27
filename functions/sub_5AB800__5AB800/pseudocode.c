double __usercall sub_5AB800@<st0>(
        double a1@<st2>,
        double st6_0@<st1>,
        double result@<st0>,
        char a4,
        int a5,
        int a6,
        char a7)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v9; // ebx
  EntryData *v10; // ecx
  _DWORD *v11; // eax
  _BYTE *v12; // esi
  int v13; // ebp
  bool v14; // zf
  int v15; // eax
  _DWORD *v16; // esi
  int ExtraCount; // edi
  _BYTE *v18; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v9 = ParentMenu;
    if ( ParentMenu )
    {
      v10 = *(EntryData **)(ParentMenu + 0x50);
      if ( v10 )
      {
        ContainerEntryExtraData_HasWorn(v10, 0);
        v11 = *(_DWORD **)(v9 + 0x50);
        v12 = (_BYTE *)v11[2];
        v13 = 0;
        v14 = *v11 == 0;
        v15 = CountDelta;
        v18 = v12;
        if ( !v14 && v15 == 1 )
        {
          v13 = ((int (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, char *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B2)(
                  TESDataHandler_g_PlayerRef,
                  *(_DWORD *)(*(_DWORD *)(v9 + 0x50) + 8),
                  ***(_DWORD ***)(v9 + 0x50),
                  1,
                  &a4,
                  0);
LABEL_19:
          if ( v12 )
          {
            if ( v12[4] == 0x22 && dword_B3B7D0 > 0 )
              sub_607F90(v12, CountDelta, TESDataHandler_g_PlayerRef, 1, 1);
          }
          if ( v13 )
          {
            if ( a7 )
              sub_66E090(TESDataHandler_g_PlayerRef, a1, st6_0, result, v13);
          }
          InventoryMenu_InitializeOrUpdate(a1, st6_0);
          return result;
        }
        v16 = **(_DWORD ***)(v9 + 0x50);
        if ( v16 && (v16[1] || *v16) )
        {
          if ( !v15 )
          {
LABEL_18:
            v12 = v18;
            goto LABEL_19;
          }
          do
          {
            if ( !v16 )
              break;
            if ( !*v16 )
              break;
            ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)*v16);
            if ( CountDelta < ExtraDataList_GetExtraCount((ExtraDataList *)*v16) )
              ExtraCount = CountDelta;
            ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, char *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B2)(
              TESDataHandler_g_PlayerRef,
              *(_DWORD *)(*(_DWORD *)(v9 + 0x50) + 8),
              *v16,
              ExtraCount,
              &a4,
              0);
            v16 = (_DWORD *)v16[1];
            v15 = CountDelta - ExtraCount;
            v14 = CountDelta == ExtraCount;
            CountDelta = v15;
          }
          while ( !v14 );
        }
        if ( v15 > 0 )
          ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, char *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B2)(
            TESDataHandler_g_PlayerRef,
            *(_DWORD *)(*(_DWORD *)(v9 + 0x50) + 8),
            0,
            v15,
            &a4,
            0);
        goto LABEL_18;
      }
    }
  }
  return result;
}
