float *__fastcall sub_5A8B60(int a1)
{
  float *result; // eax
  float Dst; // [esp+0h] [ebp-4h] BYREF

  Dst = *(float *)&a1; /*0x5a8b60*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x5a8b6e*/
  result = (float *)dword_B3B0B4[0xA9]; /*0x5a8b73*/
  if ( dword_B3B0B4[0xA9] ) /*0x5a8b73*/
  {
    if ( !bHealthBarShowing_Gameplay ) /*0x5a8b7e*/
      result[0x16] = Dst; /*0x5a8b89*/
  }
  dword_B3B0B4[0xAC] = 0; /*0x5a8b8c*/
  return result; /*0x5a8b93*/
}
