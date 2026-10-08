char *__usercall strncpy_::main_loop_entrance@<eax>(
        void *this@<ecx>,
        char a2@<bl>,
        int *a3@<edi>,
        int *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // eax
  int v9; // edx
  int *v10; // esi

  v8 = (*a4 + 0x7EFEFEFF) ^ ~*a4; /*0x98273b*/
  v9 = *a4; /*0x98273d*/
  v10 = a4 + 1; /*0x98273f*/
  if ( (v8 & 0x81010100) != 0 ) /*0x982747*/
  {
    if ( !(_BYTE)v9 ) /*0x98274b*/
    {
      *a3 = 0; /*0x98277b*/
      return (char *)strncpy_::fill_with_EOS_dwords(this); /*0x98277c*/
    }
    if ( !BYTE1(v9) ) /*0x98274f*/
    {
      *a3 = (unsigned __int8)v9; /*0x982775*/
      return (char *)strncpy_::fill_with_EOS_dwords(this); /*0x982777*/
    }
    if ( (v9 & 0xFF0000) == 0 ) /*0x982757*/
    {
      *a3 = (unsigned __int16)v9; /*0x98276b*/
      return (char *)strncpy_::fill_with_EOS_dwords(this); /*0x98276d*/
    }
    if ( (v9 & 0xFF000000) == 0 ) /*0x98275f*/
    {
      *a3 = v9; /*0x982761*/
      return (char *)strncpy_::fill_with_EOS_dwords(this); /*0x982763*/
    }
  }
  return strncpy_::main_loop(a2, v9, (int)this, a3, v10, a5, a6, a7, a8);
}
