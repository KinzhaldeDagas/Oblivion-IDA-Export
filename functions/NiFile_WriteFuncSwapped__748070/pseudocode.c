unsigned int __usercall NiFile_WriteFuncSwapped@<eax>(
        FILE *a1@<ebp>,
        int a2@<esi>,
        int a3,
        void *Src,
        size_t Size,
        unsigned int a6)
{
  void *v7; // esi
  unsigned int v8; // edi
  size_t v9; // [esp-8h] [ebp-Ch]

  if ( !(_DWORD)Size ) /*0x748077*/
    return 0; /*0x748079*/
  HIDWORD(v9) = a2; /*0x74807d*/
  v7 = (void *)FormHeapAlloc(Size); /*0x748084*/
  memcpy(v7, Src, Size); /*0x74808d*/
  NiBinaryStream_DoByteSwap((char *)v7, Size, SHIDWORD(Size), a6); /*0x74809e*/
  LODWORD(v9) = Size; /*0x7480aa*/
  v8 = NiFile_DirectWrite(a3, a1, Size, (char *)v7, v9); /*0x7480b2*/
  FormHeapFree((unsigned int)v7); /*0x7480b4*/
  return v8; /*0x74807b*/
}
