float *__cdecl sub_6F11E0(float *a1, float *a2, float *a3)
{
  float *v3; // ecx
  float *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 2 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
    }
    v3 += 2;
  }
  return result;
}
