int __usercall strncpy_::dest_align_loop_end@<eax>(
        unsigned int a1@<ecx>,
        char a2@<al>,
        _BYTE *a3@<edi>,
        int a4,
        int a5)
{
  unsigned int v6; // ecx

  v6 = a1 >> 2; /*0x98270e*/
  if ( v6 ) /*0x982711*/
    return strncpy_::fill_dwords_with_EOS(v6, a3); /*0x982711*/
  else
    return strncpy_::finish_loop(a2, a3, a1, a4, a5); /*0x982712*/
}
