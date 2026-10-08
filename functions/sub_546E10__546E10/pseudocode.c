signed __int16 __cdecl sub_546E10(_DWORD *a1, float a2, float a3, float a4, float a5, float a6, char a7, char a8)
{
  double v8; // st7
  char v9; // bl
  double v10; // st7
  double v11; // st7
  double v12; // st5
  float v14; // [esp+1Ch] [ebp+8h]
  float v15; // [esp+1Ch] [ebp+8h]
  float v16; // [esp+20h] [ebp+Ch]
  float v17; // [esp+20h] [ebp+Ch]
  float v18; // [esp+20h] [ebp+Ch]
  float v19; // [esp+2Ch] [ebp+18h]
  float v20; // [esp+2Ch] [ebp+18h]

  if ( LOBYTE(a3) ) /*0x546e23*/
    v8 = sub_4A9E30(a1); /*0x546e25*/
  else
    v8 = sub_4A9E70(a1); /*0x546e2c*/
  v16 = v8; /*0x546e33*/
  v9 = LOBYTE(a2); /*0x546e44*/
  v17 = (double)(Game_RandomLargeInteger(0) % 5 + 1) * (v16 * g_GameSettingStringPointers_B36CD8[0x2C]); /*0x546e66*/
  if ( LOBYTE(a2) ) /*0x546e6a*/
    v10 = sub_4A9EB0(a1); /*0x546e6c*/
  else
    v10 = sub_4A9EF0(a1); /*0x546e73*/
  v14 = v10; /*0x546e7a*/
  v15 = (double)(Game_RandomLargeInteger(0) % 5 + 1) * (v14 * g_GameSettingStringPointers_B36CD8[0x2C]); /*0x546ea7*/
  if ( v9 ) /*0x546eab*/
  {
    if ( a7 ) /*0x546eb2*/
    {
      v17 = g_GameSettingStringPointers_B36CD8[0x30] * v17; /*0x546ec0*/
      v15 = g_GameSettingStringPointers_B36CD8[0x30] * v15; /*0x546ec8*/
    }
  }
  if ( (a8 & 2) != 0 ) /*0x546ed5*/
    v17 = 0.0; /*0x546ed7*/
  if ( (a8 & 1) != 0 ) /*0x546ede*/
    v15 = 0.0; /*0x546ee0*/
  if ( LOBYTE(a6) ) /*0x546eed*/
    v11 = g_GameSettingStringPointers_B36CD8[0x2A]; /*0x546eef*/
  else
    v11 = 1.0; /*0x546ef7*/
  v19 = v11; /*0x546efb*/
  v20 = (double)(Game_RandomLargeInteger(0) % 5 + 1) * (v19 * g_GameSettingStringPointers_B36CD8[0x2C]); /*0x546f26*/
  v12 = v20; /*0x546f36*/
  if ( v15 <= (double)v17 && v12 < v17 ) /*0x546f45*/
    return 2; /*0x546f87*/
  if ( dbl_A2FAA0 * a5 > a4 ) /*0x546f5e*/
    return 2; /*0x546f75*/
  if ( v17 < (double)v15 && v15 > v12 && a5 * kFaceGenVariationScale1_5 < a4 ) /*0x546fad*/
    return 1; /*0x546fba*/
  v18 = (float)(Game_RandomLargeInteger(0) % 0x64); /*0x546feb*/
  if ( (double)(*(char (__thiscall **)(_DWORD *))(*a1 + 0xE4))(a1) >= v18 ) /*0x54700d*/
  {
    if ( (double)(Game_RandomLargeInteger(0) % 0x64) > flt_A58590 ) /*0x547034*/
    {
      if ( (a8 & 8) == 0 ) /*0x54704a*/
        return 8; /*0x547057*/
    }
    else if ( (a8 & 4) == 0 ) /*0x547039*/
    {
      return 4; /*0x547046*/
    }
  }
  return 0; /*0x546f72*/
}
