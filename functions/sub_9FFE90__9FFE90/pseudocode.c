void sub_9FFE90()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.030835151672363); /*0x9ffe9c*/
  *(float *)&dword_B3C180[0xE] = 1.0 / (v0 + v0); /*0x9ffea8*/
}
