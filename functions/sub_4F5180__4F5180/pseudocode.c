char __cdecl sub_4F5180(_DWORD **a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) )
    {
      if ( sub_5E6BC0(a1) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Waiting >> %0.2f", *a4);
  return 1;
}
