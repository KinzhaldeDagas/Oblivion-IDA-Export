void sub_9FFD90()
{
  float v0; // [esp+0h] [ebp-4h]

  v0 = cos(0.2454369366168976); /*0x9ffd9c*/
  *(float *)&dword_B3C180[6] = 1.0 / (v0 + v0); /*0x9ffda8*/
}
