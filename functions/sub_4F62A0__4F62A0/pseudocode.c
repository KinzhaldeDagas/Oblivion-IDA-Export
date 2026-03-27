char __cdecl sub_4F62A0(int a1, int a2, int a3, double *a4)
{
  int v4; // ebp
  int v5; // edi

  *a4 = 0.0;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
  }
  v5 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2) + 4) == 0x23 )
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2);
  }
  if ( v4 )
  {
    if ( v5 )
    {
      if ( *(_DWORD *)(v4 + 0xE8) == *(_DWORD *)(v5 + 0xE8) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("SameRace >> %0.2f", *a4);
  return 1;
}
