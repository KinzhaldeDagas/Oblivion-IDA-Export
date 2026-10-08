void sub_9FFEF0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.325359463691711); /*0x9ffefc*/
  *(float *)&dword_B3C180[0x11] = 1.0 / (v0 + v0); /*0x9fff08*/
}
