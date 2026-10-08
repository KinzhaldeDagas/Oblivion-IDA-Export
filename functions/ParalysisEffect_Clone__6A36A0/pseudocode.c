ActiveEffect *__thiscall ParalysisEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x6a36cc*/
  if ( v2 ) /*0x6a36df*/
  {
    ValueModifierEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6a36ef*/
    v2->vtbl = (ActiveEffectVtbl *)&ParalysisEffect::`vftable'; /*0x6a36f4*/
  }
  else
  {
    v2 = 0; /*0x6a36fc*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x6a370e*/
  return v2; /*0x6a3712*/
}
