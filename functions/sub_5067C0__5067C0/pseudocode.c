char __cdecl sub_5067C0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  char v7; // bl
  const char *v8; // eax

  v7 = sub_4F8720(a3, 0, 0, a7); /*0x5067df*/
  if ( MEMORY[0xB361AC] ) /*0x5067d8*/
  {
    v8 = "Actor ignores friendly hits"; /*0x5067ec*/
    if ( 0.0 == *a7 ) /*0x5067f1*/
      v8 = "Actor counts friendly hits"; /*0x5067f3*/
    Interface_ConsolePrint("%s", v8); /*0x5067fe*/
  }
  return v7; /*0x506806*/
}
