NiTPointerList_Node_void *__thiscall sub_859720(
        _DWORD *this,
        int a2,
        int a3,
        NiTPointerList_Node_void *a4,
        char a5,
        char *a6,
        char a7,
        int a8,
        char a9,
        char a10,
        char a11,
        int a12,
        int a13,
        char a14)
{
  int v15; // eax
  int v16; // eax
  int v17; // eax

  if ( !(_BYTE)a13 )
    return sub_853970(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a14);
  if ( a7 )
  {
    if ( a5 == 1 )
    {
      v17 = FormHeapAlloc(0x10u);
      a13 = v17;
      if ( v17 )
      {
        v16 = sub_7E2370(v17, a2, 0x10E, *a6, 0, 0);
        goto LABEL_10;
      }
LABEL_9:
      v16 = 0;
      goto LABEL_10;
    }
  }
  else if ( a5 == 1 )
  {
    v15 = FormHeapAlloc(0x10u);
    a13 = v15;
    if ( v15 )
    {
      v16 = sub_7E2370(v15, a2, 0x10D, *a6, 0, 0);
LABEL_10:
      a13 = v16;
      return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a13);
    }
    goto LABEL_9;
  }
  ++LOWORD(a4->next);
  return a4;
}
