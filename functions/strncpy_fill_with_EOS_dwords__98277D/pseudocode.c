int __usercall strncpy_::fill_with_EOS_dwords@<eax>(
        void *this@<ecx>,
        char a2@<bl>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _BYTE *v7; // edi

  v7 = (_BYTE *)(a3 + 4); /*0x98277d*/
  if ( this == (void *)1 ) /*0x982785*/
    return strncpy_::fill_tail(0, a2, v7, a4, a5, a6, a7); /*0x982785*/
  else
    return strncpy_::fill_dwords_with_EOS(); /*0x982786*/
}
