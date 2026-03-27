double __cdecl sub_548A10(float a1)
{
  double v1; // st6
  float v3; // [esp+4h] [ebp+4h]

  v1 = fImpactShaderMaxDistance;
  if ( v1 < a1 )
    return 0.0;
  v3 = 1.0 - a1 / v1;
  return (float)(fImpactShaderMinMagnitude + (fImpactShaderMaxMagnitude - fImpactShaderMinMagnitude) * v3);
}
