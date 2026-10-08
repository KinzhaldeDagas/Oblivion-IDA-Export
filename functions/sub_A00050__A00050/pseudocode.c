void sub_A00050()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.1963495463132858); /*0xa0005c*/
  *(float *)&dword_B3C180[0x1C] = 1.0 / (v0 + v0); /*0xa00068*/
}
