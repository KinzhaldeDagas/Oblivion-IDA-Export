NiTPointerList_Node_void *__thiscall sub_853DC0(
        _DWORD *this,
        int a2,
        int a3,
        _WORD *a4,
        int a5,
        char *a6,
        char a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v13; // eax
  char *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  NiTPointerList_Node_void *result; // eax

  if ( a7 )
  {
    if ( a8 )
    {
      if ( (_BYTE)a5 == 1 )
      {
        v18 = FormHeapAlloc(0x10u);
        a5 = v18;
        v14 = a6;
        if ( v18 )
        {
          v15 = sub_7E2370(v18, a2, 0x112, *a6, 1u, a3);
          goto LABEL_17;
        }
        goto LABEL_16;
      }
    }
    else if ( (_BYTE)a5 == 1 )
    {
      v17 = FormHeapAlloc(0x10u);
      a5 = v17;
      v14 = a6;
      if ( v17 )
      {
        v15 = sub_7E2370(v17, a2, 0x111, *a6, 1u, a3);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
  }
  else if ( a8 )
  {
    if ( (_BYTE)a5 == 1 )
    {
      v16 = FormHeapAlloc(0x10u);
      a5 = v16;
      v14 = a6;
      if ( v16 )
      {
        v15 = sub_7E2370(v16, a2, 0x110, *a6, 1u, a3);
        goto LABEL_17;
      }
LABEL_16:
      v15 = 0;
      goto LABEL_17;
    }
  }
  else if ( (_BYTE)a5 == 1 )
  {
    v13 = FormHeapAlloc(0x10u);
    a5 = v13;
    v14 = a6;
    if ( v13 )
    {
      v15 = sub_7E2370(v13, a2, 0x10F, *a6, 1u, a3);
LABEL_17:
      a5 = v15;
      result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
      *v14 = 0;
      return result;
    }
    goto LABEL_16;
  }
  ++*a4;
  result = (NiTPointerList_Node_void *)a6;
  *a6 = 0;
  return result;
}
