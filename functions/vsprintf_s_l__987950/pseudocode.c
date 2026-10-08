int __cdecl _vsprintf_s_l(char *DstBuf, size_t DstSize, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v5; // edi
  int v6; // esi
  int result; // eax

  if ( !HIDWORD(DstSize) ) /*0x987959*/
  {
    *_errno() = 0x16; /*0x987965*/
    _invalid_parameter(0, v5, v6); /*0x98796b*/
    return 0xFFFFFFFF; /*0x987976*/
  }
  if ( !DstBuf || !(_DWORD)DstSize ) /*0x987983*/
  {
    *_errno() = 0x16; /*0x98798a*/
LABEL_10:
    _invalid_parameter(0, v5, (int)DstBuf); /*0x9879c2*/
    return 0xFFFFFFFF; /*0x9879cf*/
  }
  result = _vsnprintf_helper( /*0x9879a4*/
             v5,
             (int)DstBuf,
             (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
             DstBuf,
             DstSize,
             SHIDWORD(DstSize),
             (int)Format,
             (int)Locale);
  if ( result < 0 ) /*0x9879ae*/
    *DstBuf = 0; /*0x9879b0*/
  if ( result == 0xFFFFFFFE ) /*0x9879b5*/
  {
    *_errno() = 0x22; /*0x9879bc*/
    goto LABEL_10; /*0x9879bc*/
  }
  return result; /*0x9879d3*/
}
