char __cdecl sub_4F5AE0(int a1, int a2, int a3, double *a4)
{
  if ( PlayerCharacter::IsSleeping_(reference) ) /*0x4f5ae6*/
    *a4 = 1.0; /*0x4f5af5*/
  if ( MEMORY[0xB361AC] ) /*0x4f5af7*/
  {
    if ( 0.0 != *a4 ) /*0x4f5b09*/
    {
      Interface_ConsolePrint("Time is passing"); /*0x4f5b10*/
      return 1; /*0x4f5b1a*/
    }
    Interface_ConsolePrint("Time is not passing"); /*0x4f5b20*/
  }
  return 1; /*0x4f5b1a*/
}
