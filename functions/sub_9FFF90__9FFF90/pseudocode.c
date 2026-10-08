void sub_9FFF90()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.4908738732337952); /*0x9fff9c*/
  *(float *)&dword_B3C180[0x16] = 1.0 / (v0 + v0); /*0x9fffa8*/
}
