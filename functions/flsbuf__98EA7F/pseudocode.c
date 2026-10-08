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

  v2 = File; /*0x98ea84*/
  File = (FILE *)_fileno(File); /*0x98ea8d*/
  flag = v2->_flag; /*0x98ea90*/
  if ( (flag & 0x82) == 0 ) /*0x98ea96*/
  {
    *_errno() = 9; /*0x98ea9d*/
LABEL_3:
    v2->_flag |= 0x20u; /*0x98eaa3*/
    return 0xFFFFFFFF; /*0x98eaaa*/
  }
  if ( (flag & 0x40) != 0 ) /*0x98eab1*/
  {
    *_errno() = 0x22; /*0x98eab8*/
    goto LABEL_3; /*0x98eabe*/
  }
  if ( (flag & 1) != 0 ) /*0x98eac5*/
  {
    v2->_cnt = 0; /*0x98eac9*/
    if ( (flag & 0x10) == 0 ) /*0x98eacc*/
    {
      v2->_flag = flag | 0x20; /*0x98eb5a*/
      return 0xFFFFFFFF; /*0x98eb60*/
    }
    v2->_ptr = v2->_base; /*0x98ead8*/
    v2->_flag = flag & 0xFFFFFFFE; /*0x98eada*/
  }
  v5 = (v2->_flag & 0x10C) == 0; /*0x98eae6*/
  v2->_flag = v2->_flag & 0xFFFFFFED | 2; /*0x98eaea*/
  v2->_cnt = 0; /*0x98eaed*/
  v11 = 0; /*0x98eaf0*/
  if ( v5 && (v2 != (FILE *)(sub_98BAF0() + 8) && v2 != (FILE *)(sub_98BAF0() + 0x10) || !_isatty((int)File)) ) /*0x98eb10*/
    _getbuf(v2); /*0x98eb1b*/
  if ( (v2->_flag & 0x108) != 0 ) /*0x98eb28*/
  {
    base = v2->_base; /*0x98eb2e*/
    ptr = v2->_ptr; /*0x98eb31*/
    v2->_ptr = base + 1; /*0x98eb36*/
    v8 = ptr - base; /*0x98eb3b*/
    v2->_cnt = v2->_bufsiz - 1; /*0x98eb40*/
    if ( v8 <= 0 ) /*0x98eb43*/
    {
      if ( File == (FILE *)0xFFFFFFFF || File == (FILE *)0xFFFFFFFE ) /*0x98eb6d*/
        v9 = &aA_1; /*0x98eb85*/
      else
        v9 = (_BYTE *)(unk_BAAAC0[(int)File >> 5] + 0x28 * ((unsigned __int8)File & 0x1F)); /*0x98eb7c*/
      if ( (v9[4] & 0x20) != 0 ) /*0x98eb8e*/
      {
        v10 = _lseeki64((int)File, 0, 2); /*0x98eb95*/
        if ( (HIDWORD(v10) & (unsigned int)v10) == 0xFFFFFFFF ) /*0x98eba2*/
          goto LABEL_27; /*0x98eba2*/
      }
    }
    else
    {
      v11 = _write((int)File, base, v8); /*0x98eb52*/
    }
    *v2->_base = Ch; /*0x98ebaa*/
  }
  else
  {
    v8 = 1; /*0x98ebb0*/
    v11 = _write((int)File, &Ch, 1u); /*0x98ebc1*/
  }
  if ( v11 != v8 ) /*0x98ebc7*/
  {
LABEL_27:
    v2->_flag |= 0x20u; /*0x98ebc9*/
    return 0xFFFFFFFF; /*0x98ebd0*/
  }
  return (unsigned __int8)Ch; /*0x98ebdc*/
}
