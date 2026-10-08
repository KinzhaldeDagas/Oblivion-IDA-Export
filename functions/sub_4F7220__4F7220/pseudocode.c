char __cdecl sub_4F7220(int a1, int a2, int a3, double *a4)
{
  int v4; // eax

  v4 = 0; /*0x4f722b*/
  *a4 = 0.0; /*0x4f722d*/
  if ( a2 ) /*0x4f7231*/
  {
    if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) - 0x31 <= 2 ) /*0x4f723d*/
      v4 = a2; /*0x4f723f*/
  }
  if ( a1 ) /*0x4f7247*/
  {
    if ( v4 ) /*0x4f724b*/
    {
      if ( a1 == v4 ) /*0x4f724f*/
        *a4 = 1.0; /*0x4f7253*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7255*/
    Interface_ConsolePrint("GetIsRef >> %0.2f", *a4); /*0x4f726b*/
  return 1; /*0x4f7275*/
}
