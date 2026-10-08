struct MenuTopicView
{
BSStringT displayName;
bool hasLinkedTopics;
UInt8 pad09[3];
DialogueResponse *firstResponse;
DialogueResponseNode *nextResponseNode;
TESQuest *ownerQuest;
OblivionTopicInfo *info;
DialogueResponseNode *currentResponseNode;
bool isInfoGeneralTopic;
bool infoNotSpoken;
UInt8 pad22[2];
TESTopic *topic;
};
