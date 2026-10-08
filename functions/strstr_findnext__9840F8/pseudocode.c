int __usercall strstr_::findnext@<eax>(__int16 a1@<dx>, _BYTE *a2@<edi>, int a3, int a4, int a5, int a6, int a7)
{
  if ( *a2 == (_BYTE)a1 ) /*0x984105*/
    return strstr_::first_char_found(a1, a7, a2 + 1); /*0x984105*/
  if ( *a2 ) /*0x9840fe*/
    return strstr_::loop_start(); /*0x98410a*/
  return strstr_::not_found();
}
