int __usercall sub_748C90@<eax>(int a1@<esi>, _DWORD *a2, void *Src, size_t Size, unsigned int a5)
{
  void *v6; // esi
  int v7; // edi
  size_t v8; // [esp-Ch] [ebp-10h]
  size_t v9; // [esp-8h] [ebp-Ch]

  if ( !(_DWORD)Size )
    return 0;
  HIDWORD(v9) = a1;
  v6 = (void *)FormHeapAlloc(Size);
  LODWORD(v8) = Size;
  memcpy(v6, Src, v8);
  NiBinaryStream_DoByteSwap((char *)v6, Size, SHIDWORD(Size), a5);
  LODWORD(v9) = Size;
  v7 = sub_748920(a2, Size, v6, v9);
  FormHeapFree((unsigned int)v6);
  return v7;
}
