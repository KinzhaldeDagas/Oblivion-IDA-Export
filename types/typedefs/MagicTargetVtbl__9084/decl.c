struct MagicTargetVtbl
{
void *AttemptAddEffect;
TESObjectREFR *(__thiscall *GetParentReference)(MagicTarget *this);
EffectNode *(__thiscall *GetActiveEffectList)(MagicTarget *this);
bool (__thiscall *IsActor)(MagicTarget *this);
void (__thiscall *PostAddEffect)(MagicTarget *this, ActiveEffect *activeEffect);
void (__thiscall *PostRemoveEffect)(MagicTarget *this, ActiveEffect *activeEffect);
void (__thiscall *PlayReflectShader)(MagicTarget *this, MagicCaster *caster, ActiveEffect *activeEffect);
void (__thiscall *PlayAbsorbShader)(MagicTarget *this, MagicCaster *caster, ActiveEffect *activeEffect);
float (__thiscall *GetResistanceFactor)(MagicTarget *this, MagicCaster *caster, MagicItem *magicItem, ActiveEffect *activeEffect);
bool (__thiscall *AttemptAbsorb)(MagicTarget *this, MagicCaster *caster, MagicItem *magicItem, ActiveEffect *activeEffect, bool reflected);
bool (__thiscall *AttemptReflect)(MagicTarget *this, MagicCaster *caster, MagicItem *magicItem, ActiveEffect *activeEffect);
};
