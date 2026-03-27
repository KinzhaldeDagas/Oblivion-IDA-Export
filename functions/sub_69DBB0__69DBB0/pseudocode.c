void *__thiscall sub_69DBB0(int this, int a2, int a3)
{
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v5) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x20), v5);
  LODWORD(v6) = 1;
  result = SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x24), v6);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x72u )
  {
    LODWORD(v7) = 4;
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 8), v7);
  }
  return result;
}
