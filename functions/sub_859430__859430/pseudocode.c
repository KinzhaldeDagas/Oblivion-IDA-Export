NiTPointerList_Node_void *__thiscall sub_859430(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        NiTPointerList_Node_void *a6,
        int a7,
        char *a8,
        char a9,
        char a10,
        int a11,
        char a12,
        char a13)
{
  char *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  NiTPointerList_Node_void *result; // eax

  v14 = a8;
  if ( a9 )
  {
    if ( a10 )
    {
      if ( (_BYTE)a7 != 1 )
        goto LABEL_30;
      v22 = FormHeapAlloc(0x10u);
      a7 = v22;
      if ( v22 )
      {
        v16 = sub_7E2370(v22, a2, 0xFA, *v14, 3u, a3);
        goto LABEL_29;
      }
    }
    else if ( a12 )
    {
      if ( (_BYTE)a7 != 1 )
        goto LABEL_30;
      v21 = FormHeapAlloc(0x10u);
      a7 = v21;
      if ( v21 )
      {
        v16 = sub_7E2370(v21, a2, 0xFB, *v14, 3u, a3);
        goto LABEL_29;
      }
    }
    else
    {
      if ( (_BYTE)a7 != 1 )
        goto LABEL_30;
      v20 = FormHeapAlloc(0x10u);
      a7 = v20;
      if ( v20 )
      {
        v16 = sub_7E2370(v20, a2, 0xF9, *v14, 3u, a3);
        goto LABEL_29;
      }
    }
    goto LABEL_28;
  }
  if ( a10 )
  {
    if ( (_BYTE)a7 != 1 )
      goto LABEL_30;
    v19 = FormHeapAlloc(0x10u);
    a7 = v19;
    if ( v19 )
    {
      v16 = sub_7E2370(v19, a2, 0xF7, *v14, 3u, a3);
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( a12 )
  {
    if ( (_BYTE)a7 != 1 )
      goto LABEL_30;
    v18 = FormHeapAlloc(0x10u);
    a7 = v18;
    if ( v18 )
    {
      v16 = sub_7E2370(v18, a2, 0xF8, *v14, 3u, a3);
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( a13 )
  {
    if ( (_BYTE)a7 != 1 )
      goto LABEL_30;
    v17 = FormHeapAlloc(0x10u);
    a7 = v17;
    if ( v17 )
    {
      v16 = sub_7E2370(v17, a2, 0xFC, *v14, 3u, a3);
      goto LABEL_29;
    }
LABEL_28:
    v16 = 0;
    goto LABEL_29;
  }
  if ( (_BYTE)a7 != 1 )
  {
LABEL_30:
    result = a6;
    ++LOWORD(a6->next);
    goto LABEL_31;
  }
  v15 = FormHeapAlloc(0x10u);
  a7 = v15;
  if ( !v15 )
    goto LABEL_28;
  v16 = sub_7E2370(v15, a2, 0xF6, *v14, 3u, a3);
LABEL_29:
  a7 = v16;
  result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a7);
LABEL_31:
  *v14 = 0;
  return result;
}
