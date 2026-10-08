// positive sp value has been detected, the output may be wrong!
unsigned int __usercall unknown_libname_58_::unknown_libname_59@<eax>(
        unsigned __int16 a1@<cx>,
        int a2@<ebx>,
        int a3@<ebp>,
        unsigned __int16 a4@<si>)
{
  unsigned int result; // eax

  if ( a1 == a4 )
  {
    if ( a4 != (_WORD)a2 && *(_DWORD *)(a3 + 0x10) != a2 ) /*0x986ac5*/
      JUMPOUT(0x9869B8); /*0x9869b8*/
    if ( *(_BYTE *)(a3 - 0xC) != (_BYTE)a2 ) /*0x986ace*/
      *(_DWORD *)(*(_DWORD *)(a3 - 0x10) + 0x70) &= ~2u; /*0x986ad3*/
    return 0; /*0x986ad7*/
  }
  else
  {
    result = a1 < a4 ? 1 : 0xFFFFFFFF;
    if ( *(_BYTE *)(a3 - 0xC) != (_BYTE)a2 ) /*0x986b1b*/
      *(_DWORD *)(*(_DWORD *)(a3 - 0x10) + 0x70) &= ~2u; /*0x986b20*/
  }
  return result; /*0x986add*/
}
