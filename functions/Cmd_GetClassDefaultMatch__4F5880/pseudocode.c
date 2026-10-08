// Script command GetClassDefaultMatch / GetIsClassDefault: return 2.0 when current class exactly equals the recommended/default class, 1.0 when only TESClass specialization matches, otherwise 0.0.
char __cdecl Cmd_GetClassDefaultMatch(int a1, int a2, int a3, double *a4)
{
  TESClass *DefaultClassRecommendation; // esi
  double v5; // st7
  TESForm::ModReferenceList *BaseClass; // eax
  UInt32 DwordAtOffset40; // ebx

  *a4 = 0.0; /*0x4f5888*/
  DefaultClassRecommendation = Player_GetDefaultClassRecommendation(reference);// Exact current-class versus recommended-class match yields 2.0. /*0x4f589b*/
  if ( Actor_GetBaseClass((Actor *)reference) == (TESForm::ModReferenceList *)DefaultClassRecommendation ) /*0x4f58a4*/
  {
    v5 = dbl_A3D0C0; /*0x4f58a6*/
LABEL_6:
    *a4 = v5; /*0x4f58d5*/
    goto LABEL_7; /*0x4f58d5*/
  }
  if ( DefaultClassRecommendation ) /*0x4f58b0*/
  {
    BaseClass = Actor_GetBaseClass((Actor *)reference); /*0x4f58b9*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(BaseClass);// If classes differ, compare their +0x40 specialization values through the neutral shared accessor; equal specialization yields 1.0. /*0x4f58c7*/
    if ( Shared_GetDwordAtOffset40(DefaultClassRecommendation) == DwordAtOffset40 ) /*0x4f58d1*/
    {
      v5 = 1.0; /*0x4f58d3*/
      goto LABEL_6; /*0x4f58d3*/
    }
  }
LABEL_7:
  if ( MEMORY[0xB361AC] ) /*0x4f58d7*/
    Interface_ConsolePrint("GetIsMyClassDefault >> %0.2f", *a4); /*0x4f58ed*/
  return 1; /*0x4f58f5*/
}
