// OFE custom Rumors identity: native D7 classification sets MenuTopic+0x20 isInfoGeneral; selected INFO +0x18, ownerQuest +0x14, actual topic +0x24. Native FillResponseList call 6B8F1F takes ECX=self + four stack pointer arguments (ownerQuest,topic,info,speaker), returns void. Preserve isInfoGeneral to keep first-nonempty response behavior, RunForRumors and native continuation semantics.
MenuTopicView *__thiscall MenuTopic::MenuTopic(
        MenuTopicView *this,
        TESQuest *ownerQuest,
        TESTopic *topic,
        OblivionTopicInfo *info,
        Actor *speaker,
        bool substituteInfoRefusal)
{
  bool v7; // bl
  TESTopic *v9; // edi
  bool v10; // zf
  TESTopic *v11; // edi
  OblivionTopicInfo *StrictMatchingInfo; // eax
  char *m_data; // eax
  TESTopicLinksDecoded *links; // eax
  TESTopic *ownerQuesta; // [esp+28h] [ebp+4h]

  v7 = 0; /*0x6b8e2b*/
  this->displayName.m_data = 0; /*0x6b8e2d*/
  this->displayName.m_dataLen = 0; /*0x6b8e2f*/
  this->displayName.m_bufLen = 0; /*0x6b8e33*/
  this->firstResponse = 0; /*0x6b8e3b*/
  this->nextResponseNode = 0; /*0x6b8e3e*/
  this->currentResponseNode = 0; /*0x6b8e41*/
  this->ownerQuest = 0; /*0x6b8e44*/
  this->topic = 0; /*0x6b8e47*/
  this->info = 0; /*0x6b8e4a*/
  if ( topic->super.refID == 0xD7 ) /*0x6b8e58*/
  {
    this->isInfoGeneralTopic = 1; /*0x6b8e5a*/
    this->hasLinkedTopics = 0; /*0x6b8e5e*/
  }
  else
  {
    this->isInfoGeneralTopic = 0; /*0x6b8e63*/
  }
  v9 = topic; /*0x6b8e74*/
  ownerQuesta = topic; /*0x6b8e76*/
  if ( info ) /*0x6b8e7a*/
  {
    v10 = info->spoken == 0;                    // Snapshot !originalInfo->spoken into MenuTopic.infoNotSpoken before any low-disposition InfoRefusal substitution. /*0x6b8e80*/
    this->info = info; /*0x6b8e83*/
    this->infoNotSpoken = v10;                  // infoNotSpoken is a presentation/cache byte initialized from !TESTopicInfo.spoken. It is distinct from the authoritative INFO-global spoken byte. /*0x6b8e8d*/
    if ( substituteInfoRefusal && (info->flags & 0x10) == 0 )// Disposition-refusal substitution applies to ordinary TOPIC menu construction only. If selection returned a low-disposition fallback and the original INFO is not itself flagged InfoRefusal, replace its runtime INFO/topic/quest with the stock FormID 118 InfoRefusal match while retaining the original topic's display label. /*0x6b8e9c*/
    {
      v11 = TESTopic::GetTopic(DialogueType_Miscellaneous, 0);// MenuTopic fallback construction requests Miscellaneous bucket index 0: fixed FormID 00000118 InfoRefusal. /*0x6b8eaa*/
      StrictMatchingInfo = TESTopic::GetStrictMatchingInfo(v11, speaker, (TESObjectREFR *)reference);// Strict InfoRefusal lookup rejects another low-disposition fallback. When a strict stock InfoRefusal INFO exists, its responses, links, result, owner quest, and topic identity drive the MenuTopic; only the visible label came from the requested topic. /*0x6b8eb8*/
      if ( StrictMatchingInfo ) /*0x6b8ebf*/
      {
        this->info = StrictMatchingInfo;        // Replace runtime INFO/topic/owner quest with stock InfoRefusal, but do not recompute infoNotSpoken. The visible new marker still reflects the originally requested INFO; InfoRefusal RunResult also does not set spoken. /*0x6b8ec4*/
        ownerQuesta = v11; /*0x6b8ec7*/
        ownerQuest = TESTopic::GetOwnerQuest(v11, StrictMatchingInfo); /*0x6b8ed0*/
      }
    }
    m_data = topic->fullname.name.m_data; /*0x6b8ed4*/
    if ( !m_data ) /*0x6b8ed9*/
      m_data = EmptyString; /*0x6b8edb*/
    BSStringT_Set(&this->displayName, m_data, 0); /*0x6b8ee4*/
    if ( !this->isInfoGeneralTopic ) /*0x6b8ee9*/
    {
      links = this->info->links; /*0x6b8ef1*/
      if ( links ) /*0x6b8ef6*/
      {
        if ( links->linkedTo.node.next || links->linkedTo.node.data ) /*0x6b8efd*/
          v7 = 1; /*0x6b8f02*/
      }
      this->hasLinkedTopics = v7; /*0x6b8f07*/
    }
    v9 = ownerQuesta; /*0x6b8f11*/
    MenuTopic::FillResponseList(this, ownerQuest, ownerQuesta, this->info, (TESObjectREFR *)speaker); /*0x6b8f1f*/
  }
  this->ownerQuest = ownerQuest; /*0x6b8f28*/
  this->topic = v9; /*0x6b8f2b*/
  return this; /*0x6b8f30*/
}
