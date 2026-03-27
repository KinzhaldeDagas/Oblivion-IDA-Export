float *sub_5A8BA0()
{
  float *result; // eax

  result = (float *)Player_HUDHealthBarTile_;
  if ( Player_HUDHealthBarTile_ )
  {
    if ( !bHealthBarShowing_Gameplay )
      result[0x16] = 0.0;
  }
  Player_HUDHealthBarTarget_ = 0;
  return result;
}
