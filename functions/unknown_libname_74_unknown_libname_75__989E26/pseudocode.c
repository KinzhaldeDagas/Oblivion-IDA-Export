// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_74_::unknown_libname_75@<eax>(
        DWORD a1@<esi>,
        int a2@<ebx>,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // edi
  DWORD v5; // eax

  do /*0x989e63*/
  {
    v4 = _calloc_impl(a2, a1, a3, a4); /*0x989e35*/
    if ( v4 ) /*0x989e3c*/
      break; /*0x989e3c*/
    if ( !dword_BA9E00[3] ) /*0x989e44*/
      break; /*0x989e44*/
    Sleep(a1); /*0x989e47*/
    v5 = a1 + 0x3E8; /*0x989e4d*/
    if ( a1 + 0x3E8 > dword_BA9E00[3] ) /*0x989e59*/
      v5 = 0xFFFFFFFF; /*0x989e5b*/
    a1 = v5; /*0x989e61*/
  }
  while ( v5 != 0xFFFFFFFF ); /*0x989e63*/
  return v4; /*0x989e69*/
}
