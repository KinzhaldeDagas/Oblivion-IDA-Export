// positive sp value has been detected, the output may be wrong!
double PlayerCharacter_GetBounty_::EnforceMinimumOfZero()
{
  double result; // st7
  float v1; // [esp-4h] [ebp-4h]

  result = 1.0; /*0x60fbec*/
  if ( v1 < 1.0 && v1 > 0.0 ) /*0x60fc03*/
    return (float)1.0; /*0x60fc0a*/
  PlayerCharacter_GetBounty_::Return(); /*0x60fbf8*/
  return result; /*0x60fc0e*/
}
