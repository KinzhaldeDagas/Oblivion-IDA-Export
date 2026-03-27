int __cdecl _vsprintf_s_l(char *DstBuf, size_t DstSize, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v5; // edi
  int v6; // esi
  int result; // eax

  if ( !HIDWORD(DstSize) )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v5, v6);
    return 0xFFFFFFFF;
  }
  if ( !DstBuf || !(_DWORD)DstSize )
  {
    *_errno() = 0x16;
LABEL_10:
    _invalid_parameter(0, v5, (int)DstBuf);
    return 0xFFFFFFFF;
  }
  result = _vsnprintf_helper(
             v5,
             (int)DstBuf,
             (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
             DstBuf,
             DstSize,
             SHIDWORD(DstSize),
             (int)Format,
             (int)Locale);
  if ( result < 0 )
    *DstBuf = 0;
  if ( result == 0xFFFFFFFE )
  {
    *_errno() = 0x22;
    goto LABEL_10;
  }
  return result;
}
