// Shared GetScriptVariable/GetQuestVariable evaluator. For a reference-like form, obtains its ScriptEventList (using the extra reference pointer when present); for QUST, reads its quest ScriptEventList. ArgList identifies the compiled variable ID passed as Param2. Missing IDs log an error and return 0; found Var.data is returned. ScriptEventList::GetVariableValue caches the last event-list/variable-ID pair globally.
char __cdecl sub_4F6710(int a1, TESObjectREFR *a2, int ArgList, double *a4)
{
  ScriptEventList *vtbl; // eax
  TESObjectREFR *ReferencePointer; // edi
  TESForm *v6; // eax
  int *v7; // eax
  UInt32 refID; // [esp-8h] [ebp-10h]

  *a4 = 0.0; /*0x4f6717*/
  if ( a2 && a2->member.super.type >= kFormType_REFR ) /*0x4f6729*/
  {
    if ( a2->member.super.type <= kFormType_ACRE ) /*0x4f672f*/
    {
      if ( ExtraDataList_GetReferencePointer(&a2->member.baseExtraList) ) /*0x4f6740*/
      {
        ReferencePointer = ExtraDataList_GetReferencePointer(&a2->member.baseExtraList); /*0x4f6750*/
        refID = a2->member.super.refID; /*0x4f6755*/
        v6 = a2->vtbl->GetBaseForm(a2); /*0x4f6760*/
        v7 = (int *)sub_4D8D70(ReferencePointer, v6, refID); /*0x4f6765*/
        if ( !v7 ) /*0x4f676c*/
          return 1; /*0x4f676c*/
        vtbl = (ScriptEventList *)sub_484F50(v7); /*0x4f6770*/
      }
      else
      {
        vtbl = (ScriptEventList *)sub_4D7250(a2); /*0x4f6779*/
      }
    }
    else
    {
      if ( a2->member.super.type != kFormType_Quest ) /*0x4f6734*/
        return 1; /*0x4f6734*/
      vtbl = (ScriptEventList *)a2[1].vtbl; /*0x4f6736*/
    }
    if ( vtbl ) /*0x4f6780*/
    {
      if ( vtbl->m_script ) /*0x4f6782*/
        *a4 = ScriptEventList::GetVariableValue(vtbl, ArgList, 0); /*0x4f6795*/
    }
  }
  return 1; /*0x4f6798*/
}
