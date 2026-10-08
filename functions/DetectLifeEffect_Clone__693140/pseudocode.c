ActiveEffect *__thiscall DetectLifeEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x69316c*/
  if ( v2 ) /*0x69317f*/
  {
    ValueModifierEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x69318f*/
    v2->vtbl = (ActiveEffectVtbl *)&DetectLifeEffect::`vftable'; /*0x693194*/
  }
  else
  {
    v2 = 0; /*0x69319c*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x6931ae*/
  return v2; /*0x6931b2*/
}
