float *__cdecl sub_6C23C0(float a1, int a2, int a3, float *a4)
{
  if ( a1 >= 1.0 )
  {
    *a4 = *(float *)(a3 + 4);
    return a4;
  }
  else
  {
    *a4 = *(float *)(a2 + 4);
    return (float *)a2;
  }
}
