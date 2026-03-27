void *__thiscall sub_49F570(float *this, float Src)
{
  double v3; // st7
  TESSaveLoad *v4; // ecx
  TESSaveLoad *v5; // ecx
  size_t v7; // [esp-4h] [ebp-8h]
  size_t v8; // [esp-4h] [ebp-8h]
  size_t v9; // [esp-4h] [ebp-8h]
  size_t v10; // [esp-4h] [ebp-8h]
  size_t v11; // [esp-4h] [ebp-8h]

  v3 = *(this + 0x12);
  v4 = SaveLoad_CurrentSavegame;
  LODWORD(v7) = 4;
  Src = v3 + Src;
  SaveLoad_SaveData((int)v4, &Src, v7);
  LODWORD(v8) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x11, v8);
  v5 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x71u )
  {
    LODWORD(v9) = 4;
    SaveLoad_SaveData((int)v5, &Src, v9);
    v5 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v9) = 4;
  SaveLoad_SaveData((int)v5, this + 0xD, v9);
  LODWORD(v10) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xE, v10);
  LODWORD(v11) = 4;
  return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x15, v11);
}
