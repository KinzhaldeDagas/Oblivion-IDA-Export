int __userpurge sub_90C460@<eax>(int a1@<ecx>, double a2@<st0>, float *a3)
{
  float *v3; // ebx
  int v5; // edi
  _BYTE *v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int i; // ebp
  int j; // edi
  int v12; // eax
  double v13; // st7

  v3 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_A9C324;
  *(_DWORD *)(a1 + 0x60) = 0;
  *(_DWORD *)(a1 + 0x64) = 0;
  *(_DWORD *)(a1 + 0x68) = 0x80000000;
  v5 = a1 + 0x60;
  *(float *)(a1 + 0xC) = v3[3];
  *(float *)(a1 + 0x10) = v3[4];
  v6 = (_BYTE *)(*(int (__usercall **)@<eax>(float *@<ecx>, float **, double@<st0>))(*(_DWORD *)v3 + 0x28))(v3, &a3, a2);
  v7 = *(_DWORD *)(a1 + 0xC) * *(_DWORD *)(a1 + 0x10);
  *(_BYTE *)(a1 + 0x6C) = *v6;
  *(float *)(a1 + 0x14) = v3[5];
  *(_OWORD *)(a1 + 0x20) = *((_OWORD *)v3 + 2);
  *(_OWORD *)(a1 + 0x30) = *((_OWORD *)v3 + 3);
  *(_OWORD *)(a1 + 0x40) = *((_OWORD *)v3 + 4);
  *(_OWORD *)(a1 + 0x50) = *((_OWORD *)v3 + 5);
  v8 = *(_DWORD *)(v5 + 8) & 0x3FFFFFFF;
  if ( v8 < v7 )
  {
    v9 = 2 * v8;
    if ( v7 >= v9 )
      v9 = v7;
    sub_8A6E40((const void **)v5, v9, 4);
  }
  *(_DWORD *)(v5 + 4) = v7;
  for ( i = 0; i < *(_DWORD *)(a1 + 0x10); ++i )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 0xC); *a3 = v13 )
    {
      v12 = *(_DWORD *)v3;
      a3 = (float *)(*(_DWORD *)(a1 + 0x60) + 4 * (j + i * *(_DWORD *)(a1 + 0xC)));
      v13 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v12 + 0x24))(v3, j++, i);
    }
  }
  return a1;
}
