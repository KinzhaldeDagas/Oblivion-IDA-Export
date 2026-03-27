int __usercall strstr_::first_char_found@<eax>(__int16 a1@<dx>, int a2@<ecx>, char *a3@<esi>)
{
  if ( *a3 == HIBYTE(a1) )
    JUMPOUT(0x984127);
  return strstr_::in_loop(*a3, a1, a2);
}
