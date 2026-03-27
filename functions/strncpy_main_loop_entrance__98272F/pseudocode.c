char *__usercall strncpy_::main_loop_entrance@<eax>(
        int a1@<ecx>,
        char a2@<bl>,
        int *a3@<edi>,
        int *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edx

  v8 = *a4;
  if ( (((*a4 + 0x7EFEFEFF) ^ ~*a4) & 0x81010100) != 0 )
  {
    if ( !(_BYTE)v8 )
    {
      *a3 = 0;
      return (char *)strncpy_::fill_with_EOS_dwords();
    }
    if ( !BYTE1(v8) )
    {
      *a3 = (unsigned __int8)*a4;
      return (char *)strncpy_::fill_with_EOS_dwords();
    }
    if ( (v8 & 0xFF0000) == 0 )
    {
      *a3 = (unsigned __int16)*a4;
      return (char *)strncpy_::fill_with_EOS_dwords();
    }
    if ( (v8 & 0xFF000000) == 0 )
    {
      *a3 = v8;
      return (char *)strncpy_::fill_with_EOS_dwords();
    }
  }
  return strncpy_::main_loop(a2, v8, a1, a3, a5, a6, a7, a8);
}
