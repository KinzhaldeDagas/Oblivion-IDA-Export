_DWORD *__userpurge sub_795480@<eax>(_DWORD *this@<ecx>, unsigned int a2@<ebp>, unsigned int a3@<esi>, int a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  char *v11; // ecx
  bool v12; // zf
  int v13; // esi
  const void *v14; // eax
  char *v15; // esi
  rsize_t v17; // [esp-8h] [ebp-10h]

  v5 = *(_DWORD *)(a4 + 4);
  if ( v5 )
    v6 = (*(_DWORD *)(a4 + 8) - v5) >> 1;
  else
    v6 = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( v6 )
  {
    v17 = __PAIR64__(a2, a3);
    v7 = 2 * v6;
    v8 = FormHeapAlloc(2 * v6);
    *(this + 1) = v8;
    *(this + 2) = v8;
    *(this + 3) = v8 + v7;
    v9 = *(_DWORD *)(a4 + 8);
    if ( *(_DWORD *)(a4 + 4) > v9 )
      _invalid_parameter_noinfo();
    v10 = *(_DWORD *)(a4 + 4);
    if ( v10 > *(_DWORD *)(a4 + 8) )
      _invalid_parameter_noinfo();
    v11 = (char *)*(this + 1);
    v13 = (int)(v9 - v10) >> 1;
    v12 = v13 == 0;
    v14 = (const void *)(2 * v13);
    v15 = &v11[2 * v13];
    if ( !v12 )
      memmove_s(v11, __PAIR64__(v10, (unsigned int)v14), v14, v17);
    *(this + 2) = v15;
  }
  return this;
}
