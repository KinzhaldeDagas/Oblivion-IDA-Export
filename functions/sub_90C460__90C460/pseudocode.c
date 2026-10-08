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

  v3 = a3; /*0x90c461*/
  *(_DWORD *)(a1 + 8) = 0; /*0x90c46b*/
  *(_WORD *)(a1 + 6) = 1; /*0x90c46e*/
  *(_DWORD *)a1 = &off_A9C324; /*0x90c474*/
  *(_DWORD *)(a1 + 0x60) = 0; /*0x90c47a*/
  *(_DWORD *)(a1 + 0x64) = 0; /*0x90c47d*/
  *(_DWORD *)(a1 + 0x68) = 0x80000000; /*0x90c481*/
  v5 = a1 + 0x60; /*0x90c48b*/
  *(float *)(a1 + 0xC) = v3[3]; /*0x90c48e*/
  *(float *)(a1 + 0x10) = v3[4]; /*0x90c494*/
  v6 = (_BYTE *)(*(int (__usercall **)@<eax>(float *@<ecx>, float **, double@<st0>))(*(_DWORD *)v3 + 0x28))(v3, &a3, a2); /*0x90c4a0*/
  v7 = *(_DWORD *)(a1 + 0xC) * *(_DWORD *)(a1 + 0x10); /*0x90c4a8*/
  *(_BYTE *)(a1 + 0x6C) = *v6; /*0x90c4ac*/
  *(float *)(a1 + 0x14) = v3[5]; /*0x90c4b2*/
  *(_OWORD *)(a1 + 0x20) = *((_OWORD *)v3 + 2); /*0x90c4b9*/
  *(_OWORD *)(a1 + 0x30) = *((_OWORD *)v3 + 3); /*0x90c4c1*/
  *(_OWORD *)(a1 + 0x40) = *((_OWORD *)v3 + 4); /*0x90c4c9*/
  *(_OWORD *)(a1 + 0x50) = *((_OWORD *)v3 + 5); /*0x90c4d1*/
  v8 = *(_DWORD *)(v5 + 8) & 0x3FFFFFFF; /*0x90c4d8*/
  if ( v8 < v7 ) /*0x90c4df*/
  {
    v9 = 2 * v8; /*0x90c4e1*/
    if ( v7 >= v9 ) /*0x90c4e5*/
      v9 = v7; /*0x90c4e7*/
    sub_8A6E40((const void **)v5, v9, 4); /*0x90c4ed*/
  }
  *(_DWORD *)(v5 + 4) = v7; /*0x90c4f5*/
  for ( i = 0; i < *(_DWORD *)(a1 + 0x10); ++i ) /*0x90c4ff*/
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 0xC); *a3 = v13 ) /*0x90c508*/
    {
      v12 = *(_DWORD *)v3; /*0x90c51e*/
      a3 = (float *)(*(_DWORD *)(a1 + 0x60) + 4 * (j + i * *(_DWORD *)(a1 + 0xC))); /*0x90c524*/
      v13 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v12 + 0x24))(v3, j++, i); /*0x90c528*/
    }
  }
  return a1; /*0x90c541*/
}
