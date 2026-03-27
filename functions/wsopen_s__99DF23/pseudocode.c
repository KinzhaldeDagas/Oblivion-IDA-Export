int __usercall _wsopen_s@<eax>(int a1@<ebx>, int *a2, LPCSTR lpFileName, int a4, int a5, int a6)
{
  return _wsopen_helper(a1, lpFileName, a4, a5, a6, a2, 1);
}
