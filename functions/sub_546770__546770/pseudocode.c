double __cdecl sub_546770(signed int a1)
{
  double result; // st7
  float v2; // [esp+4h] [ebp+4h]
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v2 = (double)a1 * flt_B36778[0x84] + flt_B36778[0x82]; /*0x546780*/
  v3 = v2 + flt_B36778[0x88]; /*0x54678e*/
  v4 = (fCostant_100 - v3) / fCostant_100; /*0x5467a2*/
  v5 = fabs(v4); /*0x5467ac*/
  result = 0.0; /*0x5467b8*/
  if ( v5 > 0.0 ) /*0x5467c5*/
  {
    v6 = dbl_A2FCC8 - v5 * dbl_A49360; /*0x5467d6*/
    if ( v6 < 0.0 ) /*0x5467e3*/
      return (float)0.0; /*0x5467e5*/
    return v6; /*0x5467e9*/
  }
  return result; /*0x5467c9*/
}
