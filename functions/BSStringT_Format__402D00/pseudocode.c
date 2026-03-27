int __thiscall BSStringT_Format(BSStringT *this, char *Format, va_list ArgList)
{
  int v4; // edi
  char DstBuf[1024]; // [esp+8h] [ebp-404h] BYREF

  v4 = _vsprintf(DstBuf, Format, ArgList);
  BSStringT_Set(this, DstBuf, 0);
  return v4;
}
