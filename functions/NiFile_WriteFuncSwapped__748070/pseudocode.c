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
  size_t v9; // [esp-Ch] [ebp-10h]
  size_t v10; // [esp-8h] [ebp-Ch]

  if ( !(_DWORD)Size )
    return 0;
  HIDWORD(v10) = a2;
  v7 = (void *)FormHeapAlloc(Size);
  LODWORD(v9) = Size;
  memcpy(v7, Src, v9);
  NiBinaryStream_DoByteSwap((char *)v7, Size, SHIDWORD(Size), a6);
  LODWORD(v10) = Size;
  v8 = NiFile_DirectWrite(a3, a1, Size, (char *)v7, v10);
  FormHeapFree((unsigned int)v7);
  return v8;
}
