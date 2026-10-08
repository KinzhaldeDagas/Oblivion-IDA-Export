void sub_9FFD70()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.1472621560096741); /*0x9ffd7c*/
  *(float *)&dword_B3C180[5] = 1.0 / (v0 + v0); /*0x9ffd88*/
}
