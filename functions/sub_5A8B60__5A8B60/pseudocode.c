float *__fastcall sub_5A8B60(int a1)
{
  float *result; // eax
  size_t v2; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v2) = a1;
  LODWORD(v2) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v2 + 4, v2);
  result = (float *)Player_HUDHealthBarTile_;
  if ( Player_HUDHealthBarTile_ )
  {
    if ( !bHealthBarShowing_Gameplay )
      result[0x16] = *((float *)&v2 + 1);
  }
  Player_HUDHealthBarTarget_ = 0;
  return result;
}
