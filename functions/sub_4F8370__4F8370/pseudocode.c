// GetIsPlayerBirthsign_Eval compares the Birthsign parameter with the PlayerCharacter's birthsign; its result does not depend on the dialogue speaker.
char __usercall GetIsPlayerBirthsign_Eval@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  int v6; // esi

  v6 = 0; /*0x4f837c*/
  *a6 = 0.0; /*0x4f837e*/
  if ( a4 ) /*0x4f8382*/
  {
    if ( *(_BYTE *)(a4 + 4) == 0x11 ) /*0x4f8388*/
      v6 = a4; /*0x4f838a*/
  }
  if ( ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))reference->vtbl->super.Unk_9A)( /*0x4f839e*/
         reference,
         a2,
         a1) == v6 )
    *a6 = 1.0; /*0x4f83a2*/
  if ( MEMORY[0xB361AC] ) /*0x4f83a4*/
    Interface_ConsolePrint("GetIsBirthsign is %0.2f", *a6); /*0x4f83ba*/
  return 1; /*0x4f83c2*/
}
