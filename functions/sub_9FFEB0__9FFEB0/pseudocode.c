void sub_9FFEB0()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.12900984287262); /*0x9ffebc*/
  *(float *)&dword_B3C180[0xF] = 1.0 / (v0 + v0); /*0x9ffec8*/
}
