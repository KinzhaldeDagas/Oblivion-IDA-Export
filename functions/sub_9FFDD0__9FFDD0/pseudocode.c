void sub_9FFDD0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.4417864680290222); /*0x9ffddc*/
  *(float *)&dword_B3C180[8] = 1.0 / (v0 + v0); /*0x9ffde8*/
}
