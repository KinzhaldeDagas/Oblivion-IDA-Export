void __usercall unknown_libname_100_::unknown_libname_107(_DWORD *a1@<ebp>, double a2@<st0>)
{
  int v2; // ebx

  v2 = a1[0xFFFFFFDB] + 1; /*0x990a77*/
  *(_DWORD *)((char *)a1 + 0xFFFFFF76) = v2; /*0x990a78*/
  if ( (a1[0xFFFFFF4E] & 1) == 0 ) /*0x990a85*/
  {
    *(_DWORD *)((char *)a1 + 0xFFFFFF7A) = a1[2]; /*0x990a91*/
    *(_DWORD *)((char *)a1 + 0xFFFFFF7A + 4) = a1[3]; /*0x990a92*/
    if ( *(_BYTE *)(v2 + 0xC) != 1 ) /*0x990a97*/
    {
      *(_DWORD *)((char *)a1 + 0xFFFFFF82) = a1[4]; /*0x990a9f*/
      *(_DWORD *)((char *)a1 + 0xFFFFFF82 + 4) = a1[5]; /*0x990aa0*/
    }
  }
  unknown_libname_100_::unknown_libname_108((int)a1, a2); /*0x990aa0*/
}
