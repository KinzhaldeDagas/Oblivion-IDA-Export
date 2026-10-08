// Returns heading in the XY plane from a normalized vector, normalized to [0,2pi).
double __cdecl Vector3_CalculateHeadingRadiansXY(float *a1)
{
  double result; // st7
  double v3; // st7
  double v4; // st6
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]

  if ( 0.0 == a1[1] ) /*0x683cbf*/
  {
    if ( *a1 <= 0.0 ) /*0x683d3c*/
      v3 = flt_A74C88; /*0x683d72*/
    else
      v3 = flt_A3F3E0; /*0x683d3e*/
    v8 = v3; /*0x683d44*/
    result = v8; /*0x683d48*/
  }
  else
  {
    v5 = *a1 / a1[1]; /*0x683cc8*/
    v6 = atan(v5); /*0x683cd5*/
    if ( a1[1] < 0.0 ) /*0x683ceb*/
      v6 = v6 + dbl_A3D5B8; /*0x683cf7*/
    result = v6; /*0x683d03*/
    if ( v6 < 0.0 ) /*0x683d08*/
    {
      v7 = result + dbl_A3D5B0; /*0x683d14*/
      unknown_libname_14(dbl_A3D5B0, v7); /*0x683d1e*/
      return v7; /*0x683d34*/
    }
  }
  v4 = dbl_A3D5B0; /*0x683d4c*/
  if ( v4 <= result ) /*0x683d59*/
  {
    unknown_libname_14(v4, result); /*0x683d5b*/
    return (float)result; /*0x683d6d*/
  }
  return result; /*0x683d7c*/
}
