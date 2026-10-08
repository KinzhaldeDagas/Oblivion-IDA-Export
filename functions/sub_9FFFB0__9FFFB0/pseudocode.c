void sub_9FFFB0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.6872234344482422); /*0x9fffbc*/
  *(float *)&dword_B3C180[0x17] = 1.0 / (v0 + v0); /*0x9fffc8*/
}
