NiTPointerList_Node_void *__thiscall sub_853F80(_DWORD *this, int a2, _WORD *a3, int a4, char *a5, char a6, char a7)
{
  int v8; // eax
  char *v9; // esi
  int v10; // eax
  NiTPointerList_Node_void *result; // eax
  int v12; // eax
  int v13; // eax
  char *v14; // ecx
  int v15; // eax

  if ( a6 )
  {
    if ( !a7 )
    {
      if ( (_BYTE)a4 == 1 )
      {
        v13 = FormHeapAlloc(0x10u);
        a4 = v13;
        v9 = a5;
        if ( v13 )
        {
          v10 = sub_7E2370(v13, a2, 0x182, *a5, 0, 0);
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      goto LABEL_15;
    }
    if ( (_BYTE)a4 == 1 )
    {
      v15 = FormHeapAlloc(0x10u);
      a4 = v15;
      v9 = a5;
      if ( v15 )
      {
        v10 = sub_7E2370(v15, a2, 0x183, *a5, 0, 0);
        goto LABEL_7;
      }
      goto LABEL_19;
    }
  }
  else
  {
    if ( !a7 )
    {
      if ( (_BYTE)a4 == 1 )
      {
        v8 = FormHeapAlloc(0x10u);
        a4 = v8;
        v9 = a5;
        if ( v8 )
        {
          v10 = sub_7E2370(v8, a2, 0x180, *a5, 0, 0);
LABEL_7:
          a4 = v10;
          result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a4);
          *v9 = 0;
          return result;
        }
LABEL_6:
        v10 = 0;
        goto LABEL_7;
      }
LABEL_15:
      v14 = a5;
      ++*a3;
      *v14 = 0;
      return (NiTPointerList_Node_void *)a3;
    }
    if ( (_BYTE)a4 == 1 )
    {
      v12 = FormHeapAlloc(0x10u);
      a4 = v12;
      v9 = a5;
      if ( v12 )
      {
        v10 = sub_7E2370(v12, a2, 0x181, *a5, 0, 0);
        goto LABEL_7;
      }
LABEL_19:
      v10 = 0;
      goto LABEL_7;
    }
  }
  ++*a3;
  result = (NiTPointerList_Node_void *)a5;
  *a5 = 0;
  return result;
}
