void __thiscall sub_569CF0(char *Src)
{
  char v2; // al
  int v3; // esi
  unsigned int source; // [esp+4h] [ebp-4h] BYREF

  SaveLoad_SaveData(g_TESSaveLoadGame, Src, 1u); /*0x569cfd*/
  SaveLoad_SaveData(g_TESSaveLoadGame, Src + 4, 4u); /*0x569d0e*/
  v2 = *Src; /*0x569d13*/
  if ( *Src >= 0 ) /*0x569d17*/
  {
    if ( v2 <= 4 ) /*0x569d1b*/
    {
      v3 = *((_DWORD *)Src + 2); /*0x569d35*/
      source = 0; /*0x569d3a*/
      if ( v3 ) /*0x569d42*/
        source = *(_DWORD *)(v3 + 0xC); /*0x569d47*/
      SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x569d58*/
    }
    else if ( v2 == 5 ) /*0x569d1f*/
    {
      SaveLoad_SaveData(g_TESSaveLoadGame, Src + 8, 4u); /*0x569d2d*/
    }
  }
}
