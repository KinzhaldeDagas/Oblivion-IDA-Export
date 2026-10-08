void sub_9FFE70()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.9326603412628174); /*0x9ffe7c*/
  *(float *)&dword_B3C180[0xD] = 1.0 / (v0 + v0); /*0x9ffe88*/
}
