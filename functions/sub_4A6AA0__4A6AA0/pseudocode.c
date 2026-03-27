double __cdecl sub_4A6AA0(float *a1, float *a2, float a3)
{
  if ( !a1 || !a2 )
    return 0.0;
  return (float)(*a2 - (a2[1] - a3) * ((*a1 - *a2) / (a1[1] - a2[1])));
}
