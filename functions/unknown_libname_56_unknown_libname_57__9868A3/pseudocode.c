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
    if ( a2 != (_WORD)a3 && *(_DWORD *)(a4 + 0x10) != a3 )
      JUMPOUT(0x98682C);
    if ( *(_BYTE *)(a4 - 4) != (_BYTE)a3 )
      *(_DWORD *)(*(_DWORD *)(a4 - 8) + 0x70) &= ~2u;
    return 0;
  }
  else
  {
    result = a1 < a2 ? 1 : 0xFFFFFFFF;
    if ( *(_BYTE *)(a4 - 4) != (_BYTE)a3 )
      *(_DWORD *)(*(_DWORD *)(a4 - 8) + 0x70) &= ~2u;
  }
  return result;
}
