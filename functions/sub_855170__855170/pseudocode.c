void __thiscall sub_855170(_DWORD *this, int a2, int a3, int a4, char a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( a5 )
  {
    if ( (_BYTE)a4 != 1 )
      return;
    v8 = FormHeapAlloc(0x10u);
    a4 = v8;
    if ( v8 )
    {
      v7 = sub_7E2370(v8, a2, 0xB, 0, 0, 0);
      goto LABEL_9;
    }
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  if ( (_BYTE)a4 != 1 )
    return;
  v6 = FormHeapAlloc(0x10u);
  a4 = v6;
  if ( !v6 )
    goto LABEL_8;
  v7 = sub_7E2370(v6, a2, 0xA, 0, 0, 0);
LABEL_9:
  a4 = v7;
  sub_5B1E20((BSTextureManager *)(this + 0x16), (void **)&a4);
}
