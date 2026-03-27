void *__thiscall sub_6B8280(BSStringT *this)
{
  size_t v3; // [esp-4h] [ebp-118h]
  size_t v4; // [esp-4h] [ebp-118h]
  size_t v5; // [esp-4h] [ebp-118h]
  size_t v6; // [esp-4h] [ebp-118h]
  unsigned __int8 v7; // [esp+Ah] [ebp-10Ah] BYREF
  unsigned __int8 Dst; // [esp+Bh] [ebp-109h] BYREF
  char v9[260]; // [esp+Ch] [ebp-108h] BYREF

  LODWORD(v3) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v3);
  if ( Dst )
  {
    _memset(v9, 0, sizeof(v9));
    LODWORD(v4) = Dst;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v9, v4);
    BSStringT_Set(this, v9, 0);
  }
  else
  {
    BSStringT_Set(this, EmptyString, 0);
  }
  LODWORD(v4) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v7, v4);
  if ( v7 )
  {
    _memset(v9, 0, sizeof(v9));
    LODWORD(v5) = v7;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v9, v5);
    BSStringT_Set(this + 2, v9, 0);
  }
  else
  {
    BSStringT_Set(this + 2, EmptyString, 0);
  }
  LODWORD(v5) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 1, v5);
  LODWORD(v6) = 4;
  return SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0xC, v6);
}
