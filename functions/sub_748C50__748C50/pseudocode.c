unsigned int __usercall sub_748C50@<eax>(unsigned int a1@<edi>, _DWORD *a2, void *Dst, size_t Size, unsigned int a5)
{
  unsigned int v6; // ebx

  if ( !(_DWORD)Size ) /*0x748c57*/
    return 0; /*0x748c59*/
  v6 = sub_7488E0(a2, Dst, __PAIR64__(a1, Size)); /*0x748c72*/
  NiBinaryStream_DoByteSwap((char *)Dst, Size, SHIDWORD(Size), a5); /*0x748c7c*/
  return v6; /*0x748c5b*/
}
