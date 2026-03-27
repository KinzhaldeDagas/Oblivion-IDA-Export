ActiveEffect *__thiscall CommandEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  ActiveEffect::ActiveEffect(this, a2, a3, a4);
  this->vtbl = (ActiveEffectVtbl *)&CommandEffect::`vftable';
  return this;
}
