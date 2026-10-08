char __cdecl sub_4F5520(char *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f552d*/
  if ( a1 ) /*0x4f552f*/
    *a4 = (double)sub_4DE660(a1); /*0x4f553e*/
  if ( MEMORY[0xB361AC] ) /*0x4f5540*/
    Interface_ConsolePrint("GetOpenState >> %0.2f", *a4); /*0x4f5556*/
  return 1; /*0x4f5560*/
}
