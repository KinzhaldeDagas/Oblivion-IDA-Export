int __usercall strncpy_::fill_with_EOS_loop@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        _DWORD *a3@<edi>,
        char a4@<bl>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  do /*0x982791*/
  {
    *a3++ = a1; /*0x982789*/
    --a2; /*0x98278e*/
  }
  while ( a2 ); /*0x982791*/
  return strncpy_::fill_tail(a1, a4, a3, a5, a6, a7, a8);
}
