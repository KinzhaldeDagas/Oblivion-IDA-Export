void sub_9FFDF0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.5399612784385681); /*0x9ffdfc*/
  *(float *)&dword_B3C180[9] = 1.0 / (v0 + v0); /*0x9ffe08*/
}
