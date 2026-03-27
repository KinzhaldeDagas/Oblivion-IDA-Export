int __usercall strncpy_::fill_with_EOS_loop@<eax>(int a1@<eax>, int a2@<ecx>, _DWORD *a3@<edi>)
{
  do
  {
    *a3++ = a1;
    --a2;
  }
  while ( a2 );
  return strncpy_::fill_tail();
}
