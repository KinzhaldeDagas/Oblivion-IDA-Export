// Clears TESTopicInfo runtime spoken state when kTopicInfoModified_Spoken is being reverted/cleared.
void __thiscall TESTopicInfo::ClearModifiedSpokenState(OblivionTopicInfo *this, TopicInfoModifiedFlags modifiedFlags)
{
  nullsub_returnvVoid_1arg(modifiedFlags); /*0x530419*/
  if ( (modifiedFlags & 0x10000000) != 0 )      // Only modified flag 0x10000000 affects the TESTopicInfo-specific runtime state in this clear hook. /*0x530424*/
    this->spoken = 0;                           // Clear OblivionTopicInfo.spoken at +0x22, making a SayOnce INFO eligible again if all other conditions pass. /*0x530426*/
}
