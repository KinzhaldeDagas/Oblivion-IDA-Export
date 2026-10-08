int __usercall sub_6C5D40@<eax>(va_list a1@<edi>, char *DstBuf, size_t SizeInBytes, char *Format, ...)
{
  int result; // eax

  if ( !(_DWORD)SizeInBytes ) /*0x6c5d47*/
    return 1; /*0x6c5d49*/
  result = vsprintf_s(DstBuf, SizeInBytes, (const char *)&Format, a1); /*0x6c5d61*/
  DstBuf[(_DWORD)SizeInBytes - 1] = 0; /*0x6c5d69*/
  return result; /*0x6c5d4e*/
}
