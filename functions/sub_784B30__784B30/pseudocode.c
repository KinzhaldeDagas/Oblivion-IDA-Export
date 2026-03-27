float *__stdcall sub_784B30(float *a1, int a2, float *a3)
{
  int v3; // eax
  float *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    --v3;
    *i = *a3;
  }
  return &a1[a2];
}
