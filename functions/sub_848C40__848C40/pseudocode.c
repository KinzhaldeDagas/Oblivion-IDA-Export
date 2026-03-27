void __stdcall sub_848C40(float *a1)
{
  double v1; // st7
  double v2; // st6
  double v3; // st5
  double v4; // st4
  float v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+0h] [ebp-10h]
  float v7; // [esp+4h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+14h] [ebp+4h]

  v1 = a1[0x10];
  v2 = a1[0x12];
  v3 = a1[0x11];
  if ( *(float *)&dword_B3FA90 != v1 || *(float *)&dword_B3FA94 != v3 || *(float *)&dword_B3FA98 != v2 )
  {
    if ( UseHDR )
    {
      if ( byte_B43074 )
        v4 = flt_B4320C;
      else
        v4 = flt_B43208;
      v11 = v4;
      v5 = v1 * v11;
      v7 = v3 * v11;
      v9 = v11 * v2;
      v1 = v5;
      v3 = v7;
      v2 = v9;
    }
    *(float *)&v6 = v1 + *(float *)&dword_B46498;
    *(float *)&v8 = v3 + *(float *)&dword_B4649C;
    *(float *)&v10 = v2 + *(float *)&dword_B464A0;
    if ( !UseHDR )
    {
      if ( *(float *)&v6 >= 1.0 )
        *(float *)&v6 = 1.0;
      if ( *(float *)&v8 >= 1.0 )
        *(float *)&v8 = 1.0;
      if ( *(float *)&v10 >= 1.0 )
        *(float *)&v10 = 1.0;
    }
    sub_7ECAE0(0, v6, v8, v10, dword_B464A4);
  }
}
