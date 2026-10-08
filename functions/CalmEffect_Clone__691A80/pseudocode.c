ActiveEffect *__thiscall CalmEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x691aac*/
  if ( v2 ) /*0x691abf*/
  {
    ValueModifierEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x691acf*/
    v2->vtbl = (ActiveEffectVtbl *)&CalmEffect::`vftable'; /*0x691ad4*/
  }
  else
  {
    v2 = 0; /*0x691adc*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x691aee*/
  return v2; /*0x691af2*/
}
