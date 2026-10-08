struct TESTopic
{
TESFormVtbl *vtbl;
TESFormMembr super;
TESFullName fullname;
DialogueType topicType;
UInt8 pad25[3];
QuestInfoEntry questInfoEntries;
void *unk30;
BSStringT editorID;
};
