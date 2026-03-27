char __cdecl sub_50C160(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  double *v7; // ecx

  v7 = a7;
  *a7 = 0.0;
  a7 = 0;
  if ( a3 )
  {
    if ( a4 )
    {
      a7 = *(double **)(a4 + 0xC);
      sub_4F9FB0(&a7, v7);
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetContainer >>(%08x)", a7);
  return 1;
}
