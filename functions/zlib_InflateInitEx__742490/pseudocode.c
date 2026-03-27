unsigned int __cdecl zlib_InflateInitEx(_DWORD *a1, _BYTE *a2, int a3)
{
  return zlib_InflateInit2(a1, 0xF, a2, a3);
}
