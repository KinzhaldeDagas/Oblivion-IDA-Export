ActiveEffect *__thiscall CureEffect_constr_MgefCode(
        ActiveEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4,
        int a5)
{
  ActiveEffect::ActiveEffect(this, a2, a3, a4);
  *((_DWORD *)this + 0xF) = a5;
  this->vtbl = (ActiveEffectVtbl *)&CureEffect::`vftable';
  *((_DWORD *)this + 0xE) = 0;
  return this;
}
