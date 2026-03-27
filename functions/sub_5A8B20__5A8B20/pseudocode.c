void *__fastcall sub_5A8B20(int a1)
{
  float *v1; // eax
  bool v2; // zf
  size_t v4; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v4) = a1;
  v1 = (float *)Player_HUDHealthBarTile_;
  v2 = Player_HUDHealthBarTile_ == 0;
  *((float *)&v4 + 1) = 0.0;
  if ( !v2 && !bHealthBarShowing_Gameplay )
    *((float *)&v4 + 1) = v1[0x16];
  LODWORD(v4) = 4;
  return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)&v4 + 4, v4);
}
