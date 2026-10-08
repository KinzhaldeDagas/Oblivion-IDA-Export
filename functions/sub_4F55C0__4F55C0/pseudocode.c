char __cdecl sub_4F55C0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f55c7*/
  if ( PlayerCharacter::IsJailed(reference) ) /*0x4f55cf*/
    *a4 = 1.0; /*0x4f55da*/
  if ( MEMORY[0xB361AC] ) /*0x4f55dc*/
    Interface_ConsolePrint("IsPlayerInJail >> %0.2f", *a4); /*0x4f55f2*/
  return 1; /*0x4f55fc*/
}
