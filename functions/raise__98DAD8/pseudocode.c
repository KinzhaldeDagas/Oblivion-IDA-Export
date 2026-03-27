int __cdecl raise(int a1)
{
  int v1; // esi
  DWORD *v2; // eax
  void *v4; // eax

  if ( a1 > 0xB )
  {
    if ( a1 == 0xF )
    {
      v4 = (void *)dword_BAA5D8;
      goto LABEL_18;
    }
    if ( a1 == 0x15 )
    {
      v4 = (void *)dword_BAA5D0;
      goto LABEL_18;
    }
    if ( a1 != 0x16 )
      goto LABEL_14;
    goto LABEL_15;
  }
  switch ( a1 )
  {
    case 0xB:
      goto LABEL_7;
    case 2:
      v4 = (void *)dword_BAA5CC;
LABEL_18:
      _decode_pointer(v4);
LABEL_19:
      JUMPOUT(0x98DB9E);
    case 4:
      goto LABEL_7;
    case 6:
LABEL_15:
      v4 = (void *)dword_BAA5D4;
      goto LABEL_18;
  }
  if ( a1 != 8 )
  {
LABEL_14:
    *_errno() = 0x16;
    _invalid_parameter(a1, 0, v1);
    return 0xFFFFFFFF;
  }
LABEL_7:
  v2 = _getptd_noexit();
  if ( v2 )
  {
    siglookup(a1, v2[0x17]);
    goto LABEL_19;
  }
  return 0xFFFFFFFF;
}
