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

  result = (float *)a1; /*0x716f43*/
  v5 = a1; /*0x716f4b*/
  if ( a1 ) /*0x716f51*/
  {
    result = a2; /*0x716f55*/
    do /*0x716fb9*/
    {
      v7 = *result * a4[3]; /*0x716f7b*/
      v8 = result[1] * a4[4]; /*0x716f80*/
      v9 = result[2] * a4[5]; /*0x716f89*/
      *a3 = result[2] * a4[2] + *result * *a4 + result[1] * a4[1]; /*0x716f8b*/
      v10 = v7 + v8; /*0x716f8d*/
      v11 = v9; /*0x716f94*/
      v12 = *result * a4[6] + result[1] * a4[7]; /*0x716fa6*/
      v13 = v10 + v11; /*0x716fa8*/
      v14 = result[2] * a4[8]; /*0x716fa8*/
      a3[1] = v13; /*0x716faa*/
      result += 3; /*0x716faf*/
      a3 += 3; /*0x716fb2*/
      a3[0xFFFFFFFF] = v12 + v14; /*0x716fb5*/
      --v5; /*0x716fb8*/
    }
    while ( v5 ); /*0x716fb9*/
  }
  return result; /*0x716fbb*/
}
