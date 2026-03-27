int __usercall sub_6C5D40@<eax>(va_list a1@<edi>, char *DstBuf, size_t SizeInBytes, char *Format, ...)
{
  int result; // eax

  if ( !(_DWORD)SizeInBytes )
    return 1;
  result = vsprintf_s(DstBuf, SizeInBytes, (const char *)&Format, a1);
  DstBuf[(_DWORD)SizeInBytes - 1] = 0;
  return result;
}
