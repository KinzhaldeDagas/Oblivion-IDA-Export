char __usercall sub_4F4640@<al>(int a1@<ebx>, int a2@<edi>, TESObjectREFR *a3, int a4, int a5, double *a6)
{
  double FatigueFraction; // st7

  if ( !a3 ) /*0x4f4647*/
    return 1; /*0x4f4647*/
  if ( !a3->vtbl->IsActor(a3) ) /*0x4f4653*/
    return 1; /*0x4f4653*/
  FatigueFraction = Actor_GetFatigueFraction((Actor *)a3, a1, a2); /*0x4f465b*/
  *a6 = FatigueFraction; /*0x4f4664*/
  if ( !MEMORY[0xB361AC] ) /*0x4f4666*/
    return 1; /*0x4f4688*/
  Interface_ConsolePrint("GetFatiguePercentage >> %0.2f", FatigueFraction); /*0x4f467a*/
  return 1; /*0x4f4684*/
}
