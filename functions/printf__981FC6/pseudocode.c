int printf(const char *Format, ...)
{
  int v1; // ebx
  int v2; // edi
  _RTL_CRITICAL_SECTION_0 *v4; // eax
  FILE *v5; // eax
  int v6; // edi
  FILE *v7; // eax
  FILE *v8; // eax
  _RTL_CRITICAL_SECTION_0 *v9; // eax
  int v10; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+38h] [ebp+Ch] BYREF

  va_start(va, Format);
  if ( Format ) /*0x981fde*/
  {
    v4 = (_RTL_CRITICAL_SECTION_0 *)sub_98BAF0(); /*0x981ffd*/
    _lock_file2(1, v4 + 1); /*0x98200a*/
    v5 = (FILE *)sub_98BAF0(); /*0x982014*/
    v6 = _stbuf(v5 + 1); /*0x982022*/
    v7 = (FILE *)sub_98BAF0(); /*0x98202c*/
    v10 = _output_l(v7 + 1, (unsigned __int8 *)Format, 0, (int *)va); /*0x982039*/
    v8 = (FILE *)sub_98BAF0(); /*0x98203c*/
    _ftbuf(v6, v8 + 1); /*0x982045*/
    v9 = (_RTL_CRITICAL_SECTION_0 *)sub_98BAF0(); /*0x982062*/
    _unlock_file2(1, v9 + 1); /*0x98206d*/
    return v10; /*0x982059*/
  }
  else
  {
    *_errno() = 0x16; /*0x981fe5*/
    _invalid_parameter(v1, v2, 0); /*0x981ff0*/
    return 0xFFFFFFFF; /*0x981ff8*/
  }
}
