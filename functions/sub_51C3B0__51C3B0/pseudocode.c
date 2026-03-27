void *__thiscall sub_51C3B0(const char **this)
{
  const char *v2; // eax
  char v3; // dl
  unsigned int v4; // eax
  TESSaveLoad *v5; // ecx
  CHAR *v6; // eax
  const char *v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  TESSaveLoad *v10; // ecx
  void *result; // eax
  CHAR *v12; // eax
  size_t v13; // [esp-4h] [ebp-10h]
  size_t v14; // [esp-4h] [ebp-10h]
  size_t v15; // [esp-4h] [ebp-10h]
  size_t v16; // [esp-4h] [ebp-10h]
  _BYTE Src[5]; // [esp+7h] [ebp-5h] BYREF

  LODWORD(v13) = 0x34;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xE, v13);
  v2 = *(this + 7);
  Src[0] = 0;
  if ( !v2 )
    v2 = EmptyString;
  v3 = (_BYTE)v2 + 1;
  v4 = (unsigned int)&v2[strlen(v2) + 1];
  v5 = SaveLoad_CurrentSavegame;
  LODWORD(v14) = 1;
  Src[0] = v4 - v3;
  SaveLoad_SaveData((int)v5, Src, v14);
  if ( Src[0] )
  {
    v6 = (CHAR *)*(this + 7);
    if ( !v6 )
      v6 = EmptyString;
    LODWORD(v15) = Src[0];
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v6, v15);
  }
  v7 = *(this + 0xC);
  Src[0] = 0;
  if ( !v7 )
    v7 = EmptyString;
  v8 = (_BYTE)v7 + 1;
  v9 = (unsigned int)&v7[strlen(v7) + 1];
  v10 = SaveLoad_CurrentSavegame;
  Src[0] = v9 - v8;
  LODWORD(v15) = 1;
  result = SaveLoad_SaveData((int)v10, Src, v15);
  if ( Src[0] )
  {
    v12 = (CHAR *)*(this + 0xC);
    if ( !v12 )
      v12 = EmptyString;
    LODWORD(v16) = Src[0];
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v12, v16);
  }
  return result;
}
