int sub_8B1750(char *DstBuf, char *Format, ...)
{
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return _vsprintf(DstBuf, Format, ArgList);
}
