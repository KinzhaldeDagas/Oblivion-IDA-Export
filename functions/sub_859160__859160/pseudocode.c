NiTPointerList_Node_void *__thiscall sub_859160(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        NiTPointerList_Node_void *a5,
        int a6,
        char *a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12)
{
  char *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  NiTPointerList_Node_void *result; // eax

  v13 = a7;
  if ( a8 )
  {
    if ( a9 )
    {
      if ( (_BYTE)a6 != 1 )
        goto LABEL_30;
      v21 = FormHeapAlloc(0x10u);
      a6 = v21;
      if ( v21 )
      {
        v15 = sub_7E2370(v21, a2, 0xEC, *v13, 2u, a3);
        goto LABEL_29;
      }
    }
    else if ( a11 )
    {
      if ( (_BYTE)a6 != 1 )
        goto LABEL_30;
      v20 = FormHeapAlloc(0x10u);
      a6 = v20;
      if ( v20 )
      {
        v15 = sub_7E2370(v20, a2, 0xED, *v13, 2u, a3);
        goto LABEL_29;
      }
    }
    else
    {
      if ( (_BYTE)a6 != 1 )
        goto LABEL_30;
      v19 = FormHeapAlloc(0x10u);
      a6 = v19;
      if ( v19 )
      {
        v15 = sub_7E2370(v19, a2, 0xEB, *v13, 2u, a3);
        goto LABEL_29;
      }
    }
    goto LABEL_28;
  }
  if ( a9 )
  {
    if ( (_BYTE)a6 != 1 )
      goto LABEL_30;
    v18 = FormHeapAlloc(0x10u);
    a6 = v18;
    if ( v18 )
    {
      v15 = sub_7E2370(v18, a2, 0xE9, *v13, 2u, a3);
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( a11 )
  {
    if ( (_BYTE)a6 != 1 )
      goto LABEL_30;
    v17 = FormHeapAlloc(0x10u);
    a6 = v17;
    if ( v17 )
    {
      v15 = sub_7E2370(v17, a2, 0xEA, *v13, 2u, a3);
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( a12 )
  {
    if ( (_BYTE)a6 != 1 )
      goto LABEL_30;
    v16 = FormHeapAlloc(0x10u);
    a6 = v16;
    if ( v16 )
    {
      v15 = sub_7E2370(v16, a2, 0xEE, *v13, 2u, a3);
      goto LABEL_29;
    }
LABEL_28:
    v15 = 0;
    goto LABEL_29;
  }
  if ( (_BYTE)a6 != 1 )
  {
LABEL_30:
    result = a5;
    ++LOWORD(a5->next);
    goto LABEL_31;
  }
  v14 = FormHeapAlloc(0x10u);
  a6 = v14;
  if ( !v14 )
    goto LABEL_28;
  v15 = sub_7E2370(v14, a2, 0xE8, *v13, 2u, a3);
LABEL_29:
  a6 = v15;
  result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
LABEL_31:
  *v13 = 0;
  return result;
}
