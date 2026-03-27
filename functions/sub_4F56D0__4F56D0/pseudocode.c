char __cdecl sub_4F56D0(_DWORD *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    {
      if ( Actor_IsSwimming(a1) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Swimming >> %0.2f", *a4);
  return 1;
}
