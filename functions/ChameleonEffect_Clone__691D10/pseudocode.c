ActiveEffect *__thiscall ChameleonEffect_Clone(ChamaleonEffect *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  if ( v2 )
  {
    ValueModifierEffect_constr(
      v2,
      (int)this->members.super.super.caster,
      (int)this->members.super.super.item,
      (int)this->members.super.super.effectItem);
    v2->vtbl = (ActiveEffectVtbl *)&ChameleonEffect::`vftable';
  }
  else
  {
    v2 = 0;
  }
  ((void (__thiscall *)(ChamaleonEffect *, ActiveEffect *))this->vtbl[0xB].super)(this, v2);
  return v2;
}
