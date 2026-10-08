unsigned int __cdecl NiFile_ReadFunc(void *self, void *Dst, size_t Count)
{
  return NiFile_DirectRead(self, Dst, Count); /*0x748003*/
}
