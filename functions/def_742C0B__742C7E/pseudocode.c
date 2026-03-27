int __usercall def_742C0B@<eax>(unsigned int a1@<ebx>, _DWORD *a2@<edi>, int a3, int a4, int a5, int a6, size_t Size)
{
  if ( *a2 <= 0x1Cu )
    JUMPOUT(0x742620);
  return def_742620(a3, a4, a5, a6, Size, a1 >> 2);
}
