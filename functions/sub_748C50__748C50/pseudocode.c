int __usercall sub_748C50@<eax>(unsigned int a1@<edi>, _DWORD *a2, void *Dst, size_t Size, unsigned int a5)
{
  int v6; // ebx

  if ( !(_DWORD)Size )
    return 0;
  v6 = sub_7488E0(a2, Dst, __PAIR64__(a1, Size));
  NiBinaryStream_DoByteSwap((char *)Dst, Size, SHIDWORD(Size), a5);
  return v6;
}
