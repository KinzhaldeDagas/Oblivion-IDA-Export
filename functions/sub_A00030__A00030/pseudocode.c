void sub_A00030()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.472621560096741); /*0xa0003c*/
  *(float *)&dword_B3C180[0x1B] = 1.0 / (v0 + v0); /*0xa00048*/
}
