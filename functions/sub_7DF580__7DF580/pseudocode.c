double __cdecl sub_7DF580(float a1, float a2)
{
  int v2; // esi
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st5
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+4h] [ebp-4h]

  v2 = 0;
  v8 = (double)rand() / dbl_A3D5A8;
  v3 = v8;
  if ( v8 < (double)flt_A3D65C )
  {
    v9 = 1.0 - v3;
    if ( flt_B2D63C < (double)v9 )
    {
      do
        v6 = *(float *)(8 * v2++ + 0xB2D644);
      while ( v6 < v9 );
    }
    v5 = 1.0 - *(float *)(8 * v2 + 0xB2D630);
  }
  else
  {
    if ( flt_B2D63C < v3 )
    {
      do
        v4 = *(float *)(8 * v2++ + 0xB2D644);
      while ( v4 < v3 );
    }
    v5 = *(float *)(8 * v2 + 0xB2D630);
  }
  v10 = v5;
  return (float)(v10 * a2 + a1);
}
