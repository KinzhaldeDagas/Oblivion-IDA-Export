NiTPointerList_Node_void *__thiscall sub_852150(
        _DWORD *this,
        int a2,
        int a3,
        NiTPointerList_Node_void *a4,
        int a5,
        _BYTE *a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  NiTPointerList_Node_void *result; // eax

  if ( a7 )
  {
    if ( a8 )
    {
      if ( a9 )
      {
        if ( (_BYTE)a5 != 1 )
          goto LABEL_38;
        v17 = FormHeapAlloc(0x10u);
        a5 = v17;
        if ( v17 )
        {
          v12 = sub_7E2370(v17, a2, 0x17, 1, 1u, a3);
          goto LABEL_37;
        }
      }
      else
      {
        if ( (_BYTE)a5 != 1 )
          goto LABEL_38;
        v18 = FormHeapAlloc(0x10u);
        a5 = v18;
        if ( v18 )
        {
          v12 = sub_7E2370(v18, a2, 0x16, 1, 1u, a3);
          goto LABEL_37;
        }
      }
    }
    else if ( a9 )
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_38;
      v19 = FormHeapAlloc(0x10u);
      a5 = v19;
      if ( v19 )
      {
        v12 = sub_7E2370(v19, a2, 0x15, 1, 1u, a3);
        goto LABEL_37;
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_38;
      v20 = FormHeapAlloc(0x10u);
      a5 = v20;
      if ( v20 )
      {
        v12 = sub_7E2370(v20, a2, 0x14, 1, 1u, a3);
        goto LABEL_37;
      }
    }
    goto LABEL_36;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_38;
      v14 = FormHeapAlloc(0x10u);
      a5 = v14;
      if ( v14 )
      {
        v12 = sub_7E2370(v14, a2, 0x11, 1, 1u, a3);
        goto LABEL_37;
      }
    }
    else if ( a10 )
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_38;
      v16 = FormHeapAlloc(0x10u);
      a5 = v16;
      if ( v16 )
      {
        v12 = sub_7E2370(v16, a2, 0x18, 1, 1u, a3);
        goto LABEL_37;
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 )
        goto LABEL_38;
      v15 = FormHeapAlloc(0x10u);
      a5 = v15;
      if ( v15 )
      {
        v12 = sub_7E2370(v15, a2, 0x10, 1, 1u, a3);
        goto LABEL_37;
      }
    }
    goto LABEL_36;
  }
  if ( !a9 )
  {
    if ( (_BYTE)a5 != 1 )
      goto LABEL_38;
    v13 = FormHeapAlloc(0x10u);
    a5 = v13;
    if ( v13 )
    {
      v12 = sub_7E2370(v13, a2, 0x12, 1, 1u, a3);
      goto LABEL_37;
    }
LABEL_36:
    v12 = 0;
    goto LABEL_37;
  }
  if ( (_BYTE)a5 != 1 )
  {
LABEL_38:
    result = a4;
    ++LOWORD(a4->next);
    goto LABEL_39;
  }
  v11 = FormHeapAlloc(0x10u);
  a5 = v11;
  if ( !v11 )
    goto LABEL_36;
  v12 = sub_7E2370(v11, a2, 0x13, 1, 1u, a3);
LABEL_37:
  a5 = v12;
  result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
LABEL_39:
  *a6 = 0;
  return result;
}
