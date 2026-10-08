void sub_A00010()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.276272058486938); /*0xa0001c*/
  *(float *)&dword_B3C180[0x1A] = 1.0 / (v0 + v0); /*0xa00028*/
}
