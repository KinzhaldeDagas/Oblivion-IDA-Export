NiTPointerList_Node_void *__thiscall sub_853580(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        NiTPointerList_Node_void *a5,
        int a6,
        _BYTE *a7,
        char a8,
        char a9)
{
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  NiTPointerList_Node_void *result; // eax
  _BYTE *v15; // edx
  int v16; // eax

  if ( a8 )
  {
    if ( (_BYTE)a6 == 1 )
    {
      v16 = FormHeapAlloc(0x10u);
      a6 = v16;
      if ( v16 )
      {
        v11 = sub_7E2370(v16, a2, 0x32, 1, 2u, a3);
        goto LABEL_16;
      }
LABEL_15:
      v11 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    if ( a9 )
    {
      if ( (_BYTE)a6 != 1 )
      {
        v15 = a7;
        ++LOWORD(a5->next);
        *v15 = 0;
        return a5;
      }
      v12 = FormHeapAlloc(0x10u);
      a6 = v12;
      if ( v12 )
        v13 = sub_7E2370(v12, a2, 0x33, 1, 2u, a3);
      else
        v13 = 0;
      a6 = v13;
      result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
      goto LABEL_18;
    }
    if ( (_BYTE)a6 == 1 )
    {
      v10 = FormHeapAlloc(0x10u);
      a6 = v10;
      if ( v10 )
      {
        v11 = sub_7E2370(v10, a2, 0x31, 1, 2u, a3);
LABEL_16:
        a6 = v11;
        sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
        result = (NiTPointerList_Node_void *)a7;
        *a7 = 0;
        return result;
      }
      goto LABEL_15;
    }
  }
  result = a5;
  ++LOWORD(a5->next);
LABEL_18:
  *a7 = 0;
  return result;
}
