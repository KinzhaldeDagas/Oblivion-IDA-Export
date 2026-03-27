int __cdecl _flsbuf(int Ch, FILE *File)
{
  FILE *v2; // esi
  int flag; // eax
  bool v5; // zf
  char *base; // eax
  char *ptr; // edi
  signed int v8; // edi
  _BYTE *v9; // eax
  __int64 v10; // rax
  int v11; // [esp+4h] [ebp-4h]

  v2 = File;
  File = (FILE *)_fileno(File);
  flag = v2->_flag;
  if ( (flag & 0x82) == 0 )
  {
    *_errno() = 9;
LABEL_3:
    v2->_flag |= 0x20u;
    return 0xFFFFFFFF;
  }
  if ( (flag & 0x40) != 0 )
  {
    *_errno() = 0x22;
    goto LABEL_3;
  }
  if ( (flag & 1) != 0 )
  {
    v2->_cnt = 0;
    if ( (flag & 0x10) == 0 )
    {
      v2->_flag = flag | 0x20;
      return 0xFFFFFFFF;
    }
    v2->_ptr = v2->_base;
    v2->_flag = flag & 0xFFFFFFFE;
  }
  v5 = (v2->_flag & 0x10C) == 0;
  v2->_flag = v2->_flag & 0xFFFFFFED | 2;
  v2->_cnt = 0;
  v11 = 0;
  if ( v5 && (v2 != (FILE *)(sub_98BAF0() + 8) && v2 != (FILE *)(sub_98BAF0() + 0x10) || !_isatty((int)File)) )
    _getbuf(v2);
  if ( (v2->_flag & 0x108) != 0 )
  {
    base = v2->_base;
    ptr = v2->_ptr;
    v2->_ptr = base + 1;
    v8 = ptr - base;
    v2->_cnt = v2->_bufsiz - 1;
    if ( v8 <= 0 )
    {
      if ( File == (FILE *)0xFFFFFFFF || File == (FILE *)0xFFFFFFFE )
        v9 = &aA_1;
      else
        v9 = (_BYTE *)(dword_BAAAC0[(int)File >> 5] + 0x28 * ((unsigned __int8)File & 0x1F));
      if ( (v9[4] & 0x20) != 0 )
      {
        v10 = _lseeki64((int)File, 0, 2);
        if ( (HIDWORD(v10) & (unsigned int)v10) == 0xFFFFFFFF )
          goto LABEL_27;
      }
    }
    else
    {
      v11 = _write((int)File, base, v8);
    }
    *v2->_base = Ch;
  }
  else
  {
    v8 = 1;
    v11 = _write((int)File, &Ch, 1u);
  }
  if ( v11 != v8 )
  {
LABEL_27:
    v2->_flag |= 0x20u;
    return 0xFFFFFFFF;
  }
  return (unsigned __int8)Ch;
}
