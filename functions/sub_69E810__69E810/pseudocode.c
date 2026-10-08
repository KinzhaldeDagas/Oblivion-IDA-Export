int __thiscall sub_69E810(const char **this)
{
  const char *v2; // eax
  char v3; // dl
  unsigned int v4; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned __int8 Src; // [esp+7h] [ebp-5h] BYREF
  unsigned int source; // [esp+8h] [ebp-4h] BYREF

  source = *((_DWORD *)*(this + 7) + 3); /*0x69e822*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x69e82d*/
  v2 = *(this + 0xB); /*0x69e832*/
  v3 = (_BYTE)v2 + 1; /*0x69e835*/
  v4 = (unsigned int)&v2[strlen(v2) + 1]; /*0x69e83f*/
  v5 = g_TESSaveLoadGame; /*0x69e841*/
  Src = v4 - v3; /*0x69e849*/
  SaveLoad_SaveData(v5, &Src, 1u); /*0x69e854*/
  SaveLoad_SaveData(g_TESSaveLoadGame, *(this + 0xB), Src); /*0x69e869*/
  return (*((int (__thiscall **)(const char **, _DWORD, _DWORD))*this + 0x1E))(this, 0, *(this + 7)); /*0x69e87d*/
}
