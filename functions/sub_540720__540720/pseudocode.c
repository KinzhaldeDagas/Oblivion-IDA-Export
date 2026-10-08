void *__thiscall sub_540720(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  int v6; // eax
  void *result; // eax
  unsigned int source; // [esp+8h] [ebp-10h] BYREF
  unsigned int v9; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v10; // [esp+10h] [ebp-8h] BYREF
  unsigned int v11; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 4); /*0x540726*/
  source = 0; /*0x54072e*/
  if ( v2 ) /*0x540732*/
    source = *(_DWORD *)(v2 + 0xC); /*0x540737*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x540748*/
  v3 = *(this + 5); /*0x54074d*/
  v9 = 0; /*0x540752*/
  if ( v3 ) /*0x540756*/
    v9 = *(_DWORD *)(v3 + 0xC); /*0x54075b*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v9, 4u); /*0x54076c*/
  v4 = *(this + 6); /*0x540771*/
  v10 = 0; /*0x540776*/
  if ( v4 ) /*0x54077a*/
    v10 = *(_DWORD *)(v4 + 0xC); /*0x54077f*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v10, 4u); /*0x540790*/
  v5 = g_TESSaveLoadGame; /*0x540795*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Du ) /*0x54079f*/
  {
    v6 = *(this + 7); /*0x5407a1*/
    v11 = 0; /*0x5407a6*/
    if ( v6 ) /*0x5407aa*/
      v11 = *(_DWORD *)(v6 + 0xC); /*0x5407af*/
    SaveLoad_SaveFormID(v5, &v11, 4u); /*0x5407ba*/
    v5 = g_TESSaveLoadGame; /*0x5407bf*/
  }
  SaveLoad_SaveData(v5, this + 0x34, 4u); /*0x5407ce*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x35, 4u); /*0x5407e2*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x36, 4u); /*0x5407f6*/
  result = SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x37, 4u); /*0x54080a*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x69u ) /*0x540819*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x3F, 4u); /*0x540824*/
    return SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x3D, 4u); /*0x540838*/
  }
  return result; /*0x54083d*/
}
