char __cdecl sub_4F5180(_DWORD **a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f518e*/
  if ( a1 ) /*0x4f5190*/
  {
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) ) /*0x4f519c*/
    {
      if ( sub_5E6BC0(a1) ) /*0x4f51a4*/
        *a4 = 1.0; /*0x4f51af*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f51b1*/
    Interface_ConsolePrint("Is Waiting >> %0.2f", *a4); /*0x4f51c7*/
  return 1; /*0x4f51cf*/
}
