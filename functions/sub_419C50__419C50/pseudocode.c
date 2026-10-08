char __thiscall sub_419C50(char *this)
{
  int CurrentMagicItem; // eax
  char v4; // al
  char *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // esi

  if ( unk_B33518 < (int)MEMORY[0xB33554].value ) /*0x419c60*/
    return sub_419C62(); /*0x419c60*/
  if ( (const char *)unk_B33518 == MEMORY[0xB33554].value ) /*0x419c66*/
  {
    if ( Player_GetCurrentMagicItem(reference) ) /*0x419c6e*/
    {
      CurrentMagicItem = Player_GetCurrentMagicItem(reference); /*0x419c82*/
      EffectItemList_HasEffectWithFlags((_DWORD *)(CurrentMagicItem + 0xC), 0x40000); /*0x419c8c*/
      if ( v4 ) /*0x419c93*/
        return sub_419C62(); /*0x419c61*/
    }
  }
  if ( this ) /*0x419c98*/
  {
    v5 = this + 0xC; /*0x419c9a*/
    if ( v5 ) /*0x419c9d*/
    {
      while ( *((_DWORD *)v5 + 2) || *((_DWORD *)v5 + 1) ) /*0x419caa*/
      {
        v6 = *(_DWORD **)(*((_DWORD *)v5 + 1) + 0x1C); /*0x419caf*/
        v7 = v6[0x16]; /*0x419cb2*/
        if ( (v7 & 0x70000) != 0 /*0x419cd7*/
          && (v7 & 0x40000) != 0
          && !EffectSetting_IsUnkA4Positive(*(_DWORD **)(*((_DWORD *)v5 + 1) + 0x1C))
          && !EffectSetting_IsUnkA4Negative(v6) )
        {
          return 0; /*0x419cee*/
        }
        v8 = *((_DWORD *)v5 + 2); /*0x419cd9*/
        if ( v8 ) /*0x419cde*/
        {
          v5 = (char *)(v8 - 4); /*0x419ce0*/
          if ( v5 ) /*0x419ce3*/
            continue; /*0x419ce3*/
        }
        return 1; /*0x419ce3*/
      }
    }
  }
  return 1; /*0x419ce8*/
}
