int __usercall memchr_::main_loop_1@<eax>(unsigned int a1@<eax>, _DWORD *a2@<edx>, int a3@<ebx>)
{
  bool v3; // cf
  unsigned int v4; // eax

  v3 = a1 < 4; /*0x98901d*/
  v4 = a1 - 4; /*0x98901d*/
  if ( v3 ) /*0x989020*/
    return memchr_::return_from_main(v4); /*0x989020*/
  else
    return memchr_::main_loop_entry(v4, a2, a3); /*0x989021*/
}
