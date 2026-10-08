float *sub_5A8BA0()
{
  float *result; // eax

  result = (float *)dword_B3B0B4[0xA9]; /*0x5a8ba0*/
  if ( dword_B3B0B4[0xA9] ) /*0x5a8ba0*/
  {
    if ( !bHealthBarShowing_Gameplay ) /*0x5a8bab*/
      result[0x16] = 0.0; /*0x5a8bb5*/
  }
  dword_B3B0B4[0xAC] = 0; /*0x5a8bb8*/
  return result; /*0x5a8bbe*/
}
