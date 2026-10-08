void sub_9FFFD0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.8835729360580444); /*0x9fffdc*/
  *(float *)&dword_B3C180[0x18] = 1.0 / (v0 + v0); /*0x9fffe8*/
}
