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
        int a11,
        int a12,
        int a13)
{
  ValueModifierEffect_constr(this, a11, a12, a13);
  this->vtbl = (ActiveEffectVtbl *)&AbsorbEffect::`vftable';
  JUMPOUT(0x68CDDD);
}
