char __cdecl sub_5064B0(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  char v7; // bl

  v7 = sub_4F5CB0(a3, 0, 0, a7); /*0x5064cf*/
  if ( MEMORY[0xB361AC] ) /*0x5064c8*/
    Interface_ConsolePrint("Is actor riding horse >> %0.2f", *a7); /*0x5064e0*/
  return v7; /*0x5064e8*/
}
