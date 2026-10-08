void sub_9FFFF0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.079922556877136); /*0x9ffffc*/
  *(float *)&dword_B3C180[0x19] = 1.0 / (v0 + v0); /*0xa00008*/
}
