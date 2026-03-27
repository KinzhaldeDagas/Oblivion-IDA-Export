char __cdecl sub_4F4720(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  if ( !a1 )
    return 1;
  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0xEC))(a1);
  *a4 = v4;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("GetScale >> %0.2f", v4);
  return 1;
}
