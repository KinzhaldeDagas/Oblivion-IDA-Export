char __cdecl sub_4F75F0(_DWORD *a1, int a2, int a3, double *a4)
{
  int v7; // ecx

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    {
      v7 = a1[0x16];
      if ( v7 )
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0xF0))(v7, 1) )
          *a4 = 1.0;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Torch Out >> %0.2f", *a4);
  return 1;
}
