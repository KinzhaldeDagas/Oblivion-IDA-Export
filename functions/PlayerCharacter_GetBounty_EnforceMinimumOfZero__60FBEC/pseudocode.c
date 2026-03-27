// positive sp value has been detected, the output may be wrong!
double PlayerCharacter_GetBounty_::EnforceMinimumOfZero()
{
  double result; // st7
  float v1; // [esp-4h] [ebp-4h]

  result = 1.0;
  if ( v1 < 1.0 && v1 > 0.0 )
    return (float)1.0;
  PlayerCharacter_GetBounty_::Return();
  return result;
}
