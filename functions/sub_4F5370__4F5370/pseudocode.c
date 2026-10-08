char __cdecl sub_4F5370(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f537e*/
  if ( a1 ) /*0x4f5380*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f538c*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x354))(a1) ) /*0x4f539c*/
        *a4 = 1.0; /*0x4f53a4*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f53a6*/
    Interface_ConsolePrint("Is Trespassing Value %0.2f", *a4); /*0x4f53bc*/
  return 1; /*0x4f53c4*/
}
