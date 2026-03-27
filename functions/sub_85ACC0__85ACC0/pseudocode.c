NiTPointerList_Node_void *__thiscall sub_85ACC0(_DWORD *this, int a2, _WORD *a3, int a4, char *a5, char a6)
{
  int v7; // eax
  char *v8; // esi
  int v9; // eax
  NiTPointerList_Node_void *result; // eax
  char *v11; // ecx
  int v12; // eax

  if ( a6 )
  {
    if ( (_BYTE)a4 == 1 )
    {
      v7 = FormHeapAlloc(0x10u);
      a4 = v7;
      v8 = a5;
      if ( v7 )
        v9 = sub_7E2370(v7, a2, 0x18F, *a5, 0, 0);
      else
        v9 = 0;
LABEL_6:
      a4 = v9;
      result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a4);
      *v8 = 0;
      return result;
    }
    v11 = a5;
    ++*a3;
    *v11 = 0;
    return (NiTPointerList_Node_void *)a3;
  }
  else
  {
    if ( (_BYTE)a4 == 1 )
    {
      v12 = FormHeapAlloc(0x10u);
      a4 = v12;
      v8 = a5;
      if ( v12 )
        v9 = sub_7E2370(v12, a2, 0x18E, *a5, 0, 0);
      else
        v9 = 0;
      goto LABEL_6;
    }
    ++*a3;
    result = (NiTPointerList_Node_void *)a5;
    *a5 = 0;
  }
  return result;
}
