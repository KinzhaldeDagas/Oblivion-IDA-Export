TESWeather *__thiscall sub_53FF90(Sky *this)
{
  TESWeather *result; // eax
  UInt32 unk0DC; // edx
  TESWeather *secondWeather; // eax
  double v4; // st4
  double v5; // st6
  bool v6; // zf
  int v7; // edx
  double windSpeed; // st7
  int v9; // [esp+0h] [ebp-10h]
  float v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+0h] [ebp-10h]
  float v13; // [esp+0h] [ebp-10h]
  float v14; // [esp+0h] [ebp-10h]
  float v15; // [esp+4h] [ebp-Ch]
  float v16; // [esp+4h] [ebp-Ch]
  float v17; // [esp+4h] [ebp-Ch]
  float v18; // [esp+8h] [ebp-8h]
  float v19; // [esp+Ch] [ebp-4h]

  result = this->firstWeather;
  if ( result )
  {
    unk0DC = this->unk0DC;
    if ( unk0DC == 3 || unk0DC == 2 )
    {
      v9 = *((unsigned __int8 *)result + 0x48);
      secondWeather = this->secondWeather;
      v4 = dbl_A3F398;
      v10 = (double)v9 * v4 * (1.0 - 0.0) + 0.0;
      this->windSpeed = v10;
      if ( secondWeather )
      {
        v11 = v10 * this->weatherPercent;
        this->windSpeed = v11;
        v5 = v11;
        v12 = (1.0 - 0.0) * (v4 * (double)*((unsigned __int8 *)secondWeather + 0x48)) + 0.0;
        this->windSpeed = (1.0 - this->weatherPercent) * v12 + v5;
      }
      v6 = dword_B42D78 == 0;
      result = (TESWeather *)dword_B27104;
      v7 = dword_B27108;
      dword_B430CC = dword_B27104;
      dword_B430D0 = v7;
      windSpeed = this->windSpeed;
      flt_B2C670 = this->windSpeed;
      if ( v6 )
        windSpeed = 0.0;
      else
        result = (TESWeather *)((int (__cdecl *)(_DWORD, int))dword_B42D78)(0, 1);
      v13 = windSpeed;
      v14 = v13 / dbl_A2F938 * dbl_A56E20 * dbl_A492F0;
      v15 = sin(v14);
      v18 = v15 * dbl_A492F0;
      v16 = v14 * dbl_A56E18;
      v17 = cos(v16);
      v19 = v17 * dbl_A492F0;
      flt_B44EF8 = v18;
      flt_B44EFC = v19;
    }
  }
  return result;
}
