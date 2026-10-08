int __cdecl _access(const char *lpFileName, int a2)
{
  int v2; // ebx
  int v3; // edi

  return -(_access_s(v2, v3, lpFileName, a2) != 0); /*0x982d84*/
}
