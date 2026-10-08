// Selects a matching TESTopicInfo and wraps it as a 0x1C DialogueItem containing response list/cursor, INFO, topic, owner quest, and speaker.
DialogueItemView *__thiscall TESTopic::CreateDialogueItem(
        TESTopic *this,
        Actor *speaker,
        TESObjectREFR *target,
        TESTopic *previousTopic,
        ConversationView *conversation)
{
  OblivionTopicInfo *v6; // edi
  Unk1C *v7; // ebx
  DialogueItemView *result; // eax
  TESQuest *OwnerQuest; // eax

  v6 = TESTopic::SelectInfoForSpeaker(this, (bool *)&conversation, speaker, target, 1, previousTopic, conversation);// Ambient CreateDialogueItem uses conversation rules. It deliberately reuses the already-pushed conversation argument slot as the ignored lowDispositionFailure scratch output; ambient selection never consumes that fallback. /*0x52f7d8*/
  if ( !v6 ) /*0x52f7dc*/
    return 0; /*0x52f80d*/
  v7 = (Unk1C *)FormHeapAlloc(0x1Cu); /*0x52f7e5*/
  result = 0; /*0x52f7ee*/
  if ( v7 ) /*0x52f7f6*/
  {
    OwnerQuest = TESTopic::GetOwnerQuest(this, v6); /*0x52f7fe*/
    return DialogueItem::DialogueItem((DialogueItemView *)v7, OwnerQuest, this, v6, (TESObjectREFR *)speaker); /*0x52f806*/
  }
  return result; /*0x52f80f*/
}
