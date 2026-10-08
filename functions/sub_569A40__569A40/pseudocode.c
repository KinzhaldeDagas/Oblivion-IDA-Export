signed __int8 __thiscall sub_569A40(char *Dst)
{
  signed __int8 result; // al
  int v3; // [esp+0h] [ebp-Ch]
  unsigned int Dsta; // [esp+8h] [ebp-4h] BYREF

  SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 1u); /*0x569a4d*/
  SaveLoad_LoadData(g_TESSaveLoadGame, Dst + 4, 4u); /*0x569a5e*/
  result = *Dst; /*0x569a63*/
  if ( *Dst >= 0 ) /*0x569a67*/
  {
    if ( result <= 4 ) /*0x569a6b*/
    {
      result = SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dsta, 4u); /*0x569a92*/
      *((_DWORD *)Dst + 2) = v3; /*0x569a9b*/
    }
    else if ( result == 5 ) /*0x569a6f*/
    {
      return (unsigned __int8)SaveLoad_LoadData(g_TESSaveLoadGame, Dst + 8, 4u); /*0x569a7d*/
    }
  }
  return result; /*0x569a82*/
}
