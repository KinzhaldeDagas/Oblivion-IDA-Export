void sub_9FFF50()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.09817477315664291); /*0x9fff5c*/
  *(float *)&dword_B3C180[0x14] = 1.0 / (v0 + v0); /*0x9fff68*/
}
