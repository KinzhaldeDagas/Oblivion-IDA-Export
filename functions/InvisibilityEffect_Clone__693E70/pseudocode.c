ActiveEffect *__thiscall InvisibilityEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x693e9c*/
  if ( v2 ) /*0x693eaf*/
  {
    ValueModifierEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x693ebf*/
    v2->vtbl = (ActiveEffectVtbl *)&InvisibilityEffect::`vftable'; /*0x693ec4*/
  }
  else
  {
    v2 = 0; /*0x693ecc*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x693ede*/
  return v2; /*0x693ee2*/
}
