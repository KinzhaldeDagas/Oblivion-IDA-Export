_DWORD *__userpurge sub_795510@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, int a3)
{
  char *v4; // ebx
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ecx
  char *v13; // ebx
  int v14; // ecx
  unsigned int v15; // eax

  if ( this == (_DWORD *)a3 )
    return this;
  v4 = *(char **)(a3 + 4);
  if ( !v4 || (a2 = *(_DWORD *)(a3 + 8), (v5 = (a2 - (int)v4) >> 1) == 0) )
  {
    sub_794F40(this, a2);
    return this;
  }
  v7 = *(this + 1);
  if ( v7 )
    v8 = (*(this + 2) - v7) >> 1;
  else
    v8 = 0;
  if ( v5 <= v8 )
  {
    sub_794E00(v4, a2, (char *)*(this + 1));
    v9 = *(_DWORD *)(a3 + 4);
    if ( v9 )
      v10 = *(this + 1) + 2 * ((*(_DWORD *)(a3 + 8) - v9) >> 1);
    else
      v10 = *(this + 1);
    *(this + 2) = v10;
    return this;
  }
  if ( v7 )
    v11 = (*(this + 3) - v7) >> 1;
  else
    v11 = 0;
  if ( v5 > v11 )
  {
    if ( v7 )
      FormHeapFree(*(this + 1));
    v14 = *(_DWORD *)(a3 + 4);
    if ( v14 )
      v15 = (*(_DWORD *)(a3 + 8) - v14) >> 1;
    else
      v15 = 0;
    if ( sub_795260(this, v15) )
      *(this + 2) = sub_794E80(*(void **)(a3 + 4), *(_DWORD *)(a3 + 8), (void *)*(this + 1));
    return this;
  }
  if ( v7 )
    v12 = (*(this + 2) - v7) >> 1;
  else
    v12 = 0;
  v13 = &v4[2 * v12];
  sub_794E00(*(void **)(a3 + 4), (int)v13, (char *)*(this + 1));
  *(this + 2) = sub_794E80(v13, *(_DWORD *)(a3 + 8), (void *)*(this + 2));
  return this;
}
