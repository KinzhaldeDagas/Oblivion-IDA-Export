NiTPointerList_Node_void *__thiscall sub_85A010(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        char *a7,
        char a8,
        char a9,
        char a10)
{
  __int16 v11; // si
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  if ( a8 )
  {
    if ( (_BYTE)a6 != 1 )
      goto LABEL_26;
    v14 = FormHeapAlloc(0x10u);
    a6 = v14;
    if ( a4 )
    {
      if ( v14 )
      {
        v15 = sub_7E2370(v14, a2, 0x185, *a7, 1u, a4);
LABEL_24:
        a6 = v15;
        return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
      }
    }
    else if ( v14 )
    {
      v15 = sub_7E2370(v14, a2, 0x185, *a7, 1u, a3);
      goto LABEL_24;
    }
    v15 = 0;
    goto LABEL_24;
  }
  if ( (_BYTE)a6 == 1 )
  {
    if ( a9 )
    {
      v11 = 0x187;
    }
    else
    {
      if ( byte_B43074 && !a10 )
      {
        v13 = FormHeapAlloc(0x10u);
        a6 = v13;
        if ( v13 )
        {
          a6 = sub_7E2370(v13, a2, 0x186, *a7, 0, 0);
          return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
        }
        goto LABEL_15;
      }
      v11 = 0x184;
    }
    v12 = FormHeapAlloc(0x10u);
    a6 = v12;
    if ( a4 )
    {
      if ( v12 )
      {
        a6 = sub_7E2370(v12, a2, v11, *a7, 1u, a4);
        return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
      }
    }
    else if ( v12 )
    {
      a6 = sub_7E2370(v12, a2, v11, *a7, 1u, a3);
      return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
    }
LABEL_15:
    a6 = 0;
    return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
  }
LABEL_26:
  ++*(_WORD *)a5;
  return (NiTPointerList_Node_void *)a5;
}
