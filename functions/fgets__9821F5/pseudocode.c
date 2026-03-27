char *__cdecl fgets(char *Buf, int MaxCount, FILE *File)
{
  FILE *v4; // edi
  _DWORD *v5; // edi
  _BYTE *v6; // eax
  _DWORD *v7; // edi
  char *v8; // eax
  int v10; // eax
  char *v11; // eax
  char *v12; // [esp+18h] [ebp-20h]
  char *v13; // [esp+1Ch] [ebp-1Ch]

  v13 = Buf;
  v12 = Buf;
  if ( !Buf && MaxCount || MaxCount < 0 || !File )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0;
  }
  if ( !MaxCount )
    return 0;
  v4 = File;
  _lock_file(File);
  if ( (File->_flag & 0x40) == 0 )
  {
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE )
    {
      v6 = &aA_1;
    }
    else
    {
      v5 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0);
      v6 = (_BYTE *)(*v5 + 0x28 * (_fileno(File) & 0x1F));
      v4 = File;
    }
    if ( (v6[0x24] & 0x7F) != 0
      || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
        ? (v8 = (char *)&aA_1)
        : (char *)(v7 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0),
                   v8 = (char *)(*v7 + 0x28 * (_fileno(File) & 0x1F)),
                   v4 = File),
          v8[0x24] < 0) )
    {
      *_errno() = 0x16;
      _invalid_parameter(0, 0, 0, 0, 0);
      v12 = 0;
    }
  }
  if ( !v12 )
    return ((char *(*)(void))fgets_::_done_25927)();
  while ( 1 )
  {
    if ( !--MaxCount )
    {
LABEL_29:
      v11 = v13;
      goto LABEL_30;
    }
    if ( --v4->_cnt < 0 )
      v10 = _filbuf(v4);
    else
      v10 = *(unsigned __int8 *)v4->_ptr++;
    if ( v10 == 0xFFFFFFFF )
      break;
    *v13++ = v10;
    if ( (_BYTE)v10 == 0xA )
      goto LABEL_29;
  }
  v11 = v13;
  if ( v13 == Buf )
    return fgets_::_done_25927(Buf, MaxCount);
LABEL_30:
  *v11 = 0;
  return fgets_::_done_25927(Buf, MaxCount);
}
