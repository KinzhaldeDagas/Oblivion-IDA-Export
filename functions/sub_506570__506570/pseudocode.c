char __cdecl sub_506570(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  char v7; // bl

  v7 = sub_4F5D60(a3, 0, 0, a7); /*0x50658f*/
  if ( MEMORY[0xB361AC] ) /*0x506588*/
    Interface_ConsolePrint("Actor turning in >> %0.2f", *a7); /*0x5065a0*/
  return v7; /*0x5065a8*/
}
