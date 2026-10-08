struct TESCreature
{
TESActorBaseVtbl *__vtable;
TESActorBaseMembr super;
TESAttackDamageForm attackDamage;
TESModelList modelList;
TESCreature::SoundData soundData;
UInt8 type;
UInt8 combatSkill;
UInt8 magicSkill;
UInt8 stealthSkill;
UInt8 soulLevel;
UInt8 unkB;
UInt8 attackReach;
UInt8 unkD;
float turningSpeed;
float footWeight;
float baseScale;
TESCombatStyle *combatStyle;
TESModel bloodSpray; ///< Verified: constructor 0x51EB80, initializer 0x51C7B0, destructor 0x51E9A0 and loader 0x51DD00 establish this component. NAM0; model getter used unless NoBloodSpray; empty path falls back to sBloodParticleDefault.
TESTexture bloodDecal; ///< Verified: constructor 0x51EB80, initializer 0x51C7B0, destructor 0x51E9A0 and loader 0x51DD00 establish this component. NAM1; texture getter used unless NoBloodDecal; empty path falls back to sBloodTextureDefault.
};
