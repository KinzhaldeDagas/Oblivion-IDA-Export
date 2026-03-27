int __cdecl _access(const char *lpFileName, int a2)
{
  return -(_access_s(lpFileName, a2) != 0);
}
