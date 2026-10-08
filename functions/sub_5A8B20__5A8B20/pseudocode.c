void *__fastcall sub_5A8B20(int a1)
{
  int v1; // eax
  bool v2; // zf
  int Src; // [esp+0h] [ebp-4h] BYREF

  Src = a1; /*0x5a8b20*/
  v1 = dword_B3B0B4[0xA9]; /*0x5a8b23*/
  v2 = dword_B3B0B4[0xA9] == 0; /*0x5a8b28*/
  *(float *)&Src = 0.0; /*0x5a8b2a*/
  if ( !v2 && !bHealthBarShowing_Gameplay ) /*0x5a8b2f*/
    Src = *(int *)(v1 + 0x58); /*0x5a8b3b*/
  return SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 4u); /*0x5a8b51*/
}
