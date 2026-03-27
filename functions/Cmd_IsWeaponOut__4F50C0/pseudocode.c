char __cdecl Cmd_IsWeaponOut(_DWORD **a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) )
    {
      if ( Actor_IsWeaponOut(a1) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Weapon Out >> %0.2f", *a4);
  return 1;
}
