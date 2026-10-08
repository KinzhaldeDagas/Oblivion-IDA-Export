int __usercall _access_s@<eax>(int a1@<ebx>, int a2@<edi>, LPCSTR lpFileName, int a4)
{
  DWORD FileAttributesA; // eax
  DWORD LastError; // eax

  if ( !lpFileName || (a4 & 0xFFFFFFF9) != 0 ) /*0x982d1f*/
  {
    *__doserrno() = 0; /*0x982cf8*/
    *_errno() = 0x16; /*0x982d04*/
    _invalid_parameter(a1, a2, 0); /*0x982d0a*/
    return 0x16; /*0x982d16*/
  }
  FileAttributesA = GetFileAttributesA(lpFileName); /*0x982d25*/
  if ( FileAttributesA == 0xFFFFFFFF ) /*0x982d2e*/
  {
    LastError = GetLastError(); /*0x982d30*/
    _dosmaperr(LastError); /*0x982d37*/
    return *_errno(); /*0x982d45*/
  }
  if ( (FileAttributesA & 0x10) == 0 && (FileAttributesA & 1) != 0 && (a4 & 2) != 0 ) /*0x982d53*/
  {
    *__doserrno() = 5; /*0x982d5a*/
    *_errno() = 0xD; /*0x982d65*/
    return *_errno(); /*0x982d6b*/
  }
  return 0; /*0x982d15*/
}
