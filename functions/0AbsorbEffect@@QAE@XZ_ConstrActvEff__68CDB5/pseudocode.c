void __thiscall AbsorbEffect::AbsorbEffect(
        ActiveEffect *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        MagicCaster *a11,
        MagicItem *a12,
        EffectItem *a13)
{
  ValueModifierEffect_constr(this, a11, a12, a13); /*0x68cdcc*/
  this->vtbl = (ActiveEffectVtbl *)&AbsorbEffect::`vftable'; /*0x68cdd3*/
  JUMPOUT(0x68CDDD); /*0x68cddd*/
}
