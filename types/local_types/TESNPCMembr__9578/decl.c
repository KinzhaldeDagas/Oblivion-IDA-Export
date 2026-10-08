struct TESNPCMembr
{
TESActorBaseMembr super;
TESRaceForm form;
UInt8 skillLevels[21];
UInt8 pad101[3];
TESClass *npcClass;
NPC_Unk unk1[4];
NPC_Unk unk2[4];
TESHair *hair;
float hairLength; ///< FaceGen hair morph weight. Native Randomize Face and the Race/Sex Length slider use [0,1].
TESEyes *eyes;
BSFaceGenNiNode *face0;
BSFaceGenNiNode *face1;
UInt32 unk6;
UInt32 unk7;
TESCombatStyle *combatStyle;
UInt8 hairColorRGB[4];
UInt32 unk8;
NiTArray_void facegenUndo;
};
