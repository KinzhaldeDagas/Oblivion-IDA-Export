// CustomAnimSupport evidence: HitShader Enum event support helper; scales player/reference distance for shader effect.
double __cdecl sub_548A10(float a1)
{
  double v1; // st6
  float v3; // [esp+4h] [ebp+4h]

  v1 = MEMORY[0xB37DA0]; /*0x548a14*/
  if ( v1 < a1 ) /*0x548a21*/
    return 0.0; /*0x548a27*/
  v3 = 1.0 - a1 / v1; /*0x548a30*/
  return (float)(MEMORY[0xB37DA8] + (MEMORY[0xB37DB0] - MEMORY[0xB37DA8]) * v3); /*0x548a29*/
}
