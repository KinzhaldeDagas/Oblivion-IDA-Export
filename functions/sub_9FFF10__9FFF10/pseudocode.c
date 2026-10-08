void sub_9FFF10()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(1.423534154891968); /*0x9fff1c*/
  *(float *)&dword_B3C180[0x12] = 1.0 / (v0 + v0); /*0x9fff28*/
}
