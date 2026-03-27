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

  *(_DWORD *)a4 = *a1;
  *(_DWORD *)(a4 + 4) = a1[1];
  v4 = (float *)(a1 + 2);
  *(_DWORD *)(a4 + 8) = a1[2];
  result = a2;
  *(_DWORD *)(a4 + 0xC) = 0;
  *(_OWORD *)(a4 + 0x10) = *(_OWORD *)a4;
  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      v7 = v4[0xFFFFFFFE];
      if ( *(float *)(a4 + 0x10) > v7 )
        v7 = *(float *)(a4 + 0x10);
      *(float *)(a4 + 0x10) = v7;
      v8 = v4[0xFFFFFFFF];
      if ( *(float *)(a4 + 0x14) > v8 )
        v8 = *(float *)(a4 + 0x14);
      *(float *)(a4 + 0x14) = v8;
      v9 = *v4;
      if ( *(float *)(a4 + 0x18) > v9 )
        v9 = *(float *)(a4 + 0x18);
      *(float *)(a4 + 0x18) = v9;
      v10 = v4[0xFFFFFFFE];
      if ( *(float *)a4 < v10 )
        v10 = *(float *)a4;
      *(float *)a4 = v10;
      v11 = v4[0xFFFFFFFF];
      if ( *(float *)(a4 + 4) < v11 )
        v11 = *(float *)(a4 + 4);
      *(float *)(a4 + 4) = v11;
      v12 = *v4;
      v13 = *(float *)(a4 + 8);
      v15 = v13 < v12;
      v16 = 0;
      v17 = v13 == v12;
      LOWORD(result) = v14;
      if ( v13 < v12 )
        v12 = *(float *)(a4 + 8);
      v4 = (float *)((char *)v4 + a3);
      *(float *)(a4 + 8) = v12;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
