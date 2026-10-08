void sub_9FFD50()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.04908738657832146); /*0x9ffd5c*/
  *(float *)&dword_B3C180[4] = 1.0 / (v0 + v0); /*0x9ffd68*/
}
