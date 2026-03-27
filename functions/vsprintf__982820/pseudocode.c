int __cdecl _vsprintf(char *DstBuf, char *Format, va_list ArgList)
{
  return _vsprintf_l(DstBuf, Format, 0, ArgList);
}
