ActiveEffect *__thiscall CommandEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  ActiveEffect_Ctor(this, a2, a3, a4); /*0x692384*/
  this->vtbl = (ActiveEffectVtbl *)&CommandEffect::`vftable'; /*0x692389*/
  return this; /*0x692391*/
}
