struct DialoguePackageRuntimeView
{
TESPackage super;
void *activeSoundHandle;
TESTopic *startingTopic;
float responseTimeRemaining;
Actor *activeSpeaker;
UInt8 waitingForLip;
UInt8 pad4D[3];
ConversationView *conversation;
DialogueItemView *currentItem;
DialogueResponse *currentResponse;
Actor *speaker;
Actor *target;
};
