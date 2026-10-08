int __cdecl _onexit_nolock(int a1)
{
  _BYTE *v1; // esi
  char *v2; // eax
  char *v3; // edi
  int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  int v7; // eax
  char *v8; // eax

  v1 = _decode_pointer(dword_BABC10); /*0x981eb2*/
  v2 = (char *)_decode_pointer(dword_BABC0C); /*0x981eb8*/
  v3 = v2; /*0x981ebd*/
  if ( v2 >= v1 ) /*0x981ec3*/
  {
    v4 = v2 - v1; /*0x981ec7*/
    v5 = v2 - v1 + 4; /*0x981ec9*/
    if ( (unsigned int)(v2 - v1) < 0xFFFFFFFC ) /*0x981ecf*/
    {
      v6 = _msize(v1); /*0x981ed7*/
      if ( v6 >= v5 ) /*0x981edc*/
      {
LABEL_11:
        *(_DWORD *)v3 = a1; /*0x981f28*/
        dword_BABC0C = _encode_pointer(v3 + 4); /*0x981f37*/
        return a1; /*0x981f3f*/
      }
      v7 = 0x800; /*0x981ede*/
      if ( v6 < 0x800 ) /*0x981ee5*/
        v7 = v6; /*0x981ee7*/
      if ( v6 + v7 >= v6 && (v8 = (char *)unknown_libname_76()) != 0 /*0x981f14*/
        || v6 + 0x10 >= v6 && (v8 = (char *)unknown_libname_76()) != 0 )
      {
        v3 = &v8[4 * (v4 >> 2)]; /*0x981f1a*/
        dword_BABC10 = _encode_pointer(v8); /*0x981f23*/
        goto LABEL_11; /*0x981f23*/
      }
    }
  }
  return 0; /*0x981f43*/
}
