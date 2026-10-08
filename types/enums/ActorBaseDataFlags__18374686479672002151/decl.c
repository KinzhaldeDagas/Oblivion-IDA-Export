enum __bitmask ActorBaseDataFlags : __int32
{
kFlag_IsFemale = 0x1, ///< MASK
kFlag_IsCreatureBiped = 0x1,
kFlag_IsEssential = 0x2,
kFlag_CreatureWeaponAndShield = 0x4,
kFlag_Respawn = 0x8,
kFlag_CreatureSwims = 0x10,
kFlag_CreatureFlies = 0x20,
kFlag_CreatureWalks = 0x40,
kFlag_PCLevelOffset = 0x80,
kFlag_CreatureHasSounds = 0x100,
kFlag_NoLowProc = 0x200,
kFlag_NoRumors = 0x2000,
kFlag_Summonable = 0x4000,
kFlag_NoPersuasion = 0x8000, ///< MASK
kFlag_CreatureNoHead = 0x8000,
kFlag_CreatureNoRightArm = 0x10000,
kFlag_CreatureNoLeftArm = 0x20000,
kFlag_CreatureNoCombatInWater = 0x40000,
kFlag_CanCorpseCheck = 0x100000,
kFlag_CreatureNoBloodSpray = 0x800,
kFlag_CreatureNoBloodDecal = 0x1000,
};
