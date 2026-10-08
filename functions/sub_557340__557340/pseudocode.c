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

  v3 = a3[1]; /*0x557345*/
  if ( v3 ) /*0x557350*/
    v5 = a3[2] - v3; /*0x557359*/
  else
    v5 = 0; /*0x557352*/
  a1[1] = 0; /*0x55735d*/
  a1[2] = 0; /*0x557360*/
  a1[3] = 0; /*0x557363*/
  if ( v5 ) /*0x557366*/
  {
    v6 = FormHeapAlloc(v5); /*0x557373*/
    a1[1] = v6; /*0x557378*/
    a1[2] = v6; /*0x55737b*/
    a1[3] = v5 + v6; /*0x557380*/
    v7 = a3[2]; /*0x557383*/
    if ( a3[1] > v7 ) /*0x55738c*/
      _invalid_parameter_noinfo(); /*0x55738e*/
    LODWORD(v12) = a2; /*0x557393*/
    v8 = a3[1]; /*0x557394*/
    if ( v8 > a3[2] ) /*0x55739a*/
      _invalid_parameter_noinfo(); /*0x55739c*/
    v9 = (char *)a1[1]; /*0x5573a1*/
    v10 = v7 - v8; /*0x5573a4*/
    v11 = &v9[v10]; /*0x5573a6*/
    if ( v10 ) /*0x5573a9*/
      memmove_s(v9, __PAIR64__(v8, v10), (const void *)v10, v12); /*0x5573af*/
    a1[2] = v11; /*0x5573b7*/
  }
}
