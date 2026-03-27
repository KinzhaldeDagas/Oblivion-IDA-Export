bool __cdecl sub_6D31B0(float a1, int a2, unsigned int a3, unsigned int *a4, unsigned __int8 a5)
{
  bool result; // al
  double v6; // st7
  int v7; // ecx
  double v8; // st6
  float *v9; // ecx
  unsigned int v10; // edx

  result = 1;
  *a4 = 0;
  if ( a3 )
  {
    v6 = a1;
    while ( 1 )
    {
      v7 = *a4 * a5;
      v8 = *(float *)(v7 + a2);
      v9 = (float *)(a2 + v7);
      if ( v8 >= v6 )
        break;
      v10 = *a4 + 1;
      *a4 = v10;
      if ( v10 >= a3 )
        return 1;
    }
    return *v9 > v6;
  }
  return result;
}
