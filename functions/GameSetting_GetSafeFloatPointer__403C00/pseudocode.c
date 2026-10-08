float *__thiscall GameSetting_GetSafeFloatPointer(float *this)
{
  float *result; // eax

  result = this; /*0x403c00*/
  if ( !this ) /*0x403c04*/
  {
    flt_B35464[0] = 0.0; /*0x403c0d*/
    return flt_B35464; /*0x403c08*/
  }
  return result; /*0x403c13*/
}
