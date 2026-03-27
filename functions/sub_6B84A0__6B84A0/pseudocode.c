void *__thiscall sub_6B84A0(const char **this)
{
  const char *v2; // edx
  const char *v3; // eax
  TESSaveLoad *v4; // ecx
  const char *v5; // eax
  char v6; // dl
  unsigned int v7; // eax
  TESSaveLoad *v8; // ecx
  size_t v10; // [esp-4h] [ebp-Ch]
  size_t v11; // [esp-4h] [ebp-Ch]
  size_t v12; // [esp-4h] [ebp-Ch]
  size_t v13; // [esp-4h] [ebp-Ch]
  unsigned __int8 Src; // [esp+6h] [ebp-2h] BYREF
  unsigned __int8 v15; // [esp+7h] [ebp-1h] BYREF

  v2 = *this + 1;
  v3 = &(*this)[strlen(*this) + 1];
  v4 = SaveLoad_CurrentSavegame;
  Src = (_BYTE)v3 - (_BYTE)v2;
  LODWORD(v10) = 1;
  SaveLoad_SaveData((int)v4, &Src, v10);
  if ( Src )
  {
    LODWORD(v11) = Src;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)*this, v11);
  }
  v5 = *(this + 4);
  v6 = (_BYTE)v5 + 1;
  v7 = (unsigned int)&v5[strlen(v5) + 1];
  v8 = SaveLoad_CurrentSavegame;
  v15 = v7 - v6;
  LODWORD(v11) = 1;
  SaveLoad_SaveData((int)v8, &v15, v11);
  if ( v15 )
  {
    LODWORD(v12) = v15;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)*(this + 4), v12);
  }
  LODWORD(v12) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 2, v12);
  LODWORD(v13) = 4;
  return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 3, v13);
}
