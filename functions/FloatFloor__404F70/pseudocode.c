double __cdecl FloatFloor(float a1)
{
  double v1; // st7
  double v2; // st6
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]

  v1 = a1;
  v5 = (float)Double_To_SInt32(a1);
  v2 = v1 - v5;
  v3 = v5;
  if ( v2 < 0.0 )
    return (float)(v3 - 1.0);
  return (float)v3;
}
