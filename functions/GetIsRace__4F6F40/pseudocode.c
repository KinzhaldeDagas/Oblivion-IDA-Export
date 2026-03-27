char __cdecl GetIsRace(int a1, int a2, int a3, double *a4)
{
  int v7; // edi
  int v8; // eax

  *a4 = 0.0;
  v7 = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
  }
  v8 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) == 9 )
      v8 = a2;
  }
  if ( v7 )
  {
    if ( v8 )
    {
      if ( *(_DWORD *)(v7 + 0xE8) == v8 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsRace >> %0.2f", *a4);
  return 1;
}
