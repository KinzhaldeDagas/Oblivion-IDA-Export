char __cdecl Cmd_IsWeaponOut(_DWORD **a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f50ce*/
  if ( a1 ) /*0x4f50d0*/
  {
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) ) /*0x4f50dc*/
    {
      if ( Actor_IsWeaponOut(a1) ) /*0x4f50e4*/
        *a4 = 1.0; /*0x4f50ef*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f50f1*/
    Interface_ConsolePrint("Is Weapon Out >> %0.2f", *a4); /*0x4f5107*/
  return 1; /*0x4f510f*/
}
