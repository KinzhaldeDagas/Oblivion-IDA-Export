char __cdecl sub_4F82C0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x2000) != 0 )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetDestroyed >> %.0f", *a4);
  return 1;
}
