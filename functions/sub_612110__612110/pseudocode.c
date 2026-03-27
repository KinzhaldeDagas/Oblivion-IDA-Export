TESForm::ModReferenceList *__userpurge sub_612110@<eax>(TESObjectREFR *a1@<ecx>, int a2@<ebp>, int a3)
{
  TESForm::ModReferenceList *result; // eax

  sub_5F85E0(a1, a2, a3);
  result = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk030[5];
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 )
    *(float *)&a1[3].vtbl = flt_A30634;
  return result;
}
