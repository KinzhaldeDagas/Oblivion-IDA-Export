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

  v1 = flt_A7E738; /*0x711a01*/
  v2 = 3; /*0x711a0a*/
  do /*0x711a3f*/
  {
    v3 = 3; /*0x711a0f*/
    do /*0x711a3a*/
    {
      v12 = fabs(*a1); /*0x711a18*/
      v5 = v12 < v1; /*0x711a20*/
      v6 = 0; /*0x711a20*/
      v7 = v12 == v1; /*0x711a20*/
      LOWORD(result) = v4; /*0x711a22*/
      if ( v12 <= v1 ) /*0x711a27*/
      {
        v9 = *a1 > 0.0; /*0x711a29*/
        v10 = 0; /*0x711a29*/
        v11 = 0.0 == *a1; /*0x711a29*/
        LOWORD(result) = v4; /*0x711a2b*/
        if ( 0.0 != *a1 ) /*0x711a30*/
          *a1 = 0.0; /*0x711a32*/
      }
      ++a1; /*0x711a34*/
      --v3; /*0x711a37*/
    }
    while ( v3 ); /*0x711a3a*/
    --v2; /*0x711a3c*/
  }
  while ( v2 ); /*0x711a3f*/
  return result; /*0x711a46*/
}
