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

  if ( LOBYTE(a3) )
    v8 = sub_4A9E30(a1);
  else
    v8 = sub_4A9E70(a1);
  v16 = v8;
  v9 = LOBYTE(a2);
  v17 = (double)(GetRandomLargeInteger_(0) % 5 + 1) * (v16 * flt_B36D88);
  if ( LOBYTE(a2) )
    v10 = sub_4A9EB0(a1);
  else
    v10 = sub_4A9EF0(a1);
  v14 = v10;
  v15 = (double)(GetRandomLargeInteger_(0) % 5 + 1) * (v14 * flt_B36D88);
  if ( v9 )
  {
    if ( a7 )
    {
      v17 = flt_B36D98 * v17;
      v15 = flt_B36D98 * v15;
    }
  }
  if ( (a8 & 2) != 0 )
    v17 = 0.0;
  if ( (a8 & 1) != 0 )
    v15 = 0.0;
  if ( LOBYTE(a6) )
    v11 = flt_B36D80;
  else
    v11 = 1.0;
  v19 = v11;
  v20 = (double)(GetRandomLargeInteger_(0) % 5 + 1) * (v19 * flt_B36D88);
  v12 = v20;
  if ( v15 <= (double)v17 && v12 < v17 )
    return 2;
  if ( dbl_A2FAA0 * a5 > a4 )
    return 2;
  if ( v17 < (double)v15 && v15 > v12 && a5 * dbl_A563D0 < a4 )
    return 1;
  v18 = (float)(GetRandomLargeInteger_(0) % 0x64);
  if ( (double)(*(char (__thiscall **)(_DWORD *))(*a1 + 0xE4))(a1) >= v18 )
  {
    if ( (double)(GetRandomLargeInteger_(0) % 0x64) > flt_A58590 )
    {
      if ( (a8 & 8) == 0 )
        return 8;
    }
    else if ( (a8 & 4) == 0 )
    {
      return 4;
    }
  }
  return 0;
}
