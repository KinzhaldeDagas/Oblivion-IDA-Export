char __cdecl sub_4F6B00(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsCreature >> %0.2f", *a4);
  return 1;
}
