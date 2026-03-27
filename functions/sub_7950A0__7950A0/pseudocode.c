unsigned int __thiscall sub_7950A0(_DWORD *this, int a2, _DWORD *Src, unsigned int a4, int *a5)
{
  int v6; // edx
  unsigned int result; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  char *v14; // edi
  char *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ebx
  char *v20; // ebp
  int v21; // eax
  int v22; // ebx
  int v23; // [esp+14h] [ebp+Ch]
  int v24; // [esp+14h] [ebp+Ch]

  v6 = *(this + 1);
  a5 = (int *)*a5;
  if ( v6 )
    result = (*(this + 3) - v6) >> 2;
  else
    result = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(this + 2) - v6) >> 2;
    else
      v9 = 0;
    if ( 0xFFFFFFFF - v9 < a4 )
      sub_790B90(0xFFFFFFFF - v9);
    if ( v6 )
      v10 = (*(this + 2) - v6) >> 2;
    else
      v10 = 0;
    if ( result >= a4 + v10 )
    {
      v20 = (char *)*(this + 2);
      v21 = 4 * a4;
      v24 = 4 * a4;
      if ( (v20 - (char *)Src) >> 2 >= a4 )
      {
        v22 = (int)&v20[-v21];
        *(this + 2) = sub_7A25C0(&v20[-v21], (int)v20, v20);
        sub_5254A0(Src, v22, (int)v20);
        return (unsigned int)sub_790490(Src, &Src[v24 / 4u], &a5);
      }
      else
      {
        sub_7A25C0(Src, (int)v20, &Src[v21 / 4u]);
        sub_790B60((_DWORD *)*(this + 2), a4 - ((*(this + 2) - (int)Src) >> 2), &a5);
        *(this + 2) += v24;
        return (unsigned int)sub_790490(Src, (_DWORD *)(*(this + 2) - v24), &a5);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (result >> 1) >= result )
        v11 = (result >> 1) + result;
      else
        v11 = 0;
      if ( v6 )
        v12 = (*(this + 2) - v6) >> 2;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v6 )
          v13 = (*(this + 2) - v6) >> 2;
        else
          v13 = 0;
        v11 = a4 + v13;
      }
      v23 = 4 * v11;
      v14 = (char *)FormHeapAlloc(4 * v11);
      v15 = sub_7A25C0((void *)*(this + 1), (int)Src, v14);
      v16 = sub_790B60(v15, a4, &a5);
      sub_7A25C0(Src, *(this + 2), v16);
      v17 = *(this + 1);
      if ( v17 )
        v18 = (*(this + 2) - v17) >> 2;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
        FormHeapFree(*(this + 1));
      *(this + 1) = v14;
      *(this + 3) = &v14[v23];
      *(this + 2) = &v14[4 * v19];
      return (unsigned int)&v14[v23];
    }
  }
  return result;
}
