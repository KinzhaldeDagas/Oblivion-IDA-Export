void sub_9FFED0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.227184653282166); /*0x9ffedc*/
  *(float *)&dword_B3C180[0x10] = 1.0 / (v0 + v0); /*0x9ffee8*/
}
