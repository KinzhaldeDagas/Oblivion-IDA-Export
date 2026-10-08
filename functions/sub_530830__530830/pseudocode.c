// Authoritative Oblivion INFO condition gate. Rejects Deleted INFOs, null parent quests, and SayOnce INFOs whose INFO-global spoken byte is set. Otherwise evaluates quest conditions at +0x50 followed by INFO conditions at +0x18 as one continued stream; lowDispositionFailure is set only by a failed GetDisposition >/>= test.
bool __thiscall TESTopicInfo::EvaluateConditions(
        OblivionTopicInfo *this,
        bool *lowDispositionFailure,
        TESQuest *parentQuest,
        Actor *speaker,
        TESObjectREFR *target)
{
  ConditionEntry *p_conditions; // ecx
  ConditionEntry *v8; // eax

  if ( (this->super.member.flags & 0x20) != 0 || !parentQuest || (this->flags & 4) != 0 && this->spoken ) /*0x530856*/
    return 0; /*0x53083d*/
  p_conditions = &parentQuest->conditions; /*0x53085c*/
  if ( !parentQuest->conditions.next && !p_conditions->data ) /*0x530865*/
    return ConditionList_EvaluateCombined(&this->conditions, (TESObjectREFR *)speaker, target, lowDispositionFailure, 0);// If quest.conditions is empty, evaluate the INFO condition list as the whole stream. Otherwise TESTopicInfo::EvaluateConditions passes quest.conditions as the main list and this->conditions as continuation, preserving the evaluator's AND/OR group state across the boundary. /*0x53087e*/
  v8 = &this->conditions; /*0x530886*/
  if ( v8->next || v8->data ) /*0x53088f*/
    return ConditionList_EvaluateCombined(p_conditions, (TESObjectREFR *)speaker, target, lowDispositionFailure, v8); /*0x5308bd*/
  else
    return ConditionList_EvaluateCombined(p_conditions, (TESObjectREFR *)speaker, target, lowDispositionFailure, 0); /*0x5308a5*/
}
