ActiveEffect *__thiscall NightEyeEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x6a2dcc*/
  if ( v2 ) /*0x6a2ddf*/
  {
    ValueModifierEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6a2def*/
    v2->vtbl = (ActiveEffectVtbl *)&NightEyeEffect::`vftable'; /*0x6a2df4*/
  }
  else
  {
    v2 = 0; /*0x6a2dfc*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x6a2e0e*/
  return v2; /*0x6a2e12*/
}
