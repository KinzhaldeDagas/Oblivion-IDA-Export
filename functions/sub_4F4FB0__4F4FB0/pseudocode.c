char __cdecl sub_4F4FB0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( !a1 )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    return 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x348))(a1);
  *a4 = 0.0;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("Armor Rating: %0.2f", 0.0);
  return 1;
}
