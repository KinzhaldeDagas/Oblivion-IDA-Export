void sub_9FFE10()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.6381360292434692); /*0x9ffe1c*/
  *(float *)&dword_B3C180[0xA] = 1.0 / (v0 + v0); /*0x9ffe28*/
}
