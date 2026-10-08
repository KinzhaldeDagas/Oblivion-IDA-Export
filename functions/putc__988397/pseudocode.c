int __cdecl putc(int Ch, FILE *File)
{
  _DWORD *v2; // edi
  _BYTE *v4; // eax
  char *v5; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-1Ch]

  v8 = 0; /*0x9883a5*/
  if ( File )
  {
    _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x9883d7*/
    if ( (File->_flag & 0x40) == 0 )
    {
      if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x988400*/
      {
        v4 = &aA_1; /*0x988424*/
      }
      else
      {
        v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x98840b*/
        v4 = (_BYTE *)(*v2 + 0x28 * (_fileno(File) & 0x1F)); /*0x988420*/
      }
      if ( (v4[0x24] & 0x7F) != 0
        || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
          ? (v5 = (char *)&aA_1)
          : (v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v5 = (char *)(*v2 + 0x28 * (_fileno(File) & 0x1F))),
            v5[0x24] < 0) )
      {
        *_errno() = 0x16; /*0x988479*/
        _invalid_parameter(0, (int)v2, (int)File); /*0x988484*/
        v8 = 0xFFFFFFFF; /*0x98848c*/
      }
    }
    if ( !v8 ) /*0x988493*/
    {
      if ( --File->_cnt < 0 ) /*0x988495*/
      {
        v7 = _flsbuf(Ch, File); /*0x9884ac*/
      }
      else
      {
        *File->_ptr = Ch; /*0x98849f*/
        v7 = (unsigned __int8)Ch; /*0x9884a1*/
        ++File->_ptr; /*0x9884a4*/
      }
      v8 = v7; /*0x9884b3*/
    }
    _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x9884cf*/
    return v8; /*0x9884c2*/
  }
  else
  {
    *_errno() = 0x16; /*0x9883bb*/
    _invalid_parameter(0, (int)v2, 0); /*0x9883c6*/
    return 0xFFFFFFFF; /*0x9883ce*/
  }
}
