int __fastcall sub_78EC20(unsigned int *a1, int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // ecx

  *(_DWORD *)(a3 + 0x18) = 0xF;
  *(_DWORD *)(a3 + 0x14) = 0;
  *(_BYTE *)(a3 + 4) = 0;
  v4 = a1[2];
  v5 = *a1;
  if ( !v4 || v5 >= a1[3] - v4 )
    _invalid_parameter_noinfo();
  v6 = a1[2];
  *a1 += 4;
  v7 = *(_DWORD *)(v5 + v6);
  if ( v7 > 0 )
  {
    v8 = v7;
    do
    {
      v9 = (*a1)++;
      v10 = a1[2];
      if ( !v10 || v9 >= a1[3] - v10 )
        _invalid_parameter_noinfo();
      sub_6EDAA0((_DWORD *)a3, v9, 1u, *(_BYTE *)(v9 + a1[2]));
      --v8;
    }
    while ( v8 );
  }
  return a3;
}
