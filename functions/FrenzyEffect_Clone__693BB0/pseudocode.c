ActiveEffect *__thiscall FrenzyEffect_Clone(_DWORD *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x40u); /*0x693bdc*/
  if ( v2 ) /*0x693bef*/
  {
    ValueModifierEffect_constr( /*0x693bff*/
      (ActiveEffect *)v2,
      (MagicCaster *)*(this + 9),
      (MagicItem *)*(this + 2),
      (EffectItem *)*(this + 3));
    *(_DWORD *)v2 = &FrenzyEffect::`vftable'; /*0x693c04*/
    *(_BYTE *)(v2 + 0x3C) = 0; /*0x693c0a*/
  }
  else
  {
    v2 = 0; /*0x693c10*/
  }
  *(_BYTE *)(v2 + 0x3C) = *((_BYTE *)this + 0x3C); /*0x693c15*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2); /*0x693c28*/
  return (ActiveEffect *)v2; /*0x693c2c*/
}
