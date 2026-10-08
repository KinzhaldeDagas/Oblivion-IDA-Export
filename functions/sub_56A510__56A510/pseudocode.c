// Oblivion condition-stream evaluator. operatorAndFlags bit 0 connects the current predicate to the next predicate by OR; an unflagged item closes that OR group, and groups are combined with AND. TESTopicInfo::EvaluateConditions supplies quest conditions as this list and INFO conditions as continuation, so evaluator state can cross their boundary.
bool __thiscall ConditionList_EvaluateCombined(
        ConditionEntry *this,
        TESObjectREFR *subject,
        TESObjectREFR *target,
        bool *lowDispositionFailure,
        ConditionEntry *continuation)
{
  bool v5; // bl
  TESObjectREFR *v6; // ebp
  bool v7; // zf
  BSExtraData *ExtraXTarget; // eax
  ConditionEntry::Data *data; // esi
  bool v11; // al
  bool v13; // [esp+12h] [ebp-6h]
  char v14; // [esp+13h] [ebp-5h]
  char v15; // [esp+14h] [ebp-4h]
  bool v16; // [esp+15h] [ebp-3h]
  char v17; // [esp+16h] [ebp-2h]
  char v18; // [esp+17h] [ebp-1h]

  v5 = 0; /*0x56a518*/
  v6 = target; /*0x56a51b*/
  v7 = target == 0; /*0x56a51f*/
  v13 = 1; /*0x56a525*/
  v15 = 0; /*0x56a52a*/
  v14 = 0; /*0x56a52e*/
  v16 = 0; /*0x56a532*/
  v18 = 0; /*0x56a536*/
  *lowDispositionFailure = 0; /*0x56a53a*/
  v17 = 0; /*0x56a53c*/
  if ( !v7 ) /*0x56a540*/
  {
    ExtraXTarget = TESForm::GetExtraXTarget(v6);// Resolve TESObjectREFR target through its ExtraXTarget before evaluating any condition item. The subject argument is unchanged; each condition's operatorAndFlags bit 1 may swap subject and resolved target. /*0x56a544*/
    if ( ExtraXTarget ) /*0x56a54b*/
      v6 = (TESObjectREFR *)ExtraXTarget; /*0x56a54d*/
  }
  if ( !this ) /*0x56a551*/
    goto LABEL_52; /*0x56a551*/
  while ( this->next || this->data ) /*0x56a560*/
  {
    data = this->data; /*0x56a56b*/
    LOBYTE(target) = 0; /*0x56a56d*/
    if ( !v15 ) /*0x56a572*/
    {
      if ( (data->operatorAndFlags & 1) != 0 ) /*0x56a588*/
      {
        v5 = ConditionItem_Evaluate(data, subject, v6, (bool *)&target); /*0x56a656*/
        v15 = 1; /*0x56a65e*/
        v16 = 0; /*0x56a663*/
        v14 = (char)target; /*0x56a668*/
        if ( !(_BYTE)target ) /*0x56a66c*/
          v16 = !v5; /*0x56a67a*/
      }
      else
      {
        v11 = ConditionItem_Evaluate(data, subject, v6, (bool *)&target); /*0x56a58e*/
        v5 = v11; /*0x56a598*/
        if ( !v13 || (v13 = 1, !v11) ) /*0x56a5a3*/
          v13 = 0; /*0x56a5a5*/
        if ( (_BYTE)target ) /*0x56a5af*/
        {
          *lowDispositionFailure = 1;           // A failed GetDisposition `>`/`>=` predicate marks a disposition-only fallback candidate. The output is provisional: a later ordinary failed predicate clears it at aggregate completion. /*0x56a5b9*/
        }
        else if ( !v11 ) /*0x56a641*/
        {
          v17 = 1; /*0x56a647*/
        }
      }
LABEL_14:
      if ( !v13 && !v15 ) /*0x56a5c8*/
        goto LABEL_16; /*0x56a5c8*/
      goto LABEL_17; /*0x56a5c8*/
    }
    if ( !v5 ) /*0x56a686*/
    {
      v5 = ConditionItem_Evaluate(data, subject, v6, (bool *)&target); /*0x56a69f*/
      if ( v14 || (_BYTE)target ) /*0x56a6a9*/
      {
        v14 = 1; /*0x56a6b3*/
        if ( (_BYTE)target ) /*0x56a6b8*/
          goto LABEL_39; /*0x56a6b8*/
      }
      else
      {
        v14 = 0; /*0x56a6ab*/
      }
      if ( !v5 ) /*0x56a6bc*/
        v16 = 1; /*0x56a6be*/
    }
LABEL_39:
    if ( (data->operatorAndFlags & 1) != 0 ) /*0x56a6c6*/
      goto LABEL_14; /*0x56a6c6*/
    v15 = 0; /*0x56a6d1*/
    if ( v13 && v5 ) /*0x56a6da*/
    {
      v13 = 1; /*0x56a6dc*/
    }
    else
    {
      v13 = 0; /*0x56a6eb*/
      if ( !v14 || v16 ) /*0x56a6f7*/
      {
        v17 = 1; /*0x56a705*/
LABEL_16:
        if ( !*lowDispositionFailure ) /*0x56a5d1*/
          goto LABEL_51; /*0x56a5d1*/
        goto LABEL_17; /*0x56a5d1*/
      }
      *lowDispositionFailure = 1;               // A failed OR group sets lowDispositionFailure only if the group had a failing GetDisposition comparison and no non-disposition failure. Any independent failed condition makes the overall result ineligible for InfoRefusal fallback. /*0x56a6fd*/
    }
LABEL_17:
    this = this->next; /*0x56a5d7*/
    if ( continuation )                         // When the quest-condition list ends, switch to the INFO-condition continuation without resetting AND/OR accumulators or the disposition-failure state. Thus a trailing quest condition marked OR-with-next can join the first INFO condition in one group. /*0x56a5e0*/
    {
      if ( !v18 && (!this || !this->next && !this->data) ) /*0x56a5f3*/
      {
        this = continuation;                    // Continuation handoff point: `this` now starts at TESTopicInfo.conditions while the existing combined-stream state remains live. /*0x56a5f8*/
        v18 = 1; /*0x56a5fa*/
      }
    }
    if ( !this ) /*0x56a601*/
      break; /*0x56a601*/
  }
  if ( v15 ) /*0x56a60c*/
  {
    if ( v13 && v5 ) /*0x56a61f*/
    {
      *lowDispositionFailure = 0; /*0x56a635*/
      return 1; /*0x56a63c*/
    }
    v13 = 0; /*0x56a714*/
    if ( !v14 || v16 ) /*0x56a720*/
      goto LABEL_52; /*0x56a720*/
    *lowDispositionFailure = 1; /*0x56a726*/
  }
  else if ( v13 ) /*0x56a730*/
  {
    goto LABEL_52; /*0x56a730*/
  }
LABEL_51:
  if ( !v17 ) /*0x56a737*/
    return v13;                                 // Before returning a rejected aggregate condition stream, clear lowDispositionFailure when any non-disposition failure was encountered. TESTopic selection uses this output only for the player's low-disposition InfoRefusal fallback path. /*0x56a737*/
LABEL_52:
  *lowDispositionFailure = 0; /*0x56a739*/
  return v13; /*0x56a629*/
}
