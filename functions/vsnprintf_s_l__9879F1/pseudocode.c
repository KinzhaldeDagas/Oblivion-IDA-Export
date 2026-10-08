int __cdecl _vsnprintf_s_l(
        char *DstBuf,
        size_t DstSize,
        size_t MaxCount,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  int v6; // edi
  int v7; // esi
  int result; // eax
  int *v9; // eax
  int v10; // [esp+4h] [ebp-4h]

  if ( !(_DWORD)MaxCount ) /*0x9879fb*/
  {
    *_errno() = 0x16; /*0x987a07*/
    _invalid_parameter(0, v6, v7); /*0x987a0d*/
    return 0xFFFFFFFF; /*0x987a18*/
  }
  if ( HIDWORD(DstSize) ) /*0x987a25*/
  {
    if ( !DstBuf ) /*0x987a39*/
    {
LABEL_9:
      *_errno() = 0x16; /*0x987a42*/
LABEL_21:
      _invalid_parameter(0, v6, (int)DstBuf); /*0x987ae1*/
      return 0xFFFFFFFF; /*0x987ae6*/
    }
  }
  else if ( !DstBuf ) /*0x987a29*/
  {
    if ( !(_DWORD)DstSize ) /*0x987a2e*/
      return 0; /*0x987a32*/
    goto LABEL_9; /*0x987a2e*/
  }
  v6 = DstSize; /*0x987a3b*/
  if ( !(_DWORD)DstSize ) /*0x987a40*/
    goto LABEL_9; /*0x987a40*/
  v9 = _errno(); /*0x987a52*/
  if ( (unsigned int)DstSize > HIDWORD(DstSize) ) /*0x987a63*/
  {
    v6 = *v9; /*0x987a65*/
    result = _vsnprintf_helper( /*0x987a72*/
               *v9,
               (int)DstBuf,
               (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
               DstBuf,
               HIDWORD(DstSize) + 1,
               MaxCount,
               SHIDWORD(MaxCount),
               (int)Format);
    if ( result == 0xFFFFFFFE ) /*0x987a7d*/
    {
      if ( *_errno() == 0x22 ) /*0x987a87*/
        *_errno() = v6; /*0x987a8e*/
      return 0xFFFFFFFF; /*0x987a90*/
    }
    goto LABEL_18; /*0x987a7d*/
  }
  v10 = *v9; /*0x987a9b*/
  result = _vsnprintf_helper( /*0x987a9e*/
             DstSize,
             (int)DstBuf,
             (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
             DstBuf,
             DstSize,
             MaxCount,
             SHIDWORD(MaxCount),
             (int)Format);
  DstBuf[(_DWORD)DstSize - 1] = 0; /*0x987aa9*/
  if ( result != 0xFFFFFFFE ) /*0x987aad*/
  {
LABEL_18:
    if ( result >= 0 ) /*0x987acd*/
      return result; /*0x987acd*/
    goto LABEL_19; /*0x987acd*/
  }
  if ( HIDWORD(DstSize) == 0xFFFFFFFF ) /*0x987ab3*/
  {
    if ( *_errno() == 0x22 ) /*0x987abd*/
      *_errno() = v10; /*0x987ac7*/
    return 0xFFFFFFFF; /*0x987ac9*/
  }
LABEL_19:
  *DstBuf = 0; /*0x987acf*/
  if ( result == 0xFFFFFFFE ) /*0x987ad4*/
  {
    *_errno() = 0x22; /*0x987adb*/
    goto LABEL_21; /*0x987adb*/
  }
  return 0xFFFFFFFF; /*0x987af3*/
}
