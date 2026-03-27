int __usercall strstr_::in_loop@<eax>(char a1@<al>, char a2@<dl>, int a3@<ecx>)
{
  if ( a1 == a2 )
    return strstr_::first_char_found(a3);
  if ( a1 )
    return strstr_::loop_start();
  return strstr_::not_found(a3);
}
