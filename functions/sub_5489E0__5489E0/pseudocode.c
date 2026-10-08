double __cdecl sub_5489E0(signed int a1)
{
  double v1; // st7
  float v3; // [esp+4h] [ebp+4h]

  v3 = (double)a1 * MEMORY[0xB375D8]; /*0x5489ea*/
  v1 = v3; /*0x5489f8*/
  if ( v3 <= 0.0 ) /*0x5489fd*/
    return (float)(int)MEMORY[0xB375E0].value; /*0x548a01*/
  return (float)v1; /*0x548a0f*/
}
