int __thiscall sub_42B500(_DWORD *this)
{
  size_t v3; // [esp+0h] [ebp-Ch]
  size_t v4; // [esp+0h] [ebp-Ch]
  size_t v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-Ch]
  _BYTE Dst[4]; // [esp+8h] [ebp-4h] BYREF

  LODWORD(v3) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 1, v3);
  LODWORD(v4) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 4, v4);
  LODWORD(v5) = 4;
  SaveLoad_LoadFormID(Dst, v5);
  *this = v6;
  return v6;
}
