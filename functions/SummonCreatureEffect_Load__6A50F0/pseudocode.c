void *__thiscall SummonCreatureEffect_Load(_DWORD *this, int Dst)
{
  bool LoadFormID; // bl
  void *result; // eax
  int v5; // [esp+4h] [ebp-4h]

  AssociatedItemEffect_Load(Dst); /*0x6a50f9*/
  LoadFormID = SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&Dst, 4u); /*0x6a5114*/
  *(this + 0xF) = v5; /*0x6a511b*/
  result = SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x10, 1u); /*0x6a5125*/
  if ( v5 || LoadFormID ) /*0x6a5133*/
  {
    *((_BYTE *)this + 0x60) = 1; /*0x6a5170*/
  }
  else
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x11, 4u); /*0x6a5141*/
    SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x12, 0xCu); /*0x6a5152*/
    result = SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x15, 0xCu); /*0x6a5163*/
    *((_BYTE *)this + 0x60) = 0; /*0x6a5168*/
  }
  return result; /*0x6a516b*/
}
