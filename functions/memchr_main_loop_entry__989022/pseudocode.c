int __usercall memchr_::main_loop_entry@<eax>(unsigned int a1@<eax>, _DWORD *a2@<edx>, int a3@<ebx>)
{
  int v3; // ecx
  _DWORD *v4; // edx

  v3 = a3 ^ *a2; /*0x989024*/
  v4 = a2 + 1; /*0x989032*/
  if ( (((v3 + 0x7EFEFEFF) ^ ~v3) & 0x81010100) != 0 ) /*0x98903b*/
    JUMPOUT(0x98903D); /*0x98903d*/
  return memchr_::main_loop_1(a1, v4, a3);
}
