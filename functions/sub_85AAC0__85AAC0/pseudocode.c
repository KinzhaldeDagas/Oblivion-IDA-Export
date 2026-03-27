NiTPointerList_Node_void *__thiscall sub_85AAC0(_DWORD *this, int a2, char a3, int a4)
{
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v5 = dword_B42EB0;
  v6 = FormHeapAlloc(0x10u);
  if ( a3 )
  {
    v7 = (_BYTE)a4 == 0;
    a4 = v6;
    if ( v7 )
    {
      if ( v6 )
      {
        v8 = sub_7E2370(v6, a2, 8, 1, 1u, v5);
        goto LABEL_13;
      }
    }
    else if ( v6 )
    {
      v8 = sub_7E2370(v6, a2, 9, 1, 1u, v5);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v7 = (_BYTE)a4 == 0;
  a4 = v6;
  if ( !v7 )
  {
    if ( v6 )
    {
      v8 = sub_7E2370(v6, a2, 7, 1, 1u, v5);
      goto LABEL_13;
    }
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  if ( !v6 )
    goto LABEL_12;
  v8 = sub_7E2370(v6, a2, 6, 1, 1u, v5);
LABEL_13:
  a4 = v8;
  return sub_5B1E20((BSTextureManager *)(this + 0xE), (void **)&a4);
}
