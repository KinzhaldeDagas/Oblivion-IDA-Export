// positive sp value has been detected, the output may be wrong!
unsigned int __usercall unknown_libname_56_::unknown_libname_57@<eax>(
        unsigned __int16 a1@<ax>,
        unsigned __int16 a2@<cx>,
        int a3@<ebx>,
        int a4@<ebp>)
{
  unsigned int result; // eax

  if ( a1 == a2 )
  {
    if ( a2 != (_WORD)a3 && *(_DWORD *)(a4 + 0x10) != a3 ) /*0x9868b0*/
      JUMPOUT(0x98682C); /*0x98682c*/
    if ( *(_BYTE *)(a4 - 4) != (_BYTE)a3 ) /*0x9868b9*/
      *(_DWORD *)(*(_DWORD *)(a4 - 8) + 0x70) &= ~2u; /*0x9868be*/
    return 0; /*0x9868c2*/
  }
  else
  {
    result = a1 < a2 ? 1 : 0xFFFFFFFF;
    if ( *(_BYTE *)(a4 - 4) != (_BYTE)a3 ) /*0x9868d2*/
      *(_DWORD *)(*(_DWORD *)(a4 - 8) + 0x70) &= ~2u; /*0x9868d7*/
  }
  return result; /*0x9868c8*/
}
