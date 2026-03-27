char __cdecl sub_4F4C80(int a1, int a2, int a3, double *a4)
{
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
      *a4 = (double)(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x390))(a1);
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetAttacked >> %0.2f", *a4);
  return 1;
}
