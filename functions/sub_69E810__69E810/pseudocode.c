int __thiscall sub_69E810(const char **this)
{
  const char *v2; // eax
  char v3; // dl
  unsigned int v4; // eax
  TESSaveLoad *v5; // ecx
  size_t v7; // [esp-4h] [ebp-10h]
  size_t v8; // [esp-4h] [ebp-10h]
  unsigned __int8 Src; // [esp+7h] [ebp-5h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = *((_DWORD *)*(this + 7) + 3);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v10, 4u);
  v2 = *(this + 0xB);
  v3 = (_BYTE)v2 + 1;
  v4 = (unsigned int)&v2[strlen(v2) + 1];
  v5 = SaveLoad_CurrentSavegame;
  Src = v4 - v3;
  LODWORD(v7) = 1;
  SaveLoad_SaveData((int)v5, &Src, v7);
  LODWORD(v8) = Src;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)*(this + 0xB), v8);
  return (*((int (__thiscall **)(const char **, _DWORD, _DWORD))*this + 0x1E))(this, 0, *(this + 7));
}
