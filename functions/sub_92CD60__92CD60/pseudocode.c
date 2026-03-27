int __cdecl sub_92CD60(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7

  result = *(_DWORD *)(a1 + 4);
  if ( result > 0 )
  {
    *(_OWORD *)a2 = *(_OWORD *)*(_DWORD *)a1;
    *(_OWORD *)(a2 + 0x10) = *(_OWORD *)*(_DWORD *)a1;
    result = *(_DWORD *)(a1 + 4);
    v3 = 0;
    if ( result > 0 )
    {
      v4 = 0;
      do
      {
        v5 = *(float *)(v4 + *(_DWORD *)a1);
        if ( *(float *)a2 < v5 )
          v5 = *(float *)a2;
        *(float *)a2 = v5;
        v6 = *(float *)(v4 + *(_DWORD *)a1);
        if ( *(float *)(a2 + 0x10) > v6 )
          v6 = *(float *)(a2 + 0x10);
        *(float *)(a2 + 0x10) = v6;
        v7 = *(float *)(v4 + *(_DWORD *)a1 + 4);
        if ( *(float *)(a2 + 4) < v7 )
          v7 = *(float *)(a2 + 4);
        *(float *)(a2 + 4) = v7;
        v8 = *(float *)(v4 + *(_DWORD *)a1 + 4);
        if ( *(float *)(a2 + 0x14) > v8 )
          v8 = *(float *)(a2 + 0x14);
        *(float *)(a2 + 0x14) = v8;
        v9 = *(float *)(v4 + *(_DWORD *)a1 + 8);
        if ( *(float *)(a2 + 8) < v9 )
          v9 = *(float *)(a2 + 8);
        *(float *)(a2 + 8) = v9;
        v10 = *(float *)(v4 + *(_DWORD *)a1 + 8);
        if ( *(float *)(a2 + 0x18) > v10 )
          v10 = *(float *)(a2 + 0x18);
        *(float *)(a2 + 0x18) = v10;
        result = *(_DWORD *)(a1 + 4);
        ++v3;
        v4 += 0x10;
      }
      while ( v3 < result );
    }
  }
  return result;
}
