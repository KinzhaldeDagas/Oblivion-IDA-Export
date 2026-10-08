float __cdecl Calc_ActorBaseEncumbrance(float a1)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = MEMORY[0xB37570] * a1; /*0x547eda*/
  if ( v3 >= 0.0 ) /*0x547eeb*/
    return v3; /*0x547ef8*/
  else
    return 0.0; /*0x547ef3*/
}
