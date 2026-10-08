char __cdecl sub_4F8630(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f8637*/
  if ( reference->vtbl->super.GetMountedHorse(reference) || reference->lastRiddenHorse ) /*0x4f8652*/
    *a4 = 1.0; /*0x4f865d*/
  if ( MEMORY[0xB361AC] ) /*0x4f865f*/
  {
    if ( 0.0 != *a4 ) /*0x4f8671*/
    {
      Interface_ConsolePrint("There is a last ridden horse "); /*0x4f8678*/
      return 1; /*0x4f8683*/
    }
    Interface_ConsolePrint("there is not a last ridden horse"); /*0x4f8689*/
  }
  return 1; /*0x4f8682*/
}
