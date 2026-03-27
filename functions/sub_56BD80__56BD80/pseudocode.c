char __thiscall sub_56BD80(_DWORD *this)
{
  int v2; // esi
  size_t v4; // [esp-4h] [ebp-Ch]
  size_t v5; // [esp-4h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-4h] BYREF

  LODWORD(v4) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 2, v4);
  LODWORD(v5) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 4, v5);
  v2 = *(this + 3);
  v6 = 0;
  if ( v2 )
    v6 = *(_DWORD *)(v2 + 0xC);
  return SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v6, 4u);
}
