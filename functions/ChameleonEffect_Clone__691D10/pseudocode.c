ActiveEffect *__thiscall ChameleonEffect_Clone(ChamaleonEffect *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x691d3c*/
  if ( v2 ) /*0x691d4f*/
  {
    ValueModifierEffect_constr( /*0x691d5f*/
      v2,
      this->members.super.super.caster,
      this->members.super.super.item,
      this->members.super.super.effectItem);
    v2->vtbl = (ActiveEffectVtbl *)&ChameleonEffect::`vftable'; /*0x691d64*/
  }
  else
  {
    v2 = 0; /*0x691d6c*/
  }
  ((void (__thiscall *)(ChamaleonEffect *, ActiveEffect *))this->vtbl[0xB].super)(this, v2); /*0x691d7e*/
  return v2; /*0x691d82*/
}
