BOOL __thiscall Sky_IsSnowingByWeatherFlags(Sky *this)
{
  TESWeather *firstWeather; // eax
  double v2; // st7
  TESWeather *secondWeather; // eax
  BOOL result; // eax
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]

  firstWeather = this->firstWeather; /*0x4f5f71*/
  v2 = dbl_A3F398; /*0x4f5f74*/
  if ( firstWeather ) /*0x4f5f7e*/
  {                                             // Snow helper tests TESWeather+0x53 bit 3 on firstWeather and compares Sky+0xD8 against TESWeather+0x4E threshold.
    if ( (*((_BYTE *)firstWeather + 0x53) & 8) != 0 ) /*0x4f5f83*/
    {
      v5 = (dbl_A3F460 - 0.0) * ((double)*((unsigned __int8 *)firstWeather + 0x4E) * v2) + 0.0; /*0x4f5fa7*/
      if ( v5 < (double)this->weatherPercent ) /*0x4f5fb4*/
        return 1; /*0x4f5ffa*/
    }
  }
  secondWeather = this->secondWeather; /*0x4f5fb6*/
  result = 0; /*0x4f5ff1*/
  if ( secondWeather ) /*0x4f5fbb*/
  {                                             // Snow helper also tests secondWeather bit 3 and TESWeather+0x4F threshold.
    if ( (*((_BYTE *)secondWeather + 0x53) & 8) != 0 ) /*0x4f5fc0*/
    {
      v6 = v2 * (double)*((unsigned __int8 *)secondWeather + 0x4F) * dbl_A48DD8 + dbl_A30E40; /*0x4f5fe2*/
      if ( v6 > (double)this->weatherPercent ) /*0x4f5fef*/
        return 1; /*0x4f5fbb*/
    }
  }
  return result; /*0x4f5ff7*/
}
