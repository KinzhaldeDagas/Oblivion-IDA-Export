int __usercall unknown_libname_62@<eax>(int a1@<edi>, FILE *File, int *a3, int a4, int a5)
{
  unsigned int v6; // edi
  int flag; // ecx
  int v8; // ecx
  int *p_charbuf; // eax

  if ( !File ) /*0x98885d*/
    goto LABEL_2; /*0x98885d*/
  if ( a4 != 4 ) /*0x988885*/
  {
    if ( !a4 ) /*0x988889*/
      goto LABEL_7; /*0x988889*/
    if ( a4 != 0x40 ) /*0x98888e*/
    {
LABEL_2:
      *_errno() = 0x16; /*0x98885f*/
      _invalid_parameter(0, a1, (int)File); /*0x98886f*/
      return 0xFFFFFFFF; /*0x98887a*/
    }
  }
  if ( a4 != 0x40 ) /*0x988897*/
  {
    a1 = a5; /*0x9888a8*/
    goto LABEL_10; /*0x9888a8*/
  }
LABEL_7:
  a1 = a5; /*0x988899*/
  if ( (unsigned int)(a5 - 2) > 0x7FFFFFFD ) /*0x9888a4*/
    goto LABEL_2; /*0x9888a4*/
LABEL_10:
  v6 = a1 & 0xFFFFFFFE; /*0x9888ab*/
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x9888b2*/
  _flush(File); /*0x9888bc*/
  _freebuf((int)File); /*0x9888c2*/
  File->_flag &= 0xFFFFC2F3; /*0x9888c9*/
  flag = File->_flag; /*0x9888d0*/
  if ( (a4 & 4) != 0 ) /*0x9888d7*/
  {
    v8 = flag | 4; /*0x9888d9*/
    p_charbuf = &File->_charbuf; /*0x9888dc*/
    v6 = 2; /*0x9888e1*/
LABEL_17:
    File->_flag = v8; /*0x988911*/
    goto LABEL_18; /*0x988911*/
  }
  p_charbuf = a3; /*0x9888e4*/
  if ( a3 ) /*0x9888e9*/
  {
    v8 = flag | 0x500; /*0x98890b*/
    goto LABEL_17; /*0x98890b*/
  }
  p_charbuf = (int *)unknown_libname_72(); /*0x9888ec*/
  if ( !p_charbuf ) /*0x9888f4*/
  {
    ++dword_BA9E10[1]; /*0x9888f6*/
    return unknown_libname_62_::unknown_libname_63(); /*0x988900*/
  }
  File->_flag |= 0x408u; /*0x988902*/
LABEL_18:
  File->_bufsiz = v6; /*0x988914*/
  File->_base = (char *)p_charbuf; /*0x988917*/
  File->_ptr = (char *)p_charbuf; /*0x98891a*/
  File->_cnt = 0; /*0x98891c*/
  return unknown_libname_62_::unknown_libname_63(); /*0x98892e*/
}
