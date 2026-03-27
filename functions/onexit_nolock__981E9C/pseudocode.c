int __cdecl _onexit_nolock(int a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  void *v11; // [esp+10h] [ebp-4h]

  v1 = (_DWORD *)_decode_pointer(dword_BABC10);
  v11 = v1;
  v2 = (_DWORD *)_decode_pointer(dword_BABC0C);
  v3 = v2;
  if ( v2 >= v1 )
  {
    v4 = (char *)v2 - (char *)v1;
    v5 = (char *)v2 - (char *)v1 + 4;
    if ( (unsigned int)((char *)v2 - (char *)v1) < 0xFFFFFFFC )
    {
      v6 = _msize(v1);
      if ( v6 >= v5 )
      {
LABEL_11:
        *v3 = a1;
        dword_BABC0C = _encode_pointer(v3 + 1);
        return a1;
      }
      v7 = 0x800;
      if ( v6 < 0x800 )
        v7 = v6;
      v8 = v6 + v7;
      if ( v8 >= v6 && (v9 = unknown_libname_76(v11, v8)) != 0
        || v6 + 0x10 >= v6 && (v9 = unknown_libname_76(v11, v6 + 0x10)) != 0 )
      {
        v3 = (_DWORD *)(v9 + 4 * (v4 >> 2));
        dword_BABC10 = _encode_pointer(v9);
        goto LABEL_11;
      }
    }
  }
  return 0;
}
