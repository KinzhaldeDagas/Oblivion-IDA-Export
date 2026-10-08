int __thiscall BSStringT_Format(BSStringT *this, char *Format, va_list ArgList)
{
  int v4; // edi
  char DstBuf[1024]; // [esp+8h] [ebp-404h] BYREF

  v4 = _vsprintf(DstBuf, Format, ArgList); /*0x402d3e*/
  BSStringT_Set(this, DstBuf, 0); /*0x402d40*/
  return v4; /*0x402d45*/
}
