char __cdecl sub_4F5120(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x350))(a1) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Yielding >> %0.2f", *a4);
  return 1;
}
