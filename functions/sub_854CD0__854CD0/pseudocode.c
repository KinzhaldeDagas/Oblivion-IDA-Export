NiTPointerList_Node_void *__thiscall sub_854CD0(_DWORD *this, int a2, _WORD *a3, int a4, char *a5, char a6, char a7)
{
  int v8; // eax
  char *v9; // esi
  int v10; // eax
  int v11; // eax
  NiTPointerList_Node_void *result; // eax
  int v13; // eax
  char *v14; // ecx

  if ( a7 )
  {
    if ( (_BYTE)a4 == 1 )
    {
      v8 = FormHeapAlloc(0x10u);
      a4 = v8;
      v9 = a5;
      if ( v8 )
      {
        v10 = sub_7E2370(v8, a2, 0x162, *a5, 0, 0);
LABEL_10:
        a4 = v10;
        result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a4);
        *v9 = 0;
        return result;
      }
      goto LABEL_15;
    }
LABEL_16:
    v14 = a5;
    ++*a3;
    *v14 = 0;
    return (NiTPointerList_Node_void *)a3;
  }
  if ( a6 )
  {
    if ( (_BYTE)a4 == 1 )
    {
      v13 = FormHeapAlloc(0x10u);
      a4 = v13;
      v9 = a5;
      if ( v13 )
      {
        v10 = sub_7E2370(v13, a2, 0x161, *a5, 0, 0);
        goto LABEL_10;
      }
LABEL_15:
      v10 = 0;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( (_BYTE)a4 == 1 )
  {
    v11 = FormHeapAlloc(0x10u);
    a4 = v11;
    v9 = a5;
    if ( v11 )
      v10 = sub_7E2370(v11, a2, 0x160, *a5, 0, 0);
    else
      v10 = 0;
    goto LABEL_10;
  }
  ++*a3;
  result = (NiTPointerList_Node_void *)a5;
  *a5 = 0;
  return result;
}
