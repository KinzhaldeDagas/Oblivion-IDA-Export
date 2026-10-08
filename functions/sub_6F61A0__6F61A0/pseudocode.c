_DWORD *__userpurge sub_6F61A0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, int a3)
{
  int v3; // eax
  char *v5; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebp
  char *v9; // eax
  unsigned int v10; // edi
  char *v11; // ebx
  rsize_t v13; // [esp-4h] [ebp-10h]

  v3 = *(_DWORD *)(a3 + 4); /*0x6f61a5*/
  if ( v3 ) /*0x6f61b0*/
    v5 = (char *)(*(_DWORD *)(a3 + 8) - v3); /*0x6f61b9*/
  else
    v5 = 0; /*0x6f61b2*/
  *(this + 1) = 0; /*0x6f61bd*/
  *(this + 2) = 0; /*0x6f61c0*/
  *(this + 3) = 0; /*0x6f61c3*/
  if ( v5 ) /*0x6f61c6*/
  {
    v6 = sub_412E70(v5); /*0x6f61d4*/
    *(this + 1) = v6; /*0x6f61d9*/
    *(this + 2) = v6; /*0x6f61dc*/
    *(this + 3) = (char *)v6 + (_DWORD)v5; /*0x6f61e1*/
    v7 = *(_DWORD *)(a3 + 8); /*0x6f61e4*/
    if ( *(_DWORD *)(a3 + 4) > v7 ) /*0x6f61ed*/
      _invalid_parameter_noinfo(); /*0x6f61ef*/
    LODWORD(v13) = a2; /*0x6f61f4*/
    v8 = *(_DWORD *)(a3 + 4); /*0x6f61f5*/
    if ( v8 > *(_DWORD *)(a3 + 8) ) /*0x6f61fb*/
      _invalid_parameter_noinfo(); /*0x6f61fd*/
    v9 = (char *)*(this + 1); /*0x6f6202*/
    v10 = v7 - v8; /*0x6f6205*/
    v11 = &v9[v10]; /*0x6f6207*/
    if ( v10 ) /*0x6f620a*/
      memmove_s(v9, __PAIR64__(v8, v10), (const void *)v10, v13); /*0x6f6210*/
    *(this + 2) = v11; /*0x6f6218*/
  }
  return this; /*0x6f621c*/
}
