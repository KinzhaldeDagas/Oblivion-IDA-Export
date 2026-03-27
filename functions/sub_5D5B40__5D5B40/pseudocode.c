void __thiscall sub_5D5B40(_DWORD *this, void *a2)
{
  void *v2; // eax
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  char GroupOffsetFromAV; // al
  char *TESSkillByCode; // eax
  char *v9; // edi
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

  v2 = a2;
  if ( a2 == (void *)0xFFFFFFFF )
    v2 = (void *)*(this + 0x10);
  v4 = *(this + 0xF);
  if ( v4 )
  {
    switch ( v4 )
    {
      case 1:
        v13 = (unsigned int)v2;
        if ( v2 == (void *)0xFFFFFFFF )
        {
          v14 = *(this + 0xA);
          if ( v14 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(v14 + 0x34) + 8) )
            {
              Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(*(_DWORD *)(v14 + 0x38) + 8), 0xFB0);
              v13 = Double_To_SInt32(Float);
            }
          }
        }
        v16 = (_DWORD *)*(this + 1);
        Description = (char *)ActorValue_GetDescription(v13);
        Tile_SetString(v16, (_DWORD *)0xFAF, Description);
        v18 = (_DWORD *)*(this + 1);
        Icon = (char *)ActorValue_GetIcon(v13);
        Tile_SetString(v18, (_DWORD *)0xFB0, Icon);
        break;
      case 2:
        if ( !v2 || v2 == (void *)0xFFFFFFFF )
        {
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)dword_B385F0);
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, (char *)dword_B38608);
        }
        else if ( v2 == (void *)1 )
        {
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)dword_B385F8);
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, (char *)dword_B38610);
        }
        else if ( v2 == (void *)2 )
        {
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)dword_B38600);
          Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, (char *)dword_B38618);
        }
        break;
      case 3:
        v20 = sub_447350(v2);
        v21 = v20;
        if ( v20 )
        {
          v22 = (_DWORD *)*(this + 1);
          v23 = (char *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(v20[0xC] + 0x10))(v20 + 0xC, 0, 0x43534544);
          Tile_SetString(v22, (_DWORD *)0xFAF, v23);
          v12 = (char *)v21[0xA];
          goto LABEL_27;
        }
        break;
    }
  }
  else
  {
    if ( v2 == (void *)0xFFFFFFFF )
    {
      v5 = *(this + 0xA);
      if ( v5 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v5 + 0x34) + 8) )
        {
          v6 = Tile_GetFloat((_DWORD *)*(_DWORD *)(*(_DWORD *)(v5 + 0x38) + 8), 0xFB0);
          LOBYTE(v2) = Double_To_SInt32(v6);
        }
      }
    }
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, (char)v2);
    TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
    v9 = TESSkillByCode;
    if ( TESSkillByCode )
    {
      v10 = (_DWORD *)*(this + 1);
      v11 = (char *)(*(int (__thiscall **)(char *, _DWORD, int))(*((_DWORD *)TESSkillByCode + 6) + 0x10))(
                      TESSkillByCode + 0x18,
                      0,
                      0x43534544);
      Tile_SetString(v10, (_DWORD *)0xFAF, v11);
      v12 = *((char **)v9 + 9);
LABEL_27:
      if ( !v12 )
        v12 = EmptyString;
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v12);
    }
  }
}
