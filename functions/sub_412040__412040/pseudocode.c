void *__thiscall sub_412040(_DWORD *this, int Src)
{
  int i; // eax
  void *result; // eax

  SaveLoad_SaveData(g_TESSaveLoadGame, this + 1, 0x20u); /*0x41204f*/
  if ( !(_BYTE)Src ) /*0x412059*/
  {
    Src = 1; /*0x41205b*/
    for ( i = *(this + 0xA); i; i = *(_DWORD *)(i + 0x28) ) /*0x412068*/
      ++Src; /*0x412070*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 2u); /*0x412089*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 9, 1u); /*0x41209a*/
  result = SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x25, 1u); /*0x4120ab*/
  if ( *(this + 0xA) ) /*0x4120b0*/
    return (*(void *(__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0xA) + 0xC))(*(this + 0xA), 1); /*0x4120c7*/
  return result; /*0x4120c9*/
}
