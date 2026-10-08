void *__thiscall SummonCreatureEffect_Save(_DWORD *this, unsigned int source)
{
  int v3; // eax
  void *result; // eax

  AssociatedItemEffect_Save(source); /*0x6a5468*/
  v3 = *(this + 0xF); /*0x6a546d*/
  source = 0; /*0x6a5472*/
  if ( v3 ) /*0x6a547a*/
    source = *(_DWORD *)(v3 + 0xC); /*0x6a547f*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x6a5490*/
  result = SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x10, 1u); /*0x6a54a1*/
  if ( !*(this + 0xF) ) /*0x6a54a6*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x11, 4u); /*0x6a54b8*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x12, 0xCu); /*0x6a54c9*/
    return SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x15, 0xCu); /*0x6a54da*/
  }
  return result; /*0x6a54df*/
}
