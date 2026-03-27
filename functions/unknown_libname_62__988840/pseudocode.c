int __usercall unknown_libname_62@<eax>(int a1@<edi>, FILE *File, int *a3, int a4, int a5)
{
  unsigned int v6; // edi
  int flag; // ecx
  int v8; // ecx
  int *p_charbuf; // eax

  if ( !File )
    goto LABEL_2;
  if ( a4 != 4 )
  {
    if ( !a4 )
      goto LABEL_7;
    if ( a4 != 0x40 )
    {
LABEL_2:
      *_errno() = 0x16;
      _invalid_parameter(0, a1, (int)File);
      return 0xFFFFFFFF;
    }
  }
  if ( a4 != 0x40 )
  {
    a1 = a5;
    goto LABEL_10;
  }
LABEL_7:
  a1 = a5;
  if ( (unsigned int)(a5 - 2) > 0x7FFFFFFD )
    goto LABEL_2;
LABEL_10:
  v6 = a1 & 0xFFFFFFFE;
  _lock_file(File);
  _flush(File);
  _freebuf(File);
  File->_flag &= 0xFFFFC2F3;
  flag = File->_flag;
  if ( (a4 & 4) != 0 )
  {
    v8 = flag | 4;
    p_charbuf = &File->_charbuf;
    v6 = 2;
LABEL_17:
    File->_flag = v8;
    goto LABEL_18;
  }
  p_charbuf = a3;
  if ( a3 )
  {
    v8 = flag | 0x500;
    goto LABEL_17;
  }
  p_charbuf = (int *)unknown_libname_72(v6);
  if ( !p_charbuf )
  {
    ++dword_BA9E14;
    return unknown_libname_62_::unknown_libname_63();
  }
  File->_flag |= 0x408u;
LABEL_18:
  File->_bufsiz = v6;
  File->_base = (char *)p_charbuf;
  File->_ptr = (char *)p_charbuf;
  File->_cnt = 0;
  return unknown_libname_62_::unknown_libname_63();
}
