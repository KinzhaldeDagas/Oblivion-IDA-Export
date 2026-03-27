unsigned int __stdcall sub_9A6370(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  char v5; // al
  int v6; // edi
  int v7; // edi
  double v8; // st7
  int v9; // edi
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 0x14);
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v4] == 1 )
  {
    dword_BAA930 = **(unsigned __int8 **)(a2 + 0x30);
    v5 = (*(int (__thiscall **)(int, int, int *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &dword_BAA930, 0);
    goto LABEL_27;
  }
  v6 = *(_DWORD *)(a2 + 0x14);
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v6] == 3 )
  {
    dword_BAA934 = **(_DWORD **)(a2 + 0x30);
    dword_BAA938 = dword_BAA934;
    dword_BAA93C = dword_BAA934;
    dword_BAA940 = dword_BAA934;
    v5 = (*(int (__thiscall **)(int, int, int *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &dword_BAA934, 0);
    goto LABEL_27;
  }
  v7 = *(_DWORD *)(a2 + 0x14);
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v7] == 4 )
  {
    flt_BAA990 = **(float **)(a2 + 0x30);
    v8 = flt_BAA990;
    flt_BAA994 = flt_BAA990;
    flt_BAA998 = flt_BAA990;
LABEL_26:
    flt_BAA99C = v8;
    v5 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &flt_BAA990, 0);
    goto LABEL_27;
  }
  v9 = *(_DWORD *)(a2 + 0x14);
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v9] == 5 )
  {
    v10 = *(float **)(a2 + 0x30);
    flt_BAA990 = *v10;
    flt_BAA994 = v10[1];
    flt_BAA998 = flt_BAA990;
    v8 = flt_BAA994;
    goto LABEL_26;
  }
  if ( sub_783370((_DWORD *)a2) )
  {
    v11 = *(float **)(a2 + 0x30);
    flt_BAA990 = *v11;
    flt_BAA994 = v11[1];
    flt_BAA998 = v11[2];
    v8 = 1.0;
    goto LABEL_26;
  }
  if ( sub_7833A0((_DWORD *)a2) || sub_7833D0((_DWORD *)a2) )
  {
    v13 = *(float **)(a2 + 0x30);
    flt_BAA990 = *v13;
    flt_BAA994 = v13[1];
    flt_BAA998 = v13[2];
    v8 = v13[3];
    goto LABEL_26;
  }
  if ( sub_782DE0((_DWORD *)a2) )
  {
    v12 = *(float **)(a2 + 0x30);
    flt_BAA9A0 = *v12;
    flt_BAA9A4 = v12[1];
    flt_BAA9A8 = v12[2];
    flt_BAA9AC = 0.0;
    flt_BAA9B0 = v12[3];
    flt_BAA9B4 = v12[4];
    flt_BAA9B8 = v12[5];
    flt_BAA9BC = 0.0;
    flt_BAA9C0 = v12[6];
    flt_BAA9C4 = v12[7];
    flt_BAA9C8 = v12[8];
    flt_BAA9CC = 0.0;
    v5 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &flt_BAA9A0, 0);
  }
  else
  {
    if ( !sub_782E10((_DWORD *)a2) )
      return v3;
    v5 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, *(_DWORD *)(a2 + 0x30), 0);
  }
LABEL_27:
  if ( !v5 )
    return 0x80000050;
  return v3;
}
