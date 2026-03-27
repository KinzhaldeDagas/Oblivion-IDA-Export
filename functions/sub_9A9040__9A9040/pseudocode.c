float *__stdcall sub_9A9040(_DWORD *a1, int a2)
{
  int v2; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax

  v2 = a1[5];
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v2] == 1 )
  {
    dword_BAA930 = *(unsigned __int8 *)(a2 + 0xC);
    return (float *)&dword_BAA930;
  }
  v4 = a1[5];
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v4] != 2 )
  {
    v5 = a1[5];
    if ( !byte_B4295B )
      sub_783C70();
    if ( dword_B428D8[(unsigned __int8)v5] == 3 )
    {
      dword_BAA934 = *(_DWORD *)(a2 + 0xC);
      dword_BAA938 = dword_BAA934;
      dword_BAA93C = dword_BAA934;
      dword_BAA940 = dword_BAA934;
      return (float *)&dword_BAA934;
    }
    v6 = a1[5];
    if ( !byte_B4295B )
      sub_783C70();
    if ( dword_B428D8[(unsigned __int8)v6] == 4 )
    {
      flt_BAA990 = *(float *)(a2 + 0xC);
      flt_BAA994 = flt_BAA990;
      flt_BAA998 = flt_BAA990;
      flt_BAA99C = flt_BAA990;
      return &flt_BAA990;
    }
    if ( sub_783340(a1) )
    {
      v7 = *(float **)(a2 + 0x10);
      flt_BAA990 = *v7;
      flt_BAA994 = v7[1];
      flt_BAA998 = *v7;
      flt_BAA99C = v7[1];
      return &flt_BAA990;
    }
    if ( sub_783370(a1) )
    {
      v8 = *(float **)(a2 + 0x10);
      flt_BAA990 = *v8;
      flt_BAA994 = v8[1];
      flt_BAA998 = v8[2];
      flt_BAA99C = 1.0;
      return &flt_BAA990;
    }
    if ( sub_7833A0(a1) )
    {
      v9 = *(float **)(a2 + 0x10);
      flt_BAA990 = *v9;
      flt_BAA994 = v9[1];
      flt_BAA998 = v9[2];
      flt_BAA99C = v9[3];
      return &flt_BAA990;
    }
    if ( sub_782DE0(a1) )
    {
      v10 = *(float **)(a2 + 0x10);
      flt_BAA9A0 = *v10;
      flt_BAA9A4 = v10[1];
      flt_BAA9A8 = v10[2];
      flt_BAA9AC = 0.0;
      flt_BAA9B0 = v10[3];
      flt_BAA9B4 = v10[4];
      flt_BAA9B8 = v10[5];
      flt_BAA9BC = 0.0;
      flt_BAA9C0 = v10[6];
      flt_BAA9C4 = v10[7];
      flt_BAA9C8 = v10[8];
      flt_BAA9CC = 0.0;
      return &flt_BAA9A0;
    }
    if ( sub_782E10(a1) )
      return *(float **)(a2 + 0x10);
    if ( sub_7833D0(a1) )
    {
      flt_BAA990 = *(float *)(a2 + 0xC);
      flt_BAA994 = *(float *)(a2 + 0x10);
      flt_BAA998 = *(float *)(a2 + 0x14);
      flt_BAA99C = *(float *)(a2 + 0x18);
      return &flt_BAA990;
    }
    sub_9A32B0(a1);
  }
  return 0;
}
