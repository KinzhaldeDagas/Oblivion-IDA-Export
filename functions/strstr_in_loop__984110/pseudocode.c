int __usercall strstr_::in_loop@<eax>(char a1@<al>, __int16 a2@<dx>, int a3@<ecx>, char *a4@<esi>)
{
  if ( a1 == (_BYTE)a2 ) /*0x984112*/
    return strstr_::first_char_found(a2, a3, a4); /*0x984112*/
  if ( a1 ) /*0x984116*/
    return strstr_::loop_start(a2, a3, a4); /*0x984116*/
  return strstr_::not_found();
}
