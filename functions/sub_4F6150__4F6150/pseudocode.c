char __cdecl sub_4F6150(int a1, int a2, int a3, double *a4)
{
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
      *a4 = sub_611FA0(a1);
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetClothingValue >> %0.2f", *a4);
  return 1;
}
