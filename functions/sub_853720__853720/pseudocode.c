NiTPointerList_Node_void *__thiscall sub_853720(
        _DWORD *this,
        int a2,
        int a3,
        NiTPointerList_Node_void *a4,
        int a5,
        char *a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  char *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  NiTPointerList_Node_void *result; // eax

  v11 = a6;
  if ( a7 )
  {
    if ( a8 )
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_26;
      v18 = FormHeapAlloc(0x10u);
      a5 = v18;
      if ( v18 )
      {
        v13 = sub_7E2370(v18, a2, 0xE5, *v11, 1u, a3);
        goto LABEL_25;
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_26;
      v17 = FormHeapAlloc(0x10u);
      a5 = v17;
      if ( v17 )
      {
        v13 = sub_7E2370(v17, a2, 0xE4, *v11, 1u, a3);
        goto LABEL_25;
      }
    }
    goto LABEL_24;
  }
  if ( a8 )
  {
    if ( a10 )
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_26;
      v16 = FormHeapAlloc(0x10u);
      a5 = v16;
      if ( v16 )
      {
        v13 = sub_7E2370(v16, a2, 0xE7, *v11, 1u, a3);
        goto LABEL_25;
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_26;
      v15 = FormHeapAlloc(0x10u);
      a5 = v15;
      if ( v15 )
      {
        v13 = sub_7E2370(v15, a2, 0xE3, *v11, 1u, a3);
        goto LABEL_25;
      }
    }
    goto LABEL_24;
  }
  if ( a10 )
  {
    if ( (_BYTE)a5 != 1 )
      goto LABEL_26;
    v14 = FormHeapAlloc(0x10u);
    a5 = v14;
    if ( v14 )
    {
      v13 = sub_7E2370(v14, a2, 0xE6, *v11, 1u, a3);
      goto LABEL_25;
    }
LABEL_24:
    v13 = 0;
    goto LABEL_25;
  }
  if ( (_BYTE)a5 != 1 )
  {
LABEL_26:
    result = a4;
    ++LOWORD(a4->next);
    goto LABEL_27;
  }
  v12 = FormHeapAlloc(0x10u);
  a5 = v12;
  if ( !v12 )
    goto LABEL_24;
  v13 = sub_7E2370(v12, a2, 0xE2, *v11, 1u, a3);
LABEL_25:
  a5 = v13;
  result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
LABEL_27:
  *v11 = 0;
  return result;
}
