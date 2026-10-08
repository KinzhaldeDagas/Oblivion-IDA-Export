struct __cppobj MiddleHighProcess : MiddleLowProcess
{
void *unk0A8;
UInt32 unk0AC;
UInt32 unk0B0;
UInt32 unk0B4;
UInt32 unk0B8;
float unk0BC;
TESPackage *currentPackage;
UInt32 unk0C4;
UInt8 unk0C8;
UInt8 pad0C9[3];
eProcedure currentPackProcedure;
UInt8 unk0D0;
UInt8 pad0D1[3];
float positionOfFollowedActor[3];
UInt32 unk0E0;
EntryData *equippedWeaponData;
EntryData *equippedLightData;
EntryData *equippedAmmoData;
EntryData *equippedShieldData;
UInt8 unk0F4;
UInt8 unk0F5;
UInt8 pad0F6[2];
float unk0F8;
NiNode *weaponAttachNode; ///< Cached 'Weapon' attachment node.
NiNode *torchAttachNode; ///< Cached 'Torch' attachment node.
NiNode *forearmTwistAttachNode; ///< Cached 'Bip01 L ForearmTwist' node.
NiNode *backOrSideWeaponAttachNode; ///< Cached 'BackWeapon' or 'SideWeapon' node selected from native weapon type.
NiNode *quiverAttachNode; ///< Cached 'Quiver' attachment node.
NiNode *arrowBoneAttachNode; ///< Cached 'ArrowBone' held-projectile attachment node; populated separately from the other equipment caches.
UInt8 unk114;
UInt8 unk115;
UInt8 pad116[2];
bhkCharacterProxy *charProxy;
SInt8 knockedState;
UInt8 sleepState;
UInt8 pad11E;
UInt8 pad11F;
TESObjectREFR *furniture;
UInt8 furnitureMarkerIndex;
Unk128 unk128;
UInt16 unk138;
UInt8 pad13A[2];
UInt32 unk13C;
UInt32 unk140;
MagicItem *queuedMagicItem;
UInt32 unk148;
UInt8 unk14C;
UInt8 pad14D[3];
UInt32 unk150;
float actorAlpha;
float unk158;
NiExtraData *unk15C;
UInt8 unk160;
UInt8 unk161;
UInt8 pad162[2];
UInt32 unk164;
UInt8 unk168;
UInt8 unk169;
UInt8 unk16A;
UInt8 unk16B;
UInt8 unk16C;
UInt8 unk16D;
UInt8 pad16E[2];
UInt32 unk170;
EffectListNode *effectList;
UInt32 unk178;
ActorAnimData *animData;
UInt8 unk180;
UInt8 pad181[3];
NiObject *unk184;
BSBound *boundingBox;
};
