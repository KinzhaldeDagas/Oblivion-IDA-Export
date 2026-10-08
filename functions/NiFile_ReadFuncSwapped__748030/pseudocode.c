unsigned int __cdecl NiFile_ReadFuncSwapped(void *self, char *Dst, size_t Count, unsigned int a4)
{
  unsigned int v7; // ebx

  if ( !(_DWORD)Count ) /*0x748037*/
    return 0; /*0x748039*/
  v7 = NiFile_DirectRead(self, Dst, Count); /*0x748052*/
  NiBinaryStream_DoByteSwap(Dst, Count, SHIDWORD(Count), a4); /*0x74805c*/
  return v7; /*0x74803b*/
}
