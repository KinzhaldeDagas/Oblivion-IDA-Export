ActiveEffect *__thiscall ShieldEffect_Clone(EffectItem **this)
{
  int v2; // esi
  EffectItem *v3; // edi

  v2 = FormHeapAlloc(0x40u); /*0x6a48ed*/
  if ( v2 ) /*0x6a4900*/
  {
    v3 = *(this + 3); /*0x6a4902*/
    ValueModifierEffect_constr((ActiveEffect *)v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), v3); /*0x6a4910*/
    *(_DWORD *)v2 = &ShieldEffect::`vftable'; /*0x6a4915*/
    if ( v3->effectCode == 0x444C4853 ) /*0x6a4921*/
    {
      *(_DWORD *)(v2 + 0x3C) = 0x48; /*0x6a4932*/
    }
    else
    {
      *(_DWORD *)(v2 + 0x38) = v3->actorValueOrOther; /*0x6a4926*/
      *(_DWORD *)(v2 + 0x3C) = 0x2B; /*0x6a4929*/
    }
  }
  else
  {
    v2 = 0; /*0x6a493b*/
  }
  ((void (__thiscall *)(EffectItem **, int))(*this)[1].area)(this, v2); /*0x6a494d*/
  return (ActiveEffect *)v2; /*0x6a4951*/
}
