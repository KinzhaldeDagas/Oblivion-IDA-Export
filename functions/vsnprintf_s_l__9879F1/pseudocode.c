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

  if ( !(_DWORD)MaxCount )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v6, v7);
    return 0xFFFFFFFF;
  }
  if ( HIDWORD(DstSize) )
  {
    if ( !DstBuf )
    {
LABEL_9:
      *_errno() = 0x16;
LABEL_21:
      _invalid_parameter(0, v6, (int)DstBuf);
      return 0xFFFFFFFF;
    }
  }
  else if ( !DstBuf )
  {
    if ( !(_DWORD)DstSize )
      return 0;
    goto LABEL_9;
  }
  v6 = DstSize;
  if ( !(_DWORD)DstSize )
    goto LABEL_9;
  v9 = _errno();
  if ( (unsigned int)DstSize > HIDWORD(DstSize) )
  {
    v6 = *v9;
    result = _vsnprintf_helper(
               *v9,
               (int)DstBuf,
               (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
               DstBuf,
               HIDWORD(DstSize) + 1,
               MaxCount,
               SHIDWORD(MaxCount),
               (int)Format);
    if ( result == 0xFFFFFFFE )
    {
      if ( *_errno() == 0x22 )
        *_errno() = v6;
      return 0xFFFFFFFF;
    }
    goto LABEL_18;
  }
  v10 = *v9;
  result = _vsnprintf_helper(
             DstSize,
             (int)DstBuf,
             (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
             DstBuf,
             DstSize,
             MaxCount,
             SHIDWORD(MaxCount),
             (int)Format);
  DstBuf[(_DWORD)DstSize - 1] = 0;
  if ( result != 0xFFFFFFFE )
  {
LABEL_18:
    if ( result >= 0 )
      return result;
    goto LABEL_19;
  }
  if ( HIDWORD(DstSize) == 0xFFFFFFFF )
  {
    if ( *_errno() == 0x22 )
      *_errno() = v10;
    return 0xFFFFFFFF;
  }
LABEL_19:
  *DstBuf = 0;
  if ( result == 0xFFFFFFFE )
  {
    *_errno() = 0x22;
    goto LABEL_21;
  }
  return 0xFFFFFFFF;
}
