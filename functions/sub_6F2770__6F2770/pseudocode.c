unsigned int *__thiscall sub_6F2770(unsigned int *this, int a2)
{
  char *v3; // ebx
  unsigned int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  char *v12; // ebx
  int v13; // ecx
  int v14; // eax

  if ( this == (unsigned int *)a2 )
    return this;
  v3 = *(char **)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - (int)v3) >> 2) == 0 )
  {
    sub_784A70((int)this);
    return this;
  }
  v6 = *(this + 1);
  if ( v6 )
    v7 = (int)(*(this + 2) - v6) >> 2;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_790420(v3, *(_DWORD *)(a2 + 8), (void *)*(this + 1));
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      v9 = *(this + 1) + 4 * ((*(_DWORD *)(a2 + 8) - v8) >> 2);
    else
      v9 = *(this + 1);
    *(this + 2) = v9;
    return this;
  }
  if ( v6 )
    v10 = (int)(*(this + 3) - v6) >> 2;
  else
    v10 = 0;
  if ( v4 > v10 )
  {
    if ( v6 )
      FormHeapFree(*(this + 1));
    v13 = *(_DWORD *)(a2 + 4);
    if ( v13 )
      v14 = (*(_DWORD *)(a2 + 8) - v13) >> 2;
    else
      v14 = 0;
    if ( sub_6F1BF0(this, v14) )
      *(this + 2) = (unsigned int)sub_7A25C0(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), (void *)*(this + 1));
    return this;
  }
  if ( v6 )
    v11 = (int)(*(this + 2) - v6) >> 2;
  else
    v11 = 0;
  v12 = &v3[4 * v11];
  sub_790420(*(void **)(a2 + 4), (int)v12, (void *)*(this + 1));
  *(this + 2) = (unsigned int)sub_7A25C0(v12, *(_DWORD *)(a2 + 8), (void *)*(this + 2));
  return this;
}
