int __cdecl sub_8B8800(_DWORD *a1, int a2, int a3, int a4)
{
  float *v4; // edx
  int result; // eax
  int v6; // esi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st6
  __int16 v14; // fps
  bool v15; // c0
  char v16; // c2
  bool v17; // c3

  *(_DWORD *)a4 = *a1; /*0x8b880a*/
  *(_DWORD *)(a4 + 4) = a1[1]; /*0x8b880f*/
  v4 = (float *)(a1 + 2); /*0x8b8812*/
  *(_DWORD *)(a4 + 8) = a1[2]; /*0x8b8817*/
  result = a2; /*0x8b881a*/
  *(_DWORD *)(a4 + 0xC) = 0; /*0x8b8820*/
  *(_OWORD *)(a4 + 0x10) = *(_OWORD *)a4; /*0x8b882a*/
  if ( a2 > 0 ) /*0x8b882e*/
  {
    v6 = a2; /*0x8b883a*/
    do /*0x8b88e7*/
    {
      v7 = v4[0xFFFFFFFE]; /*0x8b8840*/
      if ( *(float *)(a4 + 0x10) > v7 ) /*0x8b8851*/
        v7 = *(float *)(a4 + 0x10); /*0x8b8855*/
      *(float *)(a4 + 0x10) = v7; /*0x8b8859*/
      v8 = v4[0xFFFFFFFF]; /*0x8b885c*/
      if ( *(float *)(a4 + 0x14) > v8 ) /*0x8b886d*/
        v8 = *(float *)(a4 + 0x14); /*0x8b8871*/
      *(float *)(a4 + 0x14) = v8; /*0x8b8875*/
      v9 = *v4; /*0x8b8878*/
      if ( *(float *)(a4 + 0x18) > v9 ) /*0x8b8888*/
        v9 = *(float *)(a4 + 0x18); /*0x8b888c*/
      *(float *)(a4 + 0x18) = v9; /*0x8b8890*/
      v10 = v4[0xFFFFFFFE]; /*0x8b8893*/
      if ( *(float *)a4 < v10 ) /*0x8b88a3*/
        v10 = *(float *)a4; /*0x8b88a7*/
      *(float *)a4 = v10; /*0x8b88ab*/
      v11 = v4[0xFFFFFFFF]; /*0x8b88ad*/
      if ( *(float *)(a4 + 4) < v11 ) /*0x8b88be*/
        v11 = *(float *)(a4 + 4); /*0x8b88c2*/
      *(float *)(a4 + 4) = v11; /*0x8b88c6*/
      v12 = *v4; /*0x8b88c9*/
      v13 = *(float *)(a4 + 8); /*0x8b88cb*/
      v15 = v13 < v12; /*0x8b88d2*/
      v16 = 0; /*0x8b88d2*/
      v17 = v13 == v12; /*0x8b88d2*/
      LOWORD(result) = v14; /*0x8b88d4*/
      if ( v13 < v12 ) /*0x8b88d9*/
        v12 = *(float *)(a4 + 8); /*0x8b88dd*/
      v4 = (float *)((char *)v4 + a3); /*0x8b88e1*/
      *(float *)(a4 + 8) = v12; /*0x8b88e3*/
      --v6; /*0x8b88e6*/
    }
    while ( v6 ); /*0x8b88e7*/
  }
  return result; /*0x8b88ef*/
}
