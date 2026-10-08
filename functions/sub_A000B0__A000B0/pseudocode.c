void sub_A000B0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.374446868896484); /*0xa000bc*/
  *(float *)&dword_B3C180[0x1F] = 1.0 / (v0 + v0); /*0xa000c8*/
}
