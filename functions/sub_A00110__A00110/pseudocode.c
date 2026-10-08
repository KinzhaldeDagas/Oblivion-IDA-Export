void sub_A00110()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.7853981852531433); /*0xa0011c*/
  *(float *)&dword_B3C180[0x22] = 1.0 / (v0 + v0); /*0xa00128*/
}
