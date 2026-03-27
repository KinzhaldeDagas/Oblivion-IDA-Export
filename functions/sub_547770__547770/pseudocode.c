double __cdecl sub_547770(float a1)
{
  double v1; // st7
  double v2; // st7
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]

  v4 = fabs(a1);
  v5 = (v4 - flt_B371F0) / (flt_B371F8 - flt_B371F0);
  v1 = 0.0;
  if ( v5 > 0.0 )
    v1 = v5;
  v6 = v1;
  v2 = v6;
  if ( v6 > dbl_A2F928 )
    v2 = 1.0;
  v7 = v2;
  return (float)((flt_B371E8 - flt_B371E0) * v7 + flt_B371E0);
}
