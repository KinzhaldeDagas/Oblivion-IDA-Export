unsigned int __cdecl _flush(FILE *File)
{
  int flag; // eax
  unsigned int v2; // ebx
  char *base; // eax
  char *v4; // edi
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  char *v9; // [esp-Ch] [ebp-14h]
  char *v10; // [esp-8h] [ebp-10h]

  flag = File->_flag; /*0x98866c*/
  v2 = 0; /*0x988674*/
  if ( (flag & 3) == 2 && (flag & 0x108) != 0 ) /*0x98867f*/
  {
    base = File->_base; /*0x988681*/
    v4 = (char *)(File->_ptr - base); /*0x988687*/
    if ( (int)v4 > 0 ) /*0x98868b*/
    {
      v10 = (char *)(File->_ptr - base); /*0x98868d*/
      v9 = File->_base; /*0x98868e*/
      v5 = _fileno(File); /*0x988690*/
      if ( (char *)_write(v5, v9, (unsigned int)v10) == v4 ) /*0x9886a1*/
      {
        v6 = File->_flag; /*0x9886a3*/
        if ( (char)v6 < 0 ) /*0x9886a8*/
          File->_flag = v6 & 0xFFFFFFFD; /*0x9886ad*/
      }
      else
      {
        File->_flag |= 0x20u; /*0x9886b2*/
        v2 = 0xFFFFFFFF; /*0x9886b6*/
      }
    }
  }
  v7 = File->_base; /*0x9886ba*/
  File->_cnt = 0; /*0x9886bd*/
  File->_ptr = v7; /*0x9886c1*/
  return v2; /*0x9886c3*/
}
