TESForm::ModReferenceList *__userpurge sub_612110@<eax>(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6)
{
  TESForm::ModReferenceList *result; // eax

  sub_5F85E0(a1, a2, a3, a4, a5, a6); /*0x612118*/
  result = (TESForm::ModReferenceList *)g_TESSaveLoadGame->resetSelector; /*0x612123*/
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 ) /*0x612132*/
    *(float *)&a1[3].vtbl = kTerrainLODQuadRayDirectionZ; /*0x61213a*/
  return result; /*0x612140*/
}
