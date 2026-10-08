struct __declspec(align(4)) TESObjectREFRMembr
{
TESFormMembr super;
TESChildCELLVtbl childCell;
TESForm *baseForm;
NiPoint3 rot;
float pos[3];
float scale;
void *niNode;
TESObjectCELL *parentCell;
ExtraDataList baseExtraList;
};
