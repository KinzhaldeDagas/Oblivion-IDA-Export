// TESTopicInfo modified-form load override. The engine first loads ordinary TESForm state, then treats modified flag 0x10000000 as the entire serialized spoken=true state; there is no extra spoken payload.
void __thiscall TESTopicInfo::LoadModifiedForm(
        OblivionTopicInfo *this,
        TopicInfoModifiedFlags modifiedFlags,
        UInt32 version)
{
  TESForm_LoadModifiedForm(&this->super, modifiedFlags, version); /*0x5303ee*/
  if ( (modifiedFlags & 0x10000000) != 0 )      // kTopicInfoModified_Spoken (0x10000000) is a presence bit: if present in the change mask, restore this INFO's global spoken byte. /*0x5303f9*/
    this->spoken = 1;                           // Restore OblivionTopicInfo.spoken=1 at +0x22. SayOnce eligibility will subsequently reject this INFO for every speaker. /*0x5303fb*/
}
