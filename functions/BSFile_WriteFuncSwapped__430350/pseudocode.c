int __cdecl BSFile_WriteFuncSwapped(int a1, void *Src, size_t Size, unsigned int a4)
{
  void *v5; // esi
  int v6; // edi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( !(_DWORD)Size )
    return 0;
  v5 = (void *)FormHeapAlloc(Size);
  LODWORD(v7) = Size;
  memcpy(v5, Src, v7);
  if ( HIDWORD(Size) )
    NiBinaryStream_DoByteSwap((char *)v5, Size, SHIDWORD(Size), a4);
  v6 = (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)a1 + 0x3C))(a1, v5, Size);
  FormHeapFree((unsigned int)v5);
  return v6;
}
