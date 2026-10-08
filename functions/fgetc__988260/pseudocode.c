int __cdecl fgetc(FILE *File)
{
  _DWORD *v1; // edi
  _BYTE *v3; // eax
  char *v4; // eax
  int v6; // eax
  int v7; // [esp+10h] [ebp-1Ch]

  v7 = 0; /*0x98826e*/
  if ( File )
  {
    _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x9882a0*/
    if ( (File->_flag & 0x40) == 0 )
    {
      if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x9882c9*/
      {
        v3 = &aA_1; /*0x9882ed*/
      }
      else
      {
        v1 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x9882d4*/
        v3 = (_BYTE *)(*v1 + 0x28 * (_fileno(File) & 0x1F)); /*0x9882e9*/
      }
      if ( (v3[0x24] & 0x7F) != 0
        || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
          ? (v4 = (char *)&aA_1)
          : (v1 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v4 = (char *)(*v1 + 0x28 * (_fileno(File) & 0x1F))),
            v4[0x24] < 0) )
      {
        *_errno() = 0x16; /*0x988342*/
        _invalid_parameter(0, (int)v1, (int)File); /*0x98834d*/
        v7 = 0xFFFFFFFF; /*0x988355*/
      }
    }
    if ( !v7 ) /*0x98835c*/
    {
      if ( --File->_cnt < 0 ) /*0x98835e*/
        v6 = _filbuf(File); /*0x98836e*/
      else
        v6 = *(unsigned __int8 *)File->_ptr++; /*0x988365*/
      v7 = v6; /*0x988374*/
    }
    _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x988390*/
    return v7; /*0x988383*/
  }
  else
  {
    *_errno() = 0x16; /*0x988284*/
    _invalid_parameter(0, (int)v1, 0); /*0x98828f*/
    return 0xFFFFFFFF; /*0x988297*/
  }
}
