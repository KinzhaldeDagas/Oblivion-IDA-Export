void sub_A000F0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.178097248077393); /*0xa000fc*/
  *(float *)&dword_B3C180[0x21] = 1.0 / (v0 + v0); /*0xa00108*/
}
