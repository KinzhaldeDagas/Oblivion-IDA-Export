int __thiscall sub_42B500(_DWORD *this)
{
  int v3; // [esp+0h] [ebp-Ch]
  unsigned int Dst; // [esp+8h] [ebp-4h] BYREF

  SaveLoad_LoadData(g_TESSaveLoadGame, this + 1, 0xCu); /*0x42b510*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 4, 0xCu); /*0x42b521*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dst, 4u); /*0x42b533*/
  *this = v3; /*0x42b53c*/
  return v3; /*0x42b53e*/
}
