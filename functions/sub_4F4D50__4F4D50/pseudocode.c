char __cdecl sub_4F4D50(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f4d57*/
  if ( a2 ) /*0x4f4d60*/
  {
    if ( sub_520EF0() == a2 ) /*0x4f4d69*/
      *a4 = 1.0; /*0x4f4d6d*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4d6f*/
    Interface_ConsolePrint("GetIsUsedItem >> %0.2f", *a4); /*0x4f4d85*/
  return 1; /*0x4f4d8d*/
}
