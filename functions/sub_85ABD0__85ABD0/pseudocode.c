NiTPointerList_Node_void *__thiscall sub_85ABD0(BSTextureManager *this, int a2, char a3, int a4)
{
  NiTPointerList_Node_void *result; // eax
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  result = *((NiTPointerList_Node_void **)this + 0x15);
  if ( !result )
  {
    v6 = FormHeapAlloc(0x10u);
    v7 = (_BYTE)a4 == 0;
    a4 = v6;
    if ( v7 )
    {
      if ( a3 )
      {
        if ( v6 )
        {
          v8 = sub_7E2370(v6, a2, 0x166, 1, 0, 0);
          goto LABEL_11;
        }
      }
      else if ( v6 )
      {
        v8 = sub_7E2370(v6, a2, 0x165, 1, 0, 0);
        goto LABEL_11;
      }
    }
    else if ( v6 )
    {
      v8 = sub_7E2370(v6, a2, 0x167, 1, 0, 0);
LABEL_11:
      a4 = v8;
      return sub_5B1E20(this + 1, (void **)&a4);
    }
    v8 = 0;
    goto LABEL_11;
  }
  return result;
}
