char __cdecl sub_4F5230(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x250))(a1);
      *a4 = 0.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Actor Crime Gold is %.02f ", *a4);
  return 1;
}
