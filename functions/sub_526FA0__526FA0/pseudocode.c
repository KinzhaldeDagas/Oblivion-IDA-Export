void __thiscall sub_526FA0(_DWORD *this, int a2, char *Src, unsigned int a4, int *a5)
{
  int v6; // edx
  unsigned int v7; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  char *v14; // edi
  float *v15; // eax
  void *v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ebx
  _BYTE *v20; // ebp
  bool v21; // cf
  int v22; // eax
  int v23; // ebx
  int v24; // [esp+14h] [ebp+Ch]
  int v25; // [esp+14h] [ebp+Ch]

  a5 = *(int **)a5;
  v6 = *(this + 1);
  if ( v6 )
    v7 = (*(this + 3) - v6) >> 2;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(this + 2) - v6) >> 2;
    else
      v9 = 0;
    if ( 0xFFFFFFFF - v9 < a4 )
      sub_790B90();
    if ( v6 )
      v10 = (*(this + 2) - v6) >> 2;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v20 = (_BYTE *)*(this + 2);
      v21 = (v20 - Src) >> 2 < a4;
      v22 = 4 * a4;
      v25 = 4 * a4;
      if ( v21 )
      {
        sub_7A25C0(Src, (int)v20, &Src[v22]);
        sub_784B30((float *)*(this + 2), a4 - ((*(this + 2) - (int)Src) >> 2), (float *)&a5);
        *(this + 2) += v25;
        sub_523AF0((int)Src, *(this + 2) - v25, (float *)&a5);
      }
      else
      {
        v23 = (int)&v20[-v22];
        *(this + 2) = sub_7A25C0(&v20[-v22], (int)v20, v20);
        sub_5254A0(Src, v23, (int)v20);
        sub_523AF0((int)Src, (int)&Src[v25], (float *)&a5);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
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
      v24 = 4 * v11;
      v14 = (char *)FormHeapAlloc(4 * v11);
      v15 = (float *)sub_7A25C0((void *)*(this + 1), (int)Src, v14);
      v16 = (void *)sub_784B30(v15, a4, (float *)&a5);
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
      *(this + 3) = &v14[v24];
      *(this + 2) = &v14[4 * v19];
    }
  }
}
