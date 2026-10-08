struct MagicHitEffect
{
BSTempEffect super;
ActiveEffect *ownerActiveEffect;
TESObjectREFR *targetReference;
float elapsedSeconds;
bool bFinished;
UInt8 pad25[3];
};
