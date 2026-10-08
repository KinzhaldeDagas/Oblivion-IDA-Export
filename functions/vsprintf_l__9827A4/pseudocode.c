int __cdecl _vsprintf_l(char *DstBuf, const char *Format, _locale_t a3, va_list ArgList)
{
  int v4; // edi
  int v5; // esi
  int result; // eax
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( Format && DstBuf ) /*0x9827d4*/
  {
    File._base = DstBuf; /*0x9827da*/
    File._ptr = DstBuf; /*0x9827e0*/
    File._cnt = 0x7FFFFFFF; /*0x9827ea*/
    File._flag = 0x42; /*0x9827f1*/
    _output_l(&File, (unsigned __int8 *)Format, (struct localeinfo_struct *)a3, ArgList); /*0x9827f8*/
    if ( --File._cnt < 0 ) /*0x982805*/
      _flsbuf(0, &File); /*0x982813*/
    else
      *File._ptr = 0; /*0x98280a*/
  }
  else
  {
    *_errno() = 0x16; /*0x9827bc*/
    _invalid_parameter(0, v4, v5); /*0x9827c2*/
  }
  _vsprintf_l_::Done(); /*0x98281c*/
  return result;
}
