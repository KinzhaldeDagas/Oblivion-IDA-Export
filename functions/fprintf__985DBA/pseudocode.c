int fprintf(FILE *File, const char *Format, ...)
{
  int v2; // ebp
  _DWORD *v3; // edi
  _BYTE *v4; // eax
  char *v5; // eax
  int v6; // edi
  unsigned int v8; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+3Ch] [ebp+10h] BYREF

  va_start(va, Format);
  v8 = 0; /*0x985dc8*/
  if ( !File || !Format ) /*0x985e03*/
  {
    *_errno() = 0x16; /*0x985dde*/
    _invalid_parameter(0, (int)v3, (int)File); /*0x985de9*/
    JUMPOUT(0x985EF9); /*0x985ef9*/
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x985e09*/
  if ( (File->_flag & 0x40) == 0 )
  {
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x985e32*/
    {
      v4 = &aA_1; /*0x985e56*/
    }
    else
    {
      v3 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x985e3d*/
      v4 = (_BYTE *)(*v3 + 0x28 * (_fileno(File) & 0x1F)); /*0x985e52*/
    }
    if ( (v4[0x24] & 0x7F) != 0
      || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
        ? (v5 = (char *)&aA_1)
        : (v3 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v5 = (char *)(*v3 + 0x28 * (_fileno(File) & 0x1F))),
          v5[0x24] < 0) )
    {
      *_errno() = 0x16; /*0x985eab*/
      _invalid_parameter(0, (int)v3, (int)File); /*0x985eb6*/
      v8 = 0xFFFFFFFF; /*0x985ebe*/
    }
  }
  if ( !v8 ) /*0x985ec5*/
  {
    v6 = _stbuf(File); /*0x985ecd*/
    _output_l(File, (unsigned __int8 *)Format, 0, (int *)va); /*0x985ed8*/
    _ftbuf(v6, File); /*0x985ee2*/
  }
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x985f02*/
  return fprintf_::_LN19(v2);
}
