ActiveEffect *__thiscall ShieldEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  ActiveEffect *result; // eax

  ValueModifierEffect_constr(this, a2, a3, a4); /*0x6a4885*/
  this->vtbl = (ActiveEffectVtbl *)&ShieldEffect::`vftable'; /*0x6a488a*/
  result = this; /*0x6a4896*/
  if ( a4->effectCode == 0x444C4853 ) /*0x6a4898*/
  {
    *((_DWORD *)this + 0xF) = 0x48; /*0x6a48ad*/
  }
  else
  {
    *((_DWORD *)this + 0xE) = a4->actorValueOrOther; /*0x6a489e*/
    *((_DWORD *)this + 0xF) = 0x2B; /*0x6a48a1*/
  }
  return result; /*0x6a489d*/
}
