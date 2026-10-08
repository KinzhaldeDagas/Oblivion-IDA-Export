struct TESQuest
{
TESFormVtbl *vtbl;
TESFormMembr super;
TESScriptableForm scriptable;
TESIcon icon;
TESFullName fullName;
TESQuestFlags questFlags;
UInt8 priority;
UInt8 pad3E[2];
BSSimpleList_VoidPtr stages;
BSSimpleList_VoidPtr targets;
ConditionEntry conditions;
ScriptEventList *eventList;
UInt8 currentStage;
UInt8 pad5D[3];
UInt32 unk60;
UInt16 unk64;
UInt16 unk66;
};
