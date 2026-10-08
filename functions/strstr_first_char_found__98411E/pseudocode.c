int __usercall strstr_::first_char_found@<eax>(__int16 a1@<dx>, int a2@<ecx>, char *a3@<esi>)
{
  char v3; // al
  char *v4; // esi

  v3 = *a3; /*0x98411e*/
  v4 = a3 + 1; /*0x984120*/
  if ( v3 == HIBYTE(a1) ) /*0x984125*/
    JUMPOUT(0x984127); /*0x984127*/
  return strstr_::in_loop(v3, a1, a2, v4);
}
