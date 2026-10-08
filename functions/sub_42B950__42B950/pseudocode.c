void __thiscall sub_42B950(int *this)
{
  int v2; // esi
  unsigned int source; // [esp+4h] [ebp-4h] BYREF

  SaveLoad_SaveData(g_TESSaveLoadGame, this + 1, 0xCu); /*0x42b960*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 4, 0xCu); /*0x42b971*/
  v2 = *this; /*0x42b976*/
  source = 0; /*0x42b97a*/
  if ( v2 ) /*0x42b982*/
    source = *(_DWORD *)(v2 + 0xC); /*0x42b987*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x42b998*/
}
