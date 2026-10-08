// Returns a uniformly distributed floating value between the two inputs, accepting either input order.
float __cdecl RandomFloatBetween(float value1, float value2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st7
  float value2b; // [esp+Ch] [ebp+8h]
  float value2a; // [esp+Ch] [ebp+8h]

  v2 = value1; /*0x546b21*/
  if ( value2 <= (double)value1 ) /*0x546b30*/
  {
    value1 = value2; /*0x546b3a*/
    v3 = v2; /*0x546b3e*/
    v4 = value2; /*0x546b3e*/
  }
  else
  {
    v3 = value1; /*0x546b32*/
    v4 = value2; /*0x546b32*/
  }
  if ( v3 > v4 ) /*0x546b47*/
    v4 = v3; /*0x546b49*/
  value2b = v4; /*0x546b4f*/
  v5 = value1; /*0x546b5f*/
  value2a = value2b - value1; /*0x546b61*/
  if ( value2a > 0.0 ) /*0x546b70*/
    return (double)Game_RandomLargeInteger(0) / dbl_A3D5A8 * value2a + value1; /*0x546b98*/
  return v5; /*0x546b9d*/
}
