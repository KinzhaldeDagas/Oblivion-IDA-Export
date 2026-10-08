BOOL __thiscall Sky_IsRainingByWeatherFlags(Sky *this)
{
  TESWeather *firstWeather; // eax
  double v2; // st7
  TESWeather *secondWeather; // eax
  BOOL result; // eax
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]

  firstWeather = this->firstWeather; /*0x4f5ed1*/
  v2 = dbl_A3F398; /*0x4f5ed4*/
  if ( firstWeather ) /*0x4f5ede*/
  {                                             // Rain helper tests TESWeather+0x53 bit 2 on firstWeather and compares Sky+0xD8 against the first-weather transition threshold at TESWeather+0x4E.
    if ( (*((_BYTE *)firstWeather + 0x53) & 4) != 0 ) /*0x4f5ee3*/
    {
      v5 = (dbl_A3F460 - 0.0) * ((double)*((unsigned __int8 *)firstWeather + 0x4E) * v2) + 0.0; /*0x4f5f07*/
      if ( v5 < (double)this->weatherPercent ) /*0x4f5f14*/
        return 1; /*0x4f5f5a*/
    }
  }
  secondWeather = this->secondWeather; /*0x4f5f16*/
  result = 0; /*0x4f5f51*/
  if ( secondWeather ) /*0x4f5f1b*/
  {                                             // Rain helper also tests secondWeather bit 2 and second-weather transition threshold at TESWeather+0x4F.
    if ( (*((_BYTE *)secondWeather + 0x53) & 4) != 0 ) /*0x4f5f20*/
    {
      v6 = v2 * (double)*((unsigned __int8 *)secondWeather + 0x4F) * dbl_A48DD8 + dbl_A30E40; /*0x4f5f42*/
      if ( v6 > (double)this->weatherPercent ) /*0x4f5f4f*/
        return 1; /*0x4f5f1b*/
    }
  }
  return result; /*0x4f5f57*/
}
