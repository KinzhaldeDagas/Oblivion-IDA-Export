char __cdecl sub_4F6710(int a1, TESObjectREFR *a2, int ArgList, double *a4)
{
  ExtraScript *vtbl; // eax
  BSExtraDataVtbl *ReferencePointer; // edi
  TESForm *v6; // eax
  int *v7; // eax
  int refID; // [esp-8h] [ebp-10h]

  *a4 = 0.0;
  if ( a2 && a2->member.super.type >= kFormType_REFR )
  {
    if ( a2->member.super.type <= kFormType_ACRE )
    {
      if ( ExtraDataList_GetReferencePointer(&a2->member.baseExtraList) )
      {
        ReferencePointer = ExtraDataList_GetReferencePointer(&a2->member.baseExtraList);
        refID = a2->member.super.refID;
        v6 = a2->vtbl->GetBaseForm(a2);
        v7 = (int *)sub_4D8D70(ReferencePointer, v6, refID);
        if ( !v7 )
          return 1;
        vtbl = sub_484F50(v7);
      }
      else
      {
        vtbl = sub_4D7250(a2);
      }
    }
    else
    {
      if ( a2->member.super.type != kFormType_Quest )
        return 1;
      vtbl = (ExtraScript *)a2[1].vtbl;
    }
    if ( vtbl )
    {
      if ( *(_DWORD *)vtbl )
        *a4 = sub_4FA110((ScriptEventList *)vtbl, ArgList, 0);
    }
  }
  return 1;
}
