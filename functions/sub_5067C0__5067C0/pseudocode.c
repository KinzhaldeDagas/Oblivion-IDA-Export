char __cdecl sub_5067C0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  char v10; // bl
  const char *v11; // eax

  v10 = sub_4F8720(a3, 0, 0, a7);
  if ( IsConsoleMode )
  {
    v11 = "Actor ignores friendly hits";
    if ( 0.0 == *a7 )
      v11 = "Actor counts friendly hits";
    Interface_ConsolePrint("%s", v11);
  }
  return v10;
}
