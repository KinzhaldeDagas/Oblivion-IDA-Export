void sub_57C000()
{
  signed int v0; // [esp+0h] [ebp-14h] BYREF
  int v1; // [esp+4h] [ebp-10h] BYREF
  int v2; // [esp+8h] [ebp-Ch] BYREF
  int destination; // [esp+Ch] [ebp-8h] BYREF
  int Dst; // [esp+10h] [ebp-4h] BYREF

  SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 1u); /*0x57c010*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 1u); /*0x57c022*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v2, 1u); /*0x57c034*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v1, 1u); /*0x57c046*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v0, 4u); /*0x57c058*/
  sub_57B990(Dst, destination, v2, v1, v0); /*0x57c075*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Du ) /*0x57c087*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &byte_B14500, 1u); /*0x57c090*/
}
