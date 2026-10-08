// Engine-native NoRumors predicate used by the GetNoRumors command and MenuTopicManager::FillTopicList. Its code xrefs do not include TESTopic::CreateConversation; it gates the player-facing INFOGENERAL/Rumors entry, not arbitrary ambient linked-topic playback.
bool __thiscall Actor::IsNoRumor(Actor *this)
{
  ExtraNoRoumor *ExtraData; // eax
  TESActorBase *v4; // ebx
  TESActorBase *v5; // edi

  if ( !Actor_IsNPC(this) ) /*0x5e1e33*/
    return 1; /*0x5e1e3c*/
  ExtraData = (ExtraNoRoumor *)BaseExtraList_GetExtraData( /*0x5e1e45*/
                                 &this->members.super.super.baseExtraList,
                                 kExtraData_HasNoRumors);
  if ( ExtraData ) /*0x5e1e4c*/
    return ExtraData->NoRumour; /*0x5e1e4e*/
  v4 = 0; /*0x5e1e5f*/
  v5 = (TESActorBase *)this->vtbl->super.super.GetBaseForm(this); /*0x5e1e63*/
  if ( v5 ) /*0x5e1e67*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e1e73*/
      v4 = v5; /*0x5e1e79*/
  }
  return (v4->super.actorBaseData.flags & kFlag_NoRumors) != 0; /*0x5e1e3e*/
}
