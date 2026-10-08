void sub_A000D0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.3926990926265717); /*0xa000dc*/
  *(float *)&dword_B3C180[0x20] = 1.0 / (v0 + v0); /*0xa000e8*/
}
