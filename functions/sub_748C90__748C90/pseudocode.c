int __usercall sub_748C90@<eax>(int a1@<esi>, _DWORD *a2, void *Src, size_t Size, unsigned int a5)
{
  void *v6; // esi
  int v7; // edi
  size_t v8; // [esp-8h] [ebp-Ch]

  if ( !(_DWORD)Size ) /*0x748c97*/
    return 0; /*0x748c99*/
  HIDWORD(v8) = a1; /*0x748c9d*/
  v6 = (void *)FormHeapAlloc(Size); /*0x748ca4*/
  memcpy(v6, Src, Size); /*0x748cad*/
  NiBinaryStream_DoByteSwap((char *)v6, Size, SHIDWORD(Size), a5); /*0x748cbe*/
  LODWORD(v8) = Size; /*0x748cca*/
  v7 = sub_748920(a2, v6, v8); /*0x748cd2*/
  FormHeapFree((unsigned int)v6); /*0x748cd4*/
  return v7; /*0x748c9b*/
}
