int __usercall unknown_libname_100_::unknown_libname_107@<eax>(_DWORD *a1@<ebp>)
{
  int v1; // ebx

  v1 = a1[0xFFFFFFDB] + 1;
  *(_DWORD *)((char *)a1 + 0xFFFFFF76) = v1;
  if ( (a1[0xFFFFFF4E] & 1) != 0 )
    return unknown_libname_100_::unknown_libname_108();
  *(_DWORD *)((char *)a1 + 0xFFFFFF7A) = a1[2];
  *(_DWORD *)((char *)a1 + 0xFFFFFF7A + 4) = a1[3];
  if ( *(_BYTE *)(v1 + 0xC) == 1 )
    return unknown_libname_100_::unknown_libname_108();
  *(_DWORD *)((char *)a1 + 0xFFFFFF82) = a1[4];
  *(_DWORD *)((char *)a1 + 0xFFFFFF82 + 4) = a1[5];
  return unknown_libname_100_::unknown_libname_108();
}
