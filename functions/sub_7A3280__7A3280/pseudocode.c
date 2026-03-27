_DWORD *__thiscall sub_7A3280(_DWORD *this, int a2, _DWORD *Src, unsigned int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // ebp
  char *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  _BYTE *v21; // ebp
  int v22; // eax
  bool v23; // cf
  int v24; // ebx
  int v25; // [esp+18h] [ebp+Ch]

  result = a5;
  a5 = (_DWORD *)*a5;
  v7 = *(this + 1);
  if ( v7 )
    v8 = (*(this + 3) - v7) >> 2;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v7 )
      v10 = (*(this + 2) - v7) >> 2;
    else
      v10 = 0;
    if ( 0x3FFFFFFF - v10 < a4 )
      sub_790B90(v8);
    if ( v7 )
      v11 = (*(this + 2) - v7) >> 2;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v21 = (_BYTE *)*(this + 2);
      v22 = 4 * a4;
      v23 = (v21 - (_BYTE *)Src) >> 2 < a4;
      v25 = 4 * a4;
      if ( v23 )
      {
        sub_7A25C0(Src, (int)v21, &Src[v22 / 4u]);
        sub_790B60((_DWORD *)*(this + 2), a4 - ((*(this + 2) - (int)Src) >> 2), &a5);
        *(this + 2) += v25;
        return sub_790490(Src, (_DWORD *)(*(this + 2) - v25), &a5);
      }
      else
      {
        v24 = (int)&v21[-v22];
        *(this + 2) = sub_7A25C0(&v21[-v22], (int)v21, v21);
        sub_5254A0(Src, v24, (int)v21);
        return sub_790490(Src, &Src[v25 / 4u], &a5);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( v7 )
        v13 = (*(this + 2) - v7) >> 2;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
      {
        if ( v7 )
          v14 = (*(this + 2) - v7) >> 2;
        else
          v14 = 0;
        v12 = a4 + v14;
      }
      v15 = sub_78FB60((char *)v12);
      v16 = sub_7A25C0((void *)*(this + 1), (int)Src, v15);
      v17 = sub_790B60(v16, a4, &a5);
      sub_7A25C0(Src, *(this + 2), v17);
      v18 = *(this + 1);
      if ( v18 )
        v19 = (*(this + 2) - v18) >> 2;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        FormHeapFree(*(this + 1));
      result = &v15[v20];
      *(this + 1) = v15;
      *(this + 3) = &v15[v12];
      *(this + 2) = result;
    }
  }
  return result;
}
