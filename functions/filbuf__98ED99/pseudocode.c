int __cdecl _filbuf(FILE *File)
{
  int v1; // ebx
  int flag; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // edi
  _BYTE *v7; // eax
  int v8; // eax
  char *ptr; // ecx
  int result; // eax
  char *base; // [esp-8h] [ebp-10h]
  unsigned int bufsiz; // [esp-4h] [ebp-Ch]

  if ( !File )
  {
    *_errno() = 0x16;
    _invalid_parameter(v1, 0, 0);
    return 0xFFFFFFFF;
  }
  flag = File->_flag;
  if ( (flag & 0x83) == 0 || (flag & 0x40) != 0 )
    return 0xFFFFFFFF;
  if ( (flag & 2) != 0 )
  {
    File->_flag = flag | 0x20;
    return 0xFFFFFFFF;
  }
  v3 = flag | 1;
  File->_flag = v3;
  if ( (v3 & 0x10C) != 0 )
    File->_ptr = File->_base;
  else
    _getbuf(File);
  bufsiz = File->_bufsiz;
  base = File->_base;
  v4 = _fileno(File);
  v5 = _read(v4, base, bufsiz);
  File->_cnt = v5;
  if ( !v5 || v5 == 0xFFFFFFFF )
  {
    File->_flag |= v5 != 0 ? 0x20 : 0x10;
    File->_cnt = 0;
    return 0xFFFFFFFF;
  }
  if ( (File->_flag & 0x82) == 0 )
  {
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE )
    {
      v7 = &aA_1;
    }
    else
    {
      v6 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0);
      v7 = (_BYTE *)(*v6 + 0x28 * (_fileno(File) & 0x1F));
    }
    if ( (v7[4] & 0x82) == 0x82 )
      File->_flag |= 0x2000u;
  }
  if ( File->_bufsiz == 0x200 )
  {
    v8 = File->_flag;
    if ( (v8 & 8) != 0 && (v8 & 0x400) == 0 )
      File->_bufsiz = 0x1000;
  }
  ptr = File->_ptr;
  --File->_cnt;
  result = (unsigned __int8)*ptr;
  File->_ptr = ptr + 1;
  return result;
}
