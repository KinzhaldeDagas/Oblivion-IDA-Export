char __cdecl sub_4F51E0(int a1, int a2, int a3, double *a4)
{
  _DWORD *v7; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x164))(a1);
    if ( v7 )
    {
      if ( !sub_472EA0(v7) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Idle Playing >> %0.2f", *a4);
  return 1;
}
