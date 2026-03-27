float *__cdecl sub_716F40(unsigned __int16 a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  int v5; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st5
  double v14; // st6

  result = (float *)a1;
  v5 = a1;
  if ( a1 )
  {
    result = a2;
    do
    {
      v7 = *result * a4[3];
      v8 = result[1] * a4[4];
      v9 = result[2] * a4[5];
      *a3 = result[2] * a4[2] + *result * *a4 + result[1] * a4[1];
      v10 = v7 + v8;
      v11 = v9;
      v12 = *result * a4[6] + result[1] * a4[7];
      v13 = v10 + v11;
      v14 = result[2] * a4[8];
      a3[1] = v13;
      result += 3;
      a3 += 3;
      a3[0xFFFFFFFF] = v12 + v14;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
