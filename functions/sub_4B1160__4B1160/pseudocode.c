char sub_4B1160()
{
  char v0; // al
  bool v1; // zf
  int v2; // eax
  int v3; // eax
  char result; // al

  v0 = 0;
  v1 = byte_B08138 == 1;
  byte_B35AC0 = 0;
  if ( v1 )
  {
    v0 = 1;
    byte_B35AC0 = 1;
  }
  if ( bUSeLinear == 1 )
  {
    v0 |= 2u;
    byte_B35AC0 = v0;
  }
  if ( useQuadratic == 1 )
  {
    v0 |= 4u;
    byte_B35AC0 = v0;
  }
  if ( !v0 )
    byte_B35AC0 = 4;
  v2 = dword_B08158;
  if ( dword_B08158 )
  {
    if ( v2 != 1 && v2 != 2 )
      dword_B08158 = 1;
  }
  v3 = dword_B08160;
  if ( dword_B08160 )
  {
    if ( v3 != 1 && v3 != 2 )
      dword_B08160 = 2;
  }
  if ( 0.0 == flt_B08188 )
    flt_B08188 = 1.0;
  result = 1;
  if ( 0.0 == flt_B08190 )
    flt_B08190 = 1.0;
  return result;
}
