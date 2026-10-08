struct OblivionTopicInfo
{
TESForm super;
ConditionEntry conditions;
UInt16 previousInfo;
UInt8 spoken;
DialogueType infoType;
TopicInfoNextSpeaker nextSpeaker;
TopicInfoFlags flags;
UInt8 pad26[2];
tListTopic addedTopics;
TESTopicLinksDecoded *links;
UInt32 sourceFileOffset;
};
