// Oblivion ConditionItem_Evaluate directly dispatches through CommandInfo.eval; it optionally swaps subject/target with operatorAndFlags bit 1, resolves ExtraXTarget in the enclosing list evaluator, and uses ConditionParamDefaultsToTarget only for a missing ObjectReferenceID/Actor param1. Fallout's TESConditionItem::IsTrue (x4y6:0x82480750) instead routes action, target, and linked-reference roles using its serialized parameter flags; do not transfer that routing to Oblivion.
bool __thiscall ConditionItem_Evaluate(
        ConditionEntry::Data *this,
        TESObjectREFR *subject,
        TESObjectREFR *target,
        bool *lowDispositionFailure)
{
  TESObjectREFR *v5; // ebp
  TESObjectREFR *v6; // edi
  ConditionEntry::Data::Param v7; // ebx
  Cmd_Eval *eval; // ecx
  float v9; // eax
  double comparisonValue; // st7
  bool result; // al
  char v12; // cl
  float v13; // [esp+4h] [ebp-1Ch]
  double v14; // [esp+18h] [ebp-8h] BYREF
  float subjecta; // [esp+24h] [ebp+4h]
  float subjectb; // [esp+24h] [ebp+4h]

  v14 = 0.0; /*0x56ac5d*/
  *lowDispositionFailure = 0; /*0x56ac69*/
  v5 = subject; /*0x56ac75*/
  v6 = target; /*0x56ac77*/
  if ( (this->operatorAndFlags & 2) != 0 )      // Condition data bit 1 swaps subject and target before param fallback and evaluator dispatch. The target may already have been replaced by its ExtraXTarget in ConditionList_EvaluateCombined. /*0x56ac79*/
  {
    v5 = target; /*0x56ac7b*/
    v6 = subject; /*0x56ac7d*/
  }
  LODWORD(v7.number) = this->param1; /*0x56ac7f*/
  if ( !v7.form ) /*0x56ac84*/
  {                                             // For a null param1, call ConditionParamDefaultsToTarget. Oblivion substitutes the resolved/swapped target only for ObjectReferenceID (ParamInfo type 4) and Actor (type 6) parameters.
    if ( ConditionParamDefaultsToTarget(this->functionIndex, 0) ) /*0x56ac8c*/
      v7.form = (TESForm *)v6; /*0x56ac98*/
  }
  eval = Script_CommandList[this->functionIndex].eval;// Runtime computes the CommandInfo row directly from the serialized 16-bit functionIndex and reads eval/needsParent without a bounds check. The separate ConditionParamDefaultsToTarget helper checks the table bound only on its null-param1 path, not this dispatch path; a malformed out-of-range CTDA index can read beyond the 369-row table. /*0x56aca5*/
  if ( !eval /*0x56acd2*/
    || LOBYTE(Script_CommandList[this->functionIndex].needsParent) && !v5
    || !((int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))eval)(
          v5,
          (ConditionEntry::Data::Param)v7.form,
          (ConditionEntry::Data::Param)this->param2.form,
          &v14) )                               // The indexed CommandInfo.needsParent field gates the callback. If it is set and the current subject is null, condition evaluation returns false before invoking the opcode handler.
  {
    return 0; /*0x56ad49*/
  }
  if ( (this->operatorAndFlags & 4) == 0 || (v9 = this->comparisonValue, v9 == 0.0) ) /*0x56ace7*/
    comparisonValue = this->comparisonValue; /*0x56acee*/
  else
    comparisonValue = *(float *)(LODWORD(v9) + 0x24); /*0x56ace9*/
  subjecta = comparisonValue; /*0x56acf1*/
  v13 = subjecta; /*0x56acff*/
  subjectb = v14; /*0x56ad0a*/
  result = Condition_CompareNumeric(LOBYTE(this->operatorAndFlags) >> 5, subjectb, v13);// Compare the condition function result against its literal or TESGlobal-backed comparison value, using operatorAndFlags bits 5-7 as the numeric comparison operator. /*0x56ad16*/
  if ( !result && this->functionIndex == 0x4C ) // Opcode 0x4C is Oblivion GetDisposition. A failed comparison sets lowDispositionFailure only for operator 2 (>) or 3 (>=), enabling the player InfoRefusal fallback without treating arbitrary failed conditions as fallback candidates. /*0x56ad27*/
  {
    v12 = LOBYTE(this->operatorAndFlags) >> 5; /*0x56ad2b*/
    if ( v12 == 2 || v12 == 3 ) /*0x56ad36*/
      *lowDispositionFailure = 1;               // Only a failed Oblivion GetDisposition condition with numeric operator > or >= sets lowDispositionFailure. Other comparison operators and other failed opcodes do not create the INFORefusal fallback marker. /*0x56ad3f*/
  }
  return result; /*0x56ad43*/
}
