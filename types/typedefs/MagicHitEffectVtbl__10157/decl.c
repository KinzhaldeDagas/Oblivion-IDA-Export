struct MagicHitEffectVtbl
{
BSTempEffectVtbl super;
bool (__thiscall *initializeVisual)(MagicHitEffect *this);
void (__thiscall *detach)(MagicHitEffect *this);
void (__thiscall *updateVisualPlacement)(MagicHitEffect *this);
unsigned __int16 (__thiscall *getExtraSaveSize)(MagicHitEffect *this, ActiveEffect *ownerActiveEffect, TESObjectREFR *targetReference);
void (__thiscall *saveExtraData)(MagicHitEffect *this, ActiveEffect *ownerActiveEffect, TESObjectREFR *targetReference);
unsigned __int16 (__thiscall *loadExtraData)(MagicHitEffect *this, ActiveEffect *ownerActiveEffect, TESObjectREFR *targetReference);
void (__thiscall *setParentCellFromTarget)(MagicHitEffect *this, TESObjectREFR *linkContext, TESChildCELL *targetReference);
bool (__thiscall *postLink)(MagicHitEffect *this, ActiveEffect *ownerActiveEffect, TESObjectREFR *linkContext, void *fallbackData);
};
