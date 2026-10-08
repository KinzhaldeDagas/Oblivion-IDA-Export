ActiveEffect *__thiscall CureEffect_constr_MgefCode(
        ActiveEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4,
        int a5)
{
  ActiveEffect_Ctor(this, a2, a3, a4); /*0x692994*/
  *((_DWORD *)this + 0xF) = a5; /*0x69299d*/
  this->vtbl = (ActiveEffectVtbl *)&CureEffect::`vftable'; /*0x6929a0*/
  *((_DWORD *)this + 0xE) = 0; /*0x6929a6*/
  return this; /*0x6929af*/
}
