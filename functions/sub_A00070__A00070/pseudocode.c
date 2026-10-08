void sub_A00070()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.5890486240386963); /*0xa0007c*/
  *(float *)&dword_B3C180[0x1D] = 1.0 / (v0 + v0); /*0xa00088*/
}
