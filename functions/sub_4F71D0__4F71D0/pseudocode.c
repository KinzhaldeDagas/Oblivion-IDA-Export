char __cdecl sub_4F71D0(int a1, char a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f71de*/
  if ( a2 ) /*0x4f71e0*/
  {
    if ( sub_520EF0() ) /*0x4f71e2*/
    {
      if ( *(_BYTE *)(sub_520EF0() + 4) == a2 ) /*0x4f71f3*/
        *a4 = 1.0; /*0x4f71f7*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f71f9*/
    Interface_ConsolePrint("GetIsUsedItemType >> %0.2f", *a4); /*0x4f720f*/
  return 1; /*0x4f7217*/
}
