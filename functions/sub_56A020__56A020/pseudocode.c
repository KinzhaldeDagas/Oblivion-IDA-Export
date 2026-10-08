unsigned __int8 __thiscall sub_56A020(unsigned __int8 *Dst)
{
  unsigned __int8 result; // al
  int v3; // [esp+0h] [ebp-Ch]
  unsigned int Dsta; // [esp+8h] [ebp-4h] BYREF

  SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 1u); /*0x56a02d*/
  SaveLoad_LoadData(g_TESSaveLoadGame, Dst + 8, 4u); /*0x56a03e*/
  result = *Dst; /*0x56a043*/
  if ( *Dst <= 1u ) /*0x56a047*/
  {
    result = SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dsta, 4u); /*0x56a06e*/
    *((_DWORD *)Dst + 1) = v3; /*0x56a077*/
  }
  else if ( result == 2 ) /*0x56a04b*/
  {
    return (unsigned __int8)SaveLoad_LoadData(g_TESSaveLoadGame, Dst + 4, 4u); /*0x56a059*/
  }
  return result; /*0x56a05e*/
}
