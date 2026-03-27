_DWORD *__userpurge sub_5575C0@<eax>(_DWORD *this@<ecx>, unsigned int a2@<ebp>, unsigned int a3@<edi>, _DWORD *a4)
{
  unsigned int v5; // edi
  void *v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  void *v13; // edi
  int v14; // ecx
  int v15; // eax
  _BYTE v16[12]; // [esp-Ch] [ebp-14h]

  if ( this == a4 )
    return this;
  *(_QWORD *)&v16[4] = __PAIR64__(a2, a3);
  v5 = a4[1];
  if ( !v5 || (a2 = a4[2] - v5) == 0 )
  {
    sub_556E70(this, a2);
    return this;
  }
  v7 = (void *)*(this + 1);
  if ( v7 )
    v8 = *(this + 2) - (_DWORD)v7;
  else
    v8 = 0;
  if ( a2 <= v8 )
  {
    v9 = a4[2] - v5;
    if ( v9 > 0 )
      memmove_s(v7, __PAIR64__(v5, v9), (const void *)(a4[2] - v5), *(rsize_t *)&v16[4]);
    v10 = a4[1];
    if ( v10 )
      *(this + 2) = a4[2] - v10 + *(this + 1);
    else
      *(this + 2) = *(this + 1);
    return this;
  }
  if ( v7 )
    v11 = *(this + 3) - (_DWORD)v7;
  else
    v11 = 0;
  if ( a2 > v11 )
  {
    if ( v7 )
      FormHeapFree(*(this + 1));
    v14 = a4[1];
    if ( v14 )
      v15 = a4[2] - v14;
    else
      v15 = 0;
    *(_DWORD *)v16 = v15;
    if ( sub_557200(this, *(size_t *)v16) )
      *(this + 2) = sub_556CD0((void *)a4[1], a4[2], (void *)*(this + 1));
    return this;
  }
  if ( v7 )
    v12 = *(this + 2) - (_DWORD)v7;
  else
    v12 = 0;
  v13 = (void *)(v5 + v12);
  sub_556CA0((void *)a4[1], (int)v13, (void *)*(this + 1));
  *(this + 2) = sub_556CD0(v13, a4[2], (void *)*(this + 2));
  return this;
}
