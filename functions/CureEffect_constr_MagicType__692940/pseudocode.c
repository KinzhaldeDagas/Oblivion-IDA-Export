ActiveEffect *__thiscall CureEffect_constr_MagicType(
        ActiveEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4,
        int a5)
{
  ActiveEffect_Ctor(this, a2, a3, a4); /*0x692954*/
  *((_DWORD *)this + 0xE) = a5; /*0x69295d*/
  this->vtbl = (ActiveEffectVtbl *)&CureEffect::`vftable'; /*0x692960*/
  *((_DWORD *)this + 0xF) = 0xFFFFFFFF; /*0x692966*/
  return this; /*0x69296f*/
}
