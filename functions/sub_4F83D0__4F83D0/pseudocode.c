char __cdecl sub_4F83D0(int a1, int a2, int a3, double *a4)
{
  TESClass *DefaultClassRecommendation; // eax
  int v5; // ecx

  *a4 = 0.0; /*0x4f83d7*/
  DefaultClassRecommendation = Player_GetDefaultClassRecommendation(reference); /*0x4f83df*/
  v5 = 0; /*0x4f83e8*/
  if ( a2 ) /*0x4f83ec*/
  {
    if ( *(_BYTE *)(a2 + 4) == 5 ) /*0x4f83f2*/
      v5 = a2; /*0x4f83f4*/
  }
  if ( DefaultClassRecommendation == (TESClass *)v5 ) /*0x4f83f8*/
    *a4 = 1.0; /*0x4f83fc*/
  if ( MEMORY[0xB361AC] ) /*0x4f83fe*/
    Interface_ConsolePrint("GetIsClass >> %0.2f", *a4); /*0x4f8414*/
  return 1; /*0x4f841e*/
}
