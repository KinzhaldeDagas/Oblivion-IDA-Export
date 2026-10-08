char __cdecl sub_4F80A0(int a1, int a2, int a3, double *a4)
{
  double AmountStolenSold; // st7

  *a4 = 0.0; /*0x4f80a6*/
  AmountStolenSold = (double)(int)reference->AmountStolenSold; /*0x4f80ae*/
  *a4 = AmountStolenSold; /*0x4f80b4*/
  if ( MEMORY[0xB361AC] ) /*0x4f80b6*/
    Interface_ConsolePrint("Amount stolen the player sold >> %0.2f", AmountStolenSold); /*0x4f80ca*/
  return 1; /*0x4f80d4*/
}
