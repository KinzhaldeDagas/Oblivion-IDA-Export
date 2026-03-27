int __usercall strstr_::findnext@<eax>(char a1@<dl>, _BYTE *a2@<edi>, int a3, int a4, int a5, int a6, int a7)
{
  if ( *a2 == a1 )
    return strstr_::first_char_found(a7);
  if ( *a2 )
    return strstr_::loop_start(a7);
  return strstr_::not_found(a7);
}
