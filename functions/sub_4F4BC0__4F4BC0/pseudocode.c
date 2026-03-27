char __cdecl sub_4F4BC0(int a1, _DWORD *a2, char a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( sub_529B30(a2, a3) )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetStageDone >> %0.2f", *a4);
  return 1;
}
