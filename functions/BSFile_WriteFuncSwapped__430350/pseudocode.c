int __cdecl BSFile_WriteFuncSwapped(int a1, void *Src, size_t Size, unsigned int a4)
{
  void *v5; // esi
  int v6; // edi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( !(_DWORD)Size ) /*0x430357*/
    return 0; /*0x430359*/
  v5 = (void *)FormHeapAlloc(Size);             // MEF v40 verified BSFile swapped-write OOM guard: successful allocation returns to vanilla; failure removes allocator return/size, restores saved ESI/EDI, and returns 0 bytes without memcpy, byte swap, stream write, or free. /*0x430364*/
  LODWORD(v7) = Size; /*0x43036a*/
  memcpy(v5, Src, v7); /*0x43036d*/
  if ( HIDWORD(Size) ) /*0x43037b*/
    NiBinaryStream_DoByteSwap((char *)v5, Size, SHIDWORD(Size), a4); /*0x430385*/
  v6 = (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)a1 + 0x3C))(a1, v5, Size); /*0x43039b*/
  FormHeapFree((unsigned int)v5); /*0x43039d*/
  return v6; /*0x43035b*/
}
