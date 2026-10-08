void sub_9FFE30()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.7363107800483704); /*0x9ffe3c*/
  *(float *)&dword_B3C180[0xB] = 1.0 / (v0 + v0); /*0x9ffe48*/
}
