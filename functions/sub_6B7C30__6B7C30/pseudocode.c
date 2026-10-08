// Deferred ambient INFO commit. When INFO exists and ImmediateResult is clear, expose addedTopics and then run the result on DialogueItem.speaker at response-list exhaustion. Goodbye and RunForRumors are ignored; interruption before exhaustion drops this deferred commit.
void __thiscall DialogueItem::RunResult(DialogueItemView *this)
{
  OblivionTopicInfo *info; // ecx

  info = this->info; /*0x6b7c33*/
  if ( info ) /*0x6b7c38*/
  {                                             // ImmediateResult alone suppresses deferred ambient commit because it was already performed during CreateConversation. This test does not inspect Goodbye or RunForRumors.
    if ( (info->flags & 8) == 0 ) /*0x6b7c43*/
    {
      TESTopicInfo::AddTopicList(info);         // Deferred ambient ordering is AddTopicList first, then RunResult. This is the reverse of CreateConversation's ImmediateResult ordering. /*0x6b7c45*/
      TESTopicInfo::RunResult(this->info, this->speaker);// Run the deferred result on this DialogueItem's actual routed speaker, unlike ImmediateResult which uses the original conversation initiator. /*0x6b7c51*/
    }
  }
}
