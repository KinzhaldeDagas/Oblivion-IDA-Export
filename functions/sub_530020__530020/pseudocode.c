// Returns a normal matching INFO only; rejects the condition-fallback result reported through SelectInfoForSpeaker's out flag. Used for InfoRefusal substitution.
OblivionTopicInfo *__thiscall TESTopic::GetStrictMatchingInfo(TESTopic *this, Actor *speaker, TESObjectREFR *target)
{
  OblivionTopicInfo *v3; // eax
  bool a2; // [esp+1h] [ebp-1h] BYREF

  a2 = 0; /*0x530036*/
  v3 = TESTopic::SelectInfoForSpeaker(this, &a2, speaker, target, 0, 0, 0); /*0x53003b*/
  return !a2 ? v3 : 0;
}
