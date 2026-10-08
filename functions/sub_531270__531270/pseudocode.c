// Snapshot the current TESTopicInfo response stream by deep-cloning the shared lazy response cache into the caller's list. MenuTopic and DialogueItem then own independent TESResponse objects and strings; rebuilding the global cache for another INFO cannot invalidate existing runtime responses.
void __thiscall TESTopicInfo::CollectResponses(OblivionTopicInfo *this, TESResponseListView *outResponses)
{
  TESResponseListView *ResponseList; // eax

  ResponseList = TESTopicInfo::GetResponseList(this); /*0x531270*/
  TESResponseList::CloneFrom(outResponses, ResponseList); /*0x53127a*/
}
