void sub_9FFE50()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.8344855904579163); /*0x9ffe5c*/
  *(float *)&dword_B3C180[0xC] = 1.0 / (v0 + v0); /*0x9ffe68*/
}
