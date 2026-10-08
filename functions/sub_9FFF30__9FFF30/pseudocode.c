void sub_9FFF30()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.521708965301514); /*0x9fff3c*/
  *(float *)&dword_B3C180[0x13] = 1.0 / (v0 + v0); /*0x9fff48*/
}
