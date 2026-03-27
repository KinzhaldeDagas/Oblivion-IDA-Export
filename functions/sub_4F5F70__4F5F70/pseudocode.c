BOOL __thiscall sub_4F5F70(Sky *this)
{
  TESWeather *firstWeather; // eax
  double v2; // st7
  TESWeather *secondWeather; // eax
  BOOL result; // eax
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]

  firstWeather = this->firstWeather;
  v2 = dbl_A3F398;
  if ( firstWeather )
  {
    if ( (*((_BYTE *)firstWeather + 0x53) & 8) != 0 )
    {
      v5 = (dbl_A3F460 - 0.0) * ((double)*((unsigned __int8 *)firstWeather + 0x4E) * v2) + 0.0;
      if ( v5 < (double)this->weatherPercent )
        return 1;
    }
  }
  secondWeather = this->secondWeather;
  result = 0;
  if ( secondWeather )
  {
    if ( (*((_BYTE *)secondWeather + 0x53) & 8) != 0 )
    {
      v6 = v2 * (double)*((unsigned __int8 *)secondWeather + 0x4F) * dbl_A48DD8 + dbl_A30E40;
      if ( v6 > (double)this->weatherPercent )
        return 1;
    }
  }
  return result;
}
