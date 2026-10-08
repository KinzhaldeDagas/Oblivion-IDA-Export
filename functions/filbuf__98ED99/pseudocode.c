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

  if ( !File ) /*0x98eda3*/
  {
    *_errno() = 0x16; /*0x98edaf*/
    _invalid_parameter(v1, 0, 0); /*0x98edb5*/
    return 0xFFFFFFFF; /*0x98eeb3*/
  }
  flag = File->_flag; /*0x98edc2*/
  if ( (flag & 0x83) == 0 || (flag & 0x40) != 0 ) /*0x98edcf*/
    return 0xFFFFFFFF; /*0x98edcf*/
  if ( (flag & 2) != 0 ) /*0x98edd7*/
  {
    File->_flag = flag | 0x20; /*0x98eddc*/
    return 0xFFFFFFFF; /*0x98eddf*/
  }
  v3 = flag | 1; /*0x98ede4*/
  File->_flag = v3; /*0x98edeb*/
  if ( (v3 & 0x10C) != 0 ) /*0x98edee*/
    File->_ptr = File->_base; /*0x98edfc*/
  else
    _getbuf(File); /*0x98edf1*/
  bufsiz = File->_bufsiz; /*0x98edfe*/
  base = File->_base; /*0x98ee01*/
  v4 = _fileno(File); /*0x98ee05*/
  v5 = _read(v4, base, bufsiz); /*0x98ee0c*/
  File->_cnt = v5; /*0x98ee16*/
  if ( !v5 || v5 == 0xFFFFFFFF )
  {
    File->_flag |= v5 != 0 ? 0x20 : 0x10;
    File->_cnt = 0; /*0x98eeb0*/
    return 0xFFFFFFFF; /*0x98eeb0*/
  }
  if ( (File->_flag & 0x82) == 0 ) /*0x98ee28*/
  {
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x98ee40*/
    {
      v7 = &aA_1; /*0x98ee64*/
    }
    else
    {
      v6 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x98ee4c*/
      v7 = (_BYTE *)(*v6 + 0x28 * (_fileno(File) & 0x1F)); /*0x98ee5e*/
    }
    if ( (v7[4] & 0x82) == 0x82 ) /*0x98ee70*/
      File->_flag |= 0x2000u; /*0x98ee72*/
  }
  if ( File->_bufsiz == 0x200 ) /*0x98ee80*/
  {
    v8 = File->_flag; /*0x98ee82*/
    if ( (v8 & 8) != 0 && (v8 & 0x400) == 0 ) /*0x98ee8d*/
      File->_bufsiz = 0x1000; /*0x98ee8f*/
  }
  ptr = File->_ptr; /*0x98ee96*/
  --File->_cnt; /*0x98ee98*/
  result = (unsigned __int8)*ptr; /*0x98ee9b*/
  File->_ptr = ptr + 1; /*0x98ee9f*/
  return result; /*0x98eeb6*/
}
