int __thiscall ActiveEffect_Base_SaveEffect(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  size_t v13; // [esp-4h] [ebp-20h]
  size_t v14; // [esp-4h] [ebp-20h]
  size_t v15; // [esp-4h] [ebp-20h]
  size_t v16; // [esp-4h] [ebp-20h]
  size_t v17; // [esp-4h] [ebp-20h]
  size_t v18; // [esp-4h] [ebp-20h]

  LODWORD(v13) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 4), v13);
  LODWORD(v14) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x10), v14);
  LODWORD(v15) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x11), v15);
  LODWORD(v16) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x13), v16);
  LODWORD(v17) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x18), v17);
  LODWORD(v18) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x1C), v18);
  return ActiveEffect_Base_SaveEffect_::SaveCaster(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
