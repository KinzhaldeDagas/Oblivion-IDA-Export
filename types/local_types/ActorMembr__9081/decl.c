struct ActorMembr
{
MobileObjectMembr super;
MagicCaster magicCaster;
MagicTarget magicTarget;
UInt32 unk070[3];
Actor *unk07C;
UInt32 unk080[2];
AVCollection avModifiers; ///< Verified 2026-10-04: same collection storage type. Actor constructor 0x5E1656 and destructor 0x5F154E pass complete Actor +0x88.
PowerListEntry greaterPowerList;
DispositionModifier *dispositionModifier;
UInt32 unk0A8;
float unk0AC;
UInt32 DeadState;
UInt32 unk0B4[6];
TESObjectREFR *unk0CC;
TESForm *templateForm;
Actor *horseOrRider;
UInt32 unk0D8[3];
Actor *unk0E4;
UInt32 unk0E8[7];
};
