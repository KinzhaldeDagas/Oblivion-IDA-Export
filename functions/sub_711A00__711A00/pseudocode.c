int __fastcall sub_711A00(float *a1)
{
  double v1; // st7
  int v2; // esi
  int v3; // edx
  __int16 v4; // fps
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax
  bool v9; // c0
  char v10; // c2
  bool v11; // c3
  float v12; // [esp+4h] [ebp-4h]

  v1 = flt_A7E738;
  v2 = 3;
  do
  {
    v3 = 3;
    do
    {
      v12 = fabs(*a1);
      v5 = v12 < v1;
      v6 = 0;
      v7 = v12 == v1;
      LOWORD(result) = v4;
      if ( v12 <= v1 )
      {
        v9 = *a1 > 0.0;
        v10 = 0;
        v11 = 0.0 == *a1;
        LOWORD(result) = v4;
        if ( 0.0 != *a1 )
          *a1 = 0.0;
      }
      ++a1;
      --v3;
    }
    while ( v3 );
    --v2;
  }
  while ( v2 );
  return result;
}
