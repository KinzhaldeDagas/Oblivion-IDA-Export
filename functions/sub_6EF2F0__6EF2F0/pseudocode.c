char *__userpurge sub_6EF2F0@<eax>(_DWORD *this@<ecx>, int a2@<edi>, int a3, char *Src, unsigned int a5, _BYTE *a6)
{
  char *result; // eax
  unsigned int v8; // ebp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebp
  int v13; // ecx
  int v14; // ecx
  char *v15; // eax
  _BYTE *v16; // ecx
  char *v17; // edi
  void *v18; // eax
  const void *v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // ebx
  int v23; // ebp
  rsize_t v24; // [esp-4h] [ebp-10h]
  char *v25; // [esp+18h] [ebp+Ch]
  void *v26; // [esp+18h] [ebp+Ch]

  result = (char *)*(this + 1);
  LOBYTE(a6) = *a6;
  if ( result )
    v8 = *(this + 3) - (_DWORD)result;
  else
    v8 = 0;
  if ( a5 )
  {
    if ( result )
      v10 = *(this + 2) - (_DWORD)result;
    else
      v10 = 0;
    if ( 0xFFFFFFFF - v10 < a5 )
      sub_790B90();
    if ( result )
      v11 = *(this + 2) - (_DWORD)result;
    else
      v11 = 0;
    LODWORD(v24) = a2;
    if ( v8 >= a5 + v11 )
    {
      v23 = *(this + 2);
      if ( v23 - (int)Src >= a5 )
      {
        v26 = (void *)(v23 - a5);
        *(this + 2) = sub_556CD0(v26, v23, (void *)*(this + 2));
        sub_788A80(Src, (int)v26, v23);
        return sub_6EF2D0(Src, &Src[a5], &a6);
      }
      else
      {
        sub_556CD0(Src, v23, &Src[a5]);
        sub_7890F0((_BYTE *)*(this + 2), (int)&Src[a5 - *(this + 2)], &a6);
        *(this + 2) += a5;
        return sub_6EF2D0(Src, (_BYTE *)(*(this + 2) - a5), &a6);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( result )
        v13 = *(this + 2) - (_DWORD)result;
      else
        v13 = 0;
      if ( v12 < a5 + v13 )
      {
        if ( result )
          v14 = *(this + 2) - (_DWORD)result;
        else
          v14 = 0;
        v12 = v14 + a5;
      }
      v15 = (char *)FormHeapAlloc(v12);
      v16 = (_BYTE *)*(this + 1);
      v17 = v15;
      v25 = &v15[Src - v16];
      if ( Src != v16 )
        memmove_s(v15, __PAIR64__((unsigned int)v16, Src - v16), (const void *)(Src - v16), v24);
      v18 = (void *)sub_7890F0(v25, a5, &a6);
      v19 = (const void *)(*(this + 2) - (_DWORD)Src);
      if ( v19 )
        memmove_s(v18, __PAIR64__((unsigned int)Src, (unsigned int)v19), v19, v24);
      v20 = *(this + 1);
      if ( v20 )
        v21 = *(this + 2) - v20;
      else
        v21 = 0;
      v22 = v21 + a5;
      if ( v20 )
        FormHeapFree(*(this + 1));
      *(this + 1) = v17;
      *(this + 3) = &v17[v12];
      *(this + 2) = &v17[v22];
      return &v17[v22];
    }
  }
  return result;
}
