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

  v3 = *(_DWORD *)(a3 + 4);
  if ( v3 )
    v5 = (char *)(*(_DWORD *)(a3 + 8) - v3);
  else
    v5 = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( v5 )
  {
    v6 = sub_412E70(v5);
    *(this + 1) = v6;
    *(this + 2) = v6;
    *(this + 3) = (char *)v6 + (_DWORD)v5;
    v7 = *(_DWORD *)(a3 + 8);
    if ( *(_DWORD *)(a3 + 4) > v7 )
      _invalid_parameter_noinfo();
    LODWORD(v13) = a2;
    v8 = *(_DWORD *)(a3 + 4);
    if ( v8 > *(_DWORD *)(a3 + 8) )
      _invalid_parameter_noinfo();
    v9 = (char *)*(this + 1);
    v10 = v7 - v8;
    v11 = &v9[v10];
    if ( v10 )
      memmove_s(v9, __PAIR64__(v8, v10), (const void *)v10, v13);
    *(this + 2) = v11;
  }
  return this;
}
