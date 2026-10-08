char __cdecl sub_4F8420(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  double InvestmentGold; // st7
  char *Name; // eax

  if ( !a1 ) /*0x4f8427*/
    return 1; /*0x4f8427*/
  if ( !a1->vtbl->IsActor(a1) ) /*0x4f8433*/
    return 1; /*0x4f8433*/
  InvestmentGold = (double)(int)ExtraDataList_GetInvestmentGold(&a1->member.baseExtraList); /*0x4f8445*/
  *a4 = InvestmentGold; /*0x4f844d*/
  if ( !MEMORY[0xB361AC] ) /*0x4f844f*/
    return 1; /*0x4f8479*/
  Name = TESObjectREFR_GetName(a1); /*0x4f8460*/
  Interface_ConsolePrint("%s  has %0.2f investment  gold currently", Name, InvestmentGold); /*0x4f846b*/
  return 1; /*0x4f8475*/
}
