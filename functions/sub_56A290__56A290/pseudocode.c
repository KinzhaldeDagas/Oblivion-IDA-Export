void __thiscall sub_56A290(char *Src)
{
  int v2; // esi
  unsigned int source; // [esp+4h] [ebp-4h] BYREF

  SaveLoad_SaveData(g_TESSaveLoadGame, Src, 1u); /*0x56a29d*/
  SaveLoad_SaveData(g_TESSaveLoadGame, Src + 8, 4u); /*0x56a2ae*/
  if ( (unsigned __int8)*Src <= 1u ) /*0x56a2b7*/
  {
    v2 = *((_DWORD *)Src + 1); /*0x56a2d1*/
    source = 0; /*0x56a2d6*/
    if ( v2 ) /*0x56a2de*/
      source = *(_DWORD *)(v2 + 0xC); /*0x56a2e3*/
    SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x56a2f4*/
  }
  else if ( *Src == 2 ) /*0x56a2bb*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, Src + 4, 4u); /*0x56a2c9*/
  }
}
