int __usercall memchr_::main_loop_entry@<eax>(unsigned int a1@<eax>, _DWORD *a2@<edx>, int a3@<ebx>)
{
  if ( ((((a3 ^ *a2) + 0x7EFEFEFF) ^ ~(a3 ^ *a2)) & 0x81010100) != 0 )
    JUMPOUT(0x98903D);
  return memchr_::main_loop_1(a1);
}
