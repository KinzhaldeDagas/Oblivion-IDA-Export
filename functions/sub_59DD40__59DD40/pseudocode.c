char __usercall sub_59DD40@<al>(int a1@<esi>, double a2@<st2>, double a3@<st1>)
{
  Tile *OpenMenuTile; // ebp
  UnkBohBoh *ParentMenu; // eax
  UnkBohBoh *v5; // edi
  char unk08; // al
  TESObjectREFR *unk00; // esi
  double v8; // st7
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v10; // ecx
  double v11; // st7
  SitSleep (__thiscall *GetSleepState)(TESObjectREFR *); // eax
  TESObjectREFRVtbl *v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v18; // [esp+2Ch] [ebp-14h]
  char v19; // [esp+3Fh] [ebp-1h]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F1);
  ParentMenu = sub_6B8660();
  if ( OpenMenuTile )
  {
    if ( ParentMenu )
    {
      ParentMenu = (UnkBohBoh *)Tile_GetParentMenu(OpenMenuTile);
      v5 = ParentMenu;
      if ( ParentMenu )
      {
        unk08 = ParentMenu[8].unk08;
        v18 = a1;
        *(float *)&v5[6].unk08 = 0.0;
        unk00 = (TESObjectREFR *)v5[6].unk00;
        v5[6].unk10 = (TESObjectREFR *)0xFFFFFFFF;
        v19 = unk08;
        if ( unk00 )
        {
          if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD, int))unk00->vtbl->Unk_4C)(unk00, 0, v18) )
            *(_BYTE *)(((int (__thiscall *)(TESObjectREFR *, _DWORD))unk00->vtbl->Unk_4C)(unk00, 0) + 0x112) = 0;
          if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD))unk00->vtbl->Unk_4D)(unk00, 0) )
            *(_BYTE *)(((int (__thiscall *)(TESObjectREFR *, _DWORD))unk00->vtbl->Unk_4D)(unk00, 0) + 0x112) = 0;
        }
        v8 = fConstant_2;
        Tile_SetFloat(OpenMenuTile, (_DWORD *)0x1772, fConstant_2);
        sub_584740(v5, a2, a3);
        if ( dword_B3B294 )
        {
          if ( !v19 )
          {
            sub_531470((TESForm *)dword_B3B294, a3, v8, unk00);
            sub_5308D0(dword_B3B294);
            dword_B3B294 = 0;
          }
        }
        sub_5EF930((Actor *)unk00);
        ((void (__thiscall *)(TESObjectREFR *, _DWORD, int))unk00->vtbl[1].super.Unk_23)(unk00, 0, v18);
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_8D)(
          TESDataHandler_g_PlayerRef,
          0);
        unk00->vtbl[1].GetAnimData(unk00);
        vtbl = unk00[1].vtbl;
        if ( vtbl )
        {
          (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))vtbl->super.super.InitializeComponent + 0x78))(vtbl, 0);
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))unk00->vtbl[1].GetSleepState)(unk00, 1) )
            (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))unk00[1].vtbl->super.super.InitializeComponent
             + 6))(
              unk00[1].vtbl,
              unk00,
              1);
        }
        v10 = unk00[1].vtbl;
        if ( HIBYTE(retaddr) )
          (*((void (__thiscall **)(TESObjectREFRVtbl *))v10->super.super.InitializeComponent + 0x12A))(v10);
        else
          LOBYTE(v10->HasFatigue) = 1;
        v11 = flt_B36AE8;
        (*((void (__cdecl **)(float))unk00[1].vtbl->super.super.InitializeComponent + 0xD9))(flt_B36AE8);
        sub_5E05F0((Actor *)unk00, 0x30);
        sub_65DA10(TESDataHandler_g_PlayerRef);
        if ( dword_B3B294 )
        {
          if ( v19 )
          {
            sub_531470((TESForm *)dword_B3B294, a3, v11, unk00);
            sub_5308D0(dword_B3B294);
            GetSleepState = unk00->vtbl[1].GetSleepState;
            dword_B3B294 = 0;
            if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))GetSleepState)(unk00, 1) )
            {
              v13 = unk00[1].vtbl;
              if ( v13 )
                (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v13->super.super.InitializeComponent
                 + 6))(
                  v13,
                  unk00,
                  1);
            }
            v14 = ((int (__thiscall *)(TESObjectREFR *))unk00->vtbl[2].super.Unk_0C)(unk00);
            if ( v14 )
            {
              v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x164))(v14);
              v16 = (int)unk00->vtbl->GetAnimData(unk00);
              if ( v15 )
              {
                if ( v16 )
                {
                  v11 = *(float *)(v16 + 0x94);
                  *(float *)(v15 + 0x94) = *(float *)(v16 + 0x94);
                }
              }
            }
          }
        }
        LOBYTE(ParentMenu) = sub_578DF0(a2, (char)OpenMenuTile, v11, a3);
        byte_B2D91C = 1;
      }
    }
  }
  return (char)ParentMenu;
}
