unsigned __int8 __thiscall sub_569CF0(char *Src)
{
  unsigned __int8 result; // al
  int v3; // esi
  size_t v4; // [esp-4h] [ebp-Ch]
  size_t v5; // [esp-4h] [ebp-Ch]
  size_t v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-4h] BYREF

  LODWORD(v4) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src, v4);
  LODWORD(v5) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src + 4, v5);
  result = *Src;
  if ( *Src >= 0 )
  {
    if ( (char)result <= 4 )
    {
      v3 = *((_DWORD *)Src + 2);
      v7 = 0;
      if ( v3 )
        v7 = *(_DWORD *)(v3 + 0xC);
      return SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v7, 4u);
    }
    else if ( result == 5 )
    {
      LODWORD(v6) = 4;
      return (unsigned __int8)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src + 8, v6);
    }
  }
  return result;
}
