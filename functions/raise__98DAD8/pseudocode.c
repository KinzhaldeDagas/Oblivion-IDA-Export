int __cdecl raise(int a1)
{
  int v1; // esi
  DWORD *v2; // eax
  void *v4; // eax

  if ( a1 > 0xB ) /*0x98daf2*/
  {
    if ( a1 == 0xF ) /*0x98db45*/
    {
      v4 = (void *)dword_BA9E10[0x1F2]; /*0x98db88*/
      goto LABEL_18; /*0x98db88*/
    }
    if ( a1 == 0x15 ) /*0x98db4a*/
    {
      v4 = (void *)dword_BA9E10[0x1F0]; /*0x98db7c*/
      goto LABEL_18; /*0x98db81*/
    }
    if ( a1 != 0x16 ) /*0x98db4d*/
      goto LABEL_14; /*0x98db4d*/
    goto LABEL_15; /*0x98db4d*/
  }
  switch ( a1 ) /*0x98daf4*/
  {
    case 0xB: /*0x98daf4*/
      goto LABEL_7; /*0x98daf4*/
    case 2: /*0x98daf4*/
      v4 = (void *)dword_BA9E10[0x1EF]; /*0x98db26*/
LABEL_18:
      _decode_pointer(v4); /*0x98db8d*/
LABEL_19:
      JUMPOUT(0x98DB9E); /*0x98db9e*/
    case 4: /*0x98daf4*/
      goto LABEL_7; /*0x98db01*/
    case 6: /*0x98daf4*/
LABEL_15:
      v4 = (void *)dword_BA9E10[0x1F1]; /*0x98db6b*/
      goto LABEL_18; /*0x98db75*/
  }
  if ( a1 != 8 ) /*0x98db09*/
  {
LABEL_14:
    *_errno() = 0x16; /*0x98db4f*/
    _invalid_parameter(a1, 0, v1); /*0x98db61*/
    return 0xFFFFFFFF; /*0x98db69*/
  }
LABEL_7:
  v2 = _getptd_noexit(); /*0x98db0b*/
  if ( v2 ) /*0x98db17*/
  {
    siglookup(a1, v2[0x17]); /*0x98db32*/
    goto LABEL_19; /*0x98db3e*/
  }
  return 0xFFFFFFFF; /*0x98dc82*/
}
