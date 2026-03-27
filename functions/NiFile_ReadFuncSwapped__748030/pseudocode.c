unsigned int __usercall NiFile_ReadFuncSwapped@<eax>(
        unsigned int a1@<edi>,
        FILE *a2@<ebp>,
        int a3,
        char *Dst,
        size_t Count,
        unsigned int a6)
{
  unsigned int v7; // ebx

  if ( !(_DWORD)Count )
    return 0;
  v7 = NiFile_DirectRead(a3, a2, (int)Dst, Dst, __PAIR64__(a1, Count));
  NiBinaryStream_DoByteSwap(Dst, Count, SHIDWORD(Count), a6);
  return v7;
}
