char __cdecl sub_4F82C0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f82cc*/
  if ( a1 ) /*0x4f82ce*/
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x2000) != 0 ) /*0x4f82d8*/
      *a4 = 1.0; /*0x4f82dc*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f82de*/
    Interface_ConsolePrint("GetDestroyed >> %.0f", *a4); /*0x4f82f4*/
  return 1; /*0x4f82fe*/
}
