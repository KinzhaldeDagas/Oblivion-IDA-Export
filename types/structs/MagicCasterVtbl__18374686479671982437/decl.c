struct __declspec(align(4)) MagicCasterVtbl
{
void (__thiscall *AddAbility)(MagicCaster *this, MagicItemForm *ability, bool noHitFX);
void (__thiscall *AddDisease)(MagicCaster *this, MagicItemForm *disease, MagicTarget *target, bool noHitFX);
void (__thiscall *AddObjectEnchantment)(MagicCaster *this, MagicItem *arg0, TESBoundObject *sourceObj, bool noHitFX);
MagicTarget *(__thiscall *FindTouchTarget)(MagicCaster *this, MagicCaster *this);
void (__thiscall *PlayTargettedCastAnim)(MagicCaster *this, MagicCaster *this);
void (__thiscall *PlayCastingAnim)(MagicCaster *this, MagicCaster *this);
void (__thiscall *ApplyMagicItemCost)(MagicCaster *this, MagicItem *ite, bool applyStatChanges);
bool (__thiscall *IsMagicItemUsable)(MagicCaster *this, MagicItem *magicItem, float *wortcraftSkill, UInt32 *faliureCode, bool useBaseMagicka);
TESObjectREFR *(__thiscall *GetParentRefr)(MagicCaster *this);
NiNode *(__thiscall *GetMagicNode)(MagicCaster *this, MagicCaster *this);
void (__thiscall *AddEffectToSelf)(MagicCaster *this, ActiveEffect *effect);
float (__thiscall *GetSpellEffectiveness)(MagicCaster *this, bool ignoreFatigue, float currentFatigue);
MagicItem *(__thiscall *GetActiveMagicItem)(MagicCaster *this);
void (__thiscall *SetActiveMagicItem)(MagicCaster *this, MagicItem *item);
MagicTarget (__thiscall *GetCastingTarget)(MagicCaster *this, MagicCaster *this);
void (__thiscall *SetCastingTarget)(MagicCaster *this, MagicTarget *target);
ActiveEffect *(__thiscall *CreateActiveMagicEffect)(MagicCaster *this, MagicItem *magicItem, EffectItem *effect, TESBoundObject *src);
};
