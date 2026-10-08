struct ActiveEffectMembr
{
float timeElapsed;
MagicItem *item;
EffectItem *effectItem;
bool bApplied;
bool bTerminated;
bool bRemoved;
UInt8 pad13;
UInt32 aeFlags;
float magnitude;
float duration;
MagicTarget *target;
MagicCaster *caster;
UInt32 spellType;
UInt32 unk2C;
TESBoundObject *boundObjectOrParentForm;
HitEffectNode *hitEffectList;
};
