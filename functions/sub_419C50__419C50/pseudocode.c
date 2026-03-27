char __thiscall sub_419C50(char *this)
{
  int CurrentMagicItem; // eax
  char *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // esi

  if ( dword_B33518 < iMagicMaxSummonedCreatureTypes )
    return sub_419C62();
  if ( dword_B33518 == iMagicMaxSummonedCreatureTypes )
  {
    if ( Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef) )
    {
      CurrentMagicItem = Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef);
      if ( EffectItemList_HasEffectWithFlags((_DWORD *)(CurrentMagicItem + 0xC), 0x40000) )
        return sub_419C62();
    }
  }
  if ( this )
  {
    v4 = this + 0xC;
    if ( v4 )
    {
      while ( *((_DWORD *)v4 + 2) || *((_DWORD *)v4 + 1) )
      {
        v5 = *(_DWORD **)(*((_DWORD *)v4 + 1) + 0x1C);
        v6 = v5[0x16];
        if ( (v6 & 0x70000) != 0
          && (v6 & 0x40000) != 0
          && !EffectSetting_IsUnkA4Positive(*(_DWORD **)(*((_DWORD *)v4 + 1) + 0x1C))
          && !EffectSetting_IsUnkA4Negative(v5) )
        {
          return 0;
        }
        v7 = *((_DWORD *)v4 + 2);
        if ( v7 )
        {
          v4 = (char *)(v7 - 4);
          if ( v4 )
            continue;
        }
        return 1;
      }
    }
  }
  return 1;
}
