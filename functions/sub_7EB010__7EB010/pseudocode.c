void __cdecl sub_7EB010(char a1)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  if ( byte_B2D91C )
  {
    if ( a1 )
    {
      v2 = flt_B4612C;
      v1 = flt_A3744C;
    }
    else
    {
      v2 = flt_B46128;
      v1 = 1.0;
    }
    if ( v2 >= (double)flt_B46124 )
      flt_B46124 = v2;
    v3 = v1;
    flt_B46120 = v3;
  }
}
