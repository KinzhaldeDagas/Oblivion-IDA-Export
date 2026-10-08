ActiveEffect *__thiscall DarknessEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x692afc*/
  if ( v2 ) /*0x692b0f*/
  {
    ValueModifierEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x692b1f*/
    v2->vtbl = (ActiveEffectVtbl *)&DarknessEffect::`vftable'; /*0x692b24*/
  }
  else
  {
    v2 = 0; /*0x692b2c*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x692b3e*/
  return v2; /*0x692b42*/
}
