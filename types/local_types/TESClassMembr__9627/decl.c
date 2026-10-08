struct TESClassMembr
{
TESFormMembr super;
TESFullName fullName;
TESDescription description;
TESTexture texture;
AttributeActorValue attributes[2];
SkillSpecialization specialization;
SkillActorValue majorSkills[7];
ClassType classFlags;
UInt32 buySellServices;
UInt8 skillTrained;
UInt8 trainingLevel;
UInt8 pad6A[2];
};
