void sub_9FFF70()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.2945243120193481); /*0x9fff7c*/
  *(float *)&dword_B3C180[0x15] = 1.0 / (v0 + v0); /*0x9fff88*/
}
