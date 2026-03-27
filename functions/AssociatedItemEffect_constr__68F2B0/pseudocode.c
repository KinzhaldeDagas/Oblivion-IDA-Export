ActiveEffect *__thiscall AssociatedItemEffect_constr(
        ActiveEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4)
{
  ActiveEffect::ActiveEffect(this, a2, a3, a4);
  this->vtbl = (ActiveEffectVtbl *)&AssociatedItemEffect::`vftable';
  *((_DWORD *)this + 0xE) = TESForm_LookupByFormID(a4->setting->data);
  return this;
}
