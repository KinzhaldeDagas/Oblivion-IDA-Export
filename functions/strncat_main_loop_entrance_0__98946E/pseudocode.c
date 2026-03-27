// positive sp value has been detected, the output may be wrong!
int __usercall strncat_::main_loop_entrance_0@<eax>(
        int a1@<ecx>,
        char a2@<bl>,
        int a3@<edi>,
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
      *(_BYTE *)a3 = 0;
      return a5;
    }
    if ( !BYTE1(v8) )
    {
      *(_WORD *)a3 = (unsigned __int8)v8;
      return a5;
    }
    if ( (v8 & 0xFF0000) == 0 )
    {
      *(_WORD *)a3 = v8;
      *(_BYTE *)(a3 + 2) = 0;
      return a5;
    }
    if ( (v8 & 0xFF000000) == 0 )
    {
      *(_DWORD *)a3 = v8;
      return a5;
    }
  }
  return strncat_::main_loop_2(v8, a1, a2, (_DWORD *)a3, a5, a6, a7, a8);
}
