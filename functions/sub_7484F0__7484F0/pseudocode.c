void __usercall sub_7484F0(FILE *a1@<ebx>)
{
  unsigned int i; // esi
  va_list v2; // edi

  for ( i = 0; i < 0x10; ++i ) /*0x7484f2*/
  {
    v2 = (va_list)unk_B403C8[i]; /*0x7484f4*/
    if ( v2 ) /*0x7484fc*/
    {
      sub_748C00(unk_B403C8[i], a1, v2); /*0x748500*/
      FormHeapFree((unsigned int)v2); /*0x748506*/
    }
    unk_B403C8[i] = 0; /*0x74850e*/
  }
  unk_B4060C = 0; /*0x748521*/
}
