char __cdecl sub_5064F0(int a1, int a2, Creature *a3, int a4, int a5, int a6, double *a7)
{
  char v10; // bl

  v10 = sub_4F5D20(a3, 0, 0, a7);
  if ( IsConsoleMode )
    Interface_ConsolePrint("Actor players last ridden horse >> %0.2f", *a7);
  return v10;
}
