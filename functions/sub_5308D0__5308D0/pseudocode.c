// Adds TESTopicInfo.addedTopics to PlayerCharacter. Pointer-duplicate topics are ignored, each genuinely new topic may show the sTopicAddedText notification outside DialogMenu, and the player's known-topic list is sorted once afterward.
void __thiscall TESTopicInfo::AddTopicList(OblivionTopicInfo *this)
{
  PlayerCharacter::AddKnownTopics(reference, &this->addedTopics);// INFO.addedTopics always routes to PlayerCharacter::AddKnownTopics. This call still occurs before the INFOGENERAL RunForRumors gate in LoadNextTopicList, so D7 can teach known topics even when its normal result and Goodbye handling are suppressed. /*0x5308da*/
}
