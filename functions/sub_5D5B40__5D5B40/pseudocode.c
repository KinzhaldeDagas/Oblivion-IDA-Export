// Native SkillsMenu detail refresh. Resolve the selected native skill AV, then populate the menu from its Oblivion TESSkill description and icon.
void __thiscall SkillsMenu_UpdateDetails(_DWORD *this, void *a2)
{
  void *v2; // eax
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  UInt8 GroupOffsetFromAV; // al
  TESSkill_RecordView *TESSkillByCode; // eax
  TESSkill_RecordView *v9; // edi
  _DWORD *v10; // ebx
  char *v11; // eax
  char *v12; // edi
  unsigned int v13; // edi
  int v14; // eax
  double Float; // st7
  _DWORD *v16; // ebx
  char *Description; // eax
  _DWORD *v18; // esi
  char *Icon; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // ebx
  char *v23; // eax

  v2 = a2; /*0x5d5b40*/
  if ( a2 == (void *)0xFFFFFFFF ) /*0x5d5b4c*/
    v2 = (void *)*(this + 0x10); /*0x5d5b4e*/
  v4 = *(this + 0xF); /*0x5d5b51*/
  if ( v4 ) /*0x5d5b56*/
  {
    switch ( v4 ) /*0x5d5bd3*/
    {
      case 1: /*0x5d5bd3*/
        v13 = (unsigned int)v2; /*0x5d5bd8*/
        if ( v2 == (void *)0xFFFFFFFF ) /*0x5d5bda*/
        {
          v14 = *(this + 0xA); /*0x5d5bdc*/
          if ( v14 ) /*0x5d5be1*/
          {
            if ( *(_DWORD *)(*(_DWORD *)(v14 + 0x34) + 8) ) /*0x5d5be6*/
            {
              Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(*(_DWORD *)(v14 + 0x38) + 8), 0xFB0); /*0x5d5bfa*/
              v13 = Double_To_SInt32(Float); /*0x5d5c04*/
            }
          }
        }
        v16 = (_DWORD *)*(this + 1); /*0x5d5c06*/
        Description = (char *)ActorValue_GetDescription(v13); /*0x5d5c0a*/
        Tile_SetString(v16, (_DWORD *)0xFAF, Description); /*0x5d5c1a*/
        v18 = (_DWORD *)*(this + 1); /*0x5d5c1f*/
        Icon = (char *)ActorValue_GetIcon(v13); /*0x5d5c23*/
        Tile_SetString(v18, (_DWORD *)0xFB0, Icon); /*0x5d5c33*/
        break;
      case 2: /*0x5d5bd3*/
        if ( !v2 || v2 == (void *)0xFFFFFFFF ) /*0x5d5c4e*/
        {
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)stru_B385F0.value); /*0x5d5cc7*/
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, (char *)stru_B38608.value); /*0x5d5cdb*/
        }
        else if ( v2 == (void *)1 ) /*0x5d5c53*/
        {
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)stru_B385F8.value); /*0x5d5c64*/
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, (char *)stru_B38610.value); /*0x5d5c77*/
        }
        else if ( v2 == (void *)2 ) /*0x5d5c85*/
        {
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)stru_B38600.value); /*0x5d5c9a*/
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, (char *)stru_B38618.value); /*0x5d5cae*/
        }
        break;
      case 3: /*0x5d5bd3*/
        v20 = sub_447350(v2); /*0x5d5cf2*/
        v21 = v20; /*0x5d5cf7*/
        if ( v20 ) /*0x5d5cfb*/
        {
          v22 = (_DWORD *)*(this + 1); /*0x5d5d03*/
          v23 = (char *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(v20[0xC] + 0x10))(v20 + 0xC, 0, 0x43534544); /*0x5d5d10*/
          Tile_SetString(v22, (_DWORD *)0xFAF, v23); /*0x5d5d1a*/
          v12 = (char *)v21[0xA]; /*0x5d5d1f*/
          goto LABEL_27; /*0x5d5d1f*/
        }
        break;
    }
  }
  else
  {
    if ( v2 == (void *)0xFFFFFFFF ) /*0x5d5b5b*/
    {
      v5 = *(this + 0xA); /*0x5d5b5d*/
      if ( v5 ) /*0x5d5b62*/
      {
        if ( *(_DWORD *)(*(_DWORD *)(v5 + 0x34) + 8) ) /*0x5d5b67*/
        {
          v6 = Tile_GetFloat((_DWORD *)*(_DWORD *)(*(_DWORD *)(v5 + 0x38) + 8), 0xFB0); /*0x5d5b7b*/
          LOBYTE(v2) = Double_To_SInt32(v6); /*0x5d5b80*/
        }
      }
    }
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, (char)v2); /*0x5d5b88*/
    TESSkillByCode = TESDataHandler_GetTESSkillByCode(g_TESDataHandler, GroupOffsetFromAV); /*0x5d5b97*/
    v9 = TESSkillByCode; /*0x5d5b9c*/
    if ( TESSkillByCode ) /*0x5d5ba0*/
    {
      v10 = (_DWORD *)*(this + 1); /*0x5d5bac*/
      v11 = (char *)(*(int (__thiscall **)(unsigned __int8 *, _DWORD, int))(*(_DWORD *)&TESSkillByCode->formComponentsAndIcon[0x18] /*0x5d5bb9*/
                                                                          + 0x10))(
                      &TESSkillByCode->formComponentsAndIcon[0x18],
                      0,
                      0x43534544);
      Tile_SetString(v10, (_DWORD *)0xFAF, v11); /*0x5d5bc3*/
      v12 = *(char **)&v9->formComponentsAndIcon[0x24]; /*0x5d5bc8*/
LABEL_27:
      if ( !v12 ) /*0x5d5d24*/
        v12 = EmptyString; /*0x5d5d26*/
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v12); /*0x5d5d34*/
    }
  }
}
