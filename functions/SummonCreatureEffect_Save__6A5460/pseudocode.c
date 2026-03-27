void *__thiscall SummonCreatureEffect_Save(_DWORD *this, int a2)
{
  int v3; // eax
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]
  size_t v8; // [esp-4h] [ebp-8h]

  AssociatedItemEffect_Save(a2);
  v3 = *(this + 0xF);
  a2 = 0;
  if ( v3 )
    a2 = *(_DWORD *)(v3 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&a2, 4u);
  LODWORD(v5) = 1;
  result = SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x10, v5);
  if ( !*(this + 0xF) )
  {
    LODWORD(v6) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x11, v6);
    LODWORD(v7) = 0xC;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x12, v7);
    LODWORD(v8) = 0xC;
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x15, v8);
  }
  return result;
}
