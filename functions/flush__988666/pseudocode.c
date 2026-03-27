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

  flag = File->_flag;
  v2 = 0;
  if ( (flag & 3) == 2 && (flag & 0x108) != 0 )
  {
    base = File->_base;
    v4 = (char *)(File->_ptr - base);
    if ( (int)v4 > 0 )
    {
      v10 = (char *)(File->_ptr - base);
      v9 = File->_base;
      v5 = _fileno(File);
      if ( (char *)_write(v5, v9, (unsigned int)v10) == v4 )
      {
        v6 = File->_flag;
        if ( (char)v6 < 0 )
          File->_flag = v6 & 0xFFFFFFFD;
      }
      else
      {
        File->_flag |= 0x20u;
        v2 = 0xFFFFFFFF;
      }
    }
  }
  v7 = File->_base;
  File->_cnt = 0;
  File->_ptr = v7;
  return v2;
}
