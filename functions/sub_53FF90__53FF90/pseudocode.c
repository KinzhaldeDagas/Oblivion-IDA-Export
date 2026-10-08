// Pass231: Updates weather wind globals after fog distance update in normal sky path.
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

  result = this->firstWeather; /*0x53ff90*/
  if ( result ) /*0x53ff98*/
  {
    unk0DC = this->unk0DC; /*0x53ff9e*/
    if ( unk0DC == 3 || unk0DC == 2 ) /*0x53ffac*/
    {
      v9 = *((unsigned __int8 *)result + 0x48); /*0x53ffba*/
      secondWeather = this->secondWeather; /*0x53ffbf*/
      v4 = dbl_A3F398; /*0x53ffd1*/
      v10 = (double)v9 * v4 * (1.0 - 0.0) + 0.0; /*0x53ffd7*/
      this->windSpeed = v10; /*0x53ffdd*/
      if ( secondWeather ) /*0x53ffe3*/
      {
        v11 = v10 * this->weatherPercent; /*0x53ffeb*/
        this->windSpeed = v11; /*0x53fff1*/
        v5 = v11; /*0x540007*/
        v12 = (1.0 - 0.0) * (v4 * (double)*((unsigned __int8 *)secondWeather + 0x48)) + 0.0; /*0x54000b*/
        this->windSpeed = (1.0 - this->weatherPercent) * v12 + v5; /*0x54001d*/
      }
      v6 = unk_B42D78 == 0; /*0x54002f*/
      result = (TESWeather *)dword_B27104; /*0x540036*/
      v7 = dword_B27108; /*0x54003b*/
      unk_B430CC = dword_B27104; /*0x540041*/
      unk_B430D0 = v7; /*0x540046*/
      windSpeed = this->windSpeed; /*0x54004c*/
      flt_B2C670 = this->windSpeed; /*0x540052*/
      if ( v6 ) /*0x540058*/
        windSpeed = 0.0; /*0x540069*/
      else
        result = (TESWeather *)((int (__cdecl *)(_DWORD, int))unk_B42D78)(0, 1); /*0x54005e*/
      v13 = windSpeed; /*0x54006b*/
      v14 = v13 / dbl_A2F938 * dbl_A56E20 * dbl_A492F0; /*0x540083*/
      v15 = sin(v14); /*0x54008e*/
      v18 = v15 * dbl_A492F0; /*0x54009c*/
      v16 = v14 * dbl_A56E18; /*0x5400a9*/
      v17 = cos(v16); /*0x5400b6*/
      v19 = v17 * dbl_A492F0; /*0x5400c4*/
      unk_B44EF8 = v18; /*0x5400cc*/
      unk_B44EFC = v19; /*0x5400d6*/
    }
  }
  return result; /*0x5400dc*/
}
