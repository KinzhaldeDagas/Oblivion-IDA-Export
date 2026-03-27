void __userpurge sub_557340(_DWORD *a1@<ecx>, int a2@<ebp>, _DWORD *a3)
{
  int v3; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebp
  char *v9; // eax
  unsigned int v10; // edi
  char *v11; // ebx
  rsize_t v12; // [esp-4h] [ebp-10h]

  v3 = a3[1];
  if ( v3 )
    v5 = a3[2] - v3;
  else
    v5 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  if ( v5 )
  {
    v6 = FormHeapAlloc(v5);
    a1[1] = v6;
    a1[2] = v6;
    a1[3] = v5 + v6;
    v7 = a3[2];
    if ( a3[1] > v7 )
      _invalid_parameter_noinfo();
    LODWORD(v12) = a2;
    v8 = a3[1];
    if ( v8 > a3[2] )
      _invalid_parameter_noinfo();
    v9 = (char *)a1[1];
    v10 = v7 - v8;
    v11 = &v9[v10];
    if ( v10 )
      memmove_s(v9, __PAIR64__(v8, v10), (const void *)v10, v12);
    a1[2] = v11;
  }
}
