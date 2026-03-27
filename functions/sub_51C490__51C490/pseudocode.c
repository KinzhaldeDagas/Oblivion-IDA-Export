void *__thiscall sub_51C490(int this)
{
  void *result; // eax
  size_t v3; // [esp-4h] [ebp-118h]
  size_t v4; // [esp-4h] [ebp-118h]
  size_t v5; // [esp-4h] [ebp-118h]
  size_t v6; // [esp-4h] [ebp-118h]
  unsigned __int8 Dst; // [esp+Bh] [ebp-109h] BYREF
  char a2[260]; // [esp+Ch] [ebp-108h] BYREF

  LODWORD(v3) = 0x34;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x38), v3);
  LODWORD(v4) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v4);
  if ( Dst )
  {
    _memset(a2, 0, sizeof(a2));
    LODWORD(v5) = Dst;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, a2, v5);
    BSStringT_Set((BSStringT *)(this + 0x1C), a2, 0);
  }
  LODWORD(v5) = 1;
  result = SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v5);
  if ( Dst )
  {
    _memset(a2, 0, sizeof(a2));
    LODWORD(v6) = Dst;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, a2, v6);
    return (void *)BSStringT_Set((BSStringT *)(this + 0x30), a2, 0);
  }
  return result;
}
