char __cdecl sub_4F5810(int a1, int a2, int a3, double *a4)
{
  void (__thiscall *v7)(int, _DWORD); // edx

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x260))(a1) )
      {
        v7 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x264);
        *a4 = 1.0;
        v7(a1, 0);
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Has Vampire Fed >> %0.2f", *a4);
  return 1;
}
