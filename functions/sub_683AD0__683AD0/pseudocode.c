double __cdecl sub_683AD0(float a1, float a2, float *a3)
{
  double v3; // st6
  double result; // st7
  float v5; // [esp+8h] [ebp+8h]

  v5 = a2 - a1; /*0x683adc*/
  *a3 = 0.0; /*0x683ae2*/
  v3 = v5; /*0x683aee*/
  if ( v5 == 0.0 ) /*0x683af3*/
    return v5; /*0x683b4d*/
  *a3 = 1.0; /*0x683af7*/
  result = v5; /*0x683afd*/
  if ( v3 >= 0.0 ) /*0x683b02*/
  {
    if ( v3 > dbl_A3D5B8 ) /*0x683b34*/
    {
      *a3 = kTerrainLODQuadRayDirectionZ; /*0x683b3c*/
      return (float)(dbl_A3D5B0 - v3); /*0x683b48*/
    }
  }
  else if ( v3 <= dbl_A491E0 ) /*0x683b0f*/
  {
    return (float)(v3 + dbl_A3D5B0); /*0x683b24*/
  }
  else
  {
    *a3 = kTerrainLODQuadRayDirectionZ; /*0x683b17*/
  }
  return result; /*0x683b19*/
}
