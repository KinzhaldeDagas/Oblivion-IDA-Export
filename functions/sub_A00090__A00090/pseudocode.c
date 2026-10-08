void sub_A00090()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.9817477464675903); /*0xa0009c*/
  *(float *)&dword_B3C180[0x1E] = 1.0 / (v0 + v0); /*0xa000a8*/
}
