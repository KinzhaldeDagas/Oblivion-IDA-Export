NiTPointerList_Node_void *__thiscall sub_854190(
        _DWORD *this,
        int a2,
        NiTPointerList_Node_void *a3,
        int a4,
        char *a5,
        char a6,
        char a7,
        char a8)
{
  char *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  NiTPointerList_Node_void *result; // eax

  v9 = a5;
  if ( a7 )
  {
    if ( (_BYTE)a4 != 1 )
      goto LABEL_22;
    v15 = FormHeapAlloc(0x10u);
    a4 = v15;
    if ( v15 )
    {
      v11 = sub_7E2370(v15, a2, 0x194, *v9, 0, 0);
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if ( a6 )
  {
    if ( a8 )
    {
      if ( (_BYTE)a4 != 1 )
        goto LABEL_22;
      v14 = FormHeapAlloc(0x10u);
      a4 = v14;
      if ( v14 )
      {
        v11 = sub_7E2370(v14, a2, 0x193, *v9, 0, 0);
        goto LABEL_21;
      }
    }
    else
    {
      if ( (_BYTE)a4 != 1 )
        goto LABEL_22;
      v13 = FormHeapAlloc(0x10u);
      a4 = v13;
      if ( v13 )
      {
        v11 = sub_7E2370(v13, a2, 0x192, *v9, 0, 0);
        goto LABEL_21;
      }
    }
    goto LABEL_20;
  }
  if ( a8 )
  {
    if ( (_BYTE)a4 != 1 )
      goto LABEL_22;
    v12 = FormHeapAlloc(0x10u);
    a4 = v12;
    if ( v12 )
    {
      v11 = sub_7E2370(v12, a2, 0x191, *v9, 0, 0);
      goto LABEL_21;
    }
LABEL_20:
    v11 = 0;
    goto LABEL_21;
  }
  if ( (_BYTE)a4 != 1 )
  {
LABEL_22:
    result = a3;
    ++LOWORD(a3->next);
    goto LABEL_23;
  }
  v10 = FormHeapAlloc(0x10u);
  a4 = v10;
  if ( !v10 )
    goto LABEL_20;
  v11 = sub_7E2370(v10, a2, 0x190, *v9, 0, 0);
LABEL_21:
  a4 = v11;
  result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a4);
LABEL_23:
  *v9 = 0;
  return result;
}
