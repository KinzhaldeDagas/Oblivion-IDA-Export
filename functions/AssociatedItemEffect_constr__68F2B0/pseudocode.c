ActiveEffect *__thiscall AssociatedItemEffect_constr(
        ActiveEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4)
{
  ActiveEffect_Ctor(this, a2, a3, a4); /*0x68f2ea*/
  this->vtbl = (ActiveEffectVtbl *)&AssociatedItemEffect::`vftable'; /*0x68f2ef*/
  *((_DWORD *)this + 0xE) = TESForm_LookupByFormID(a4->setting->data); /*0x68f309*/
  return this; /*0x68f311*/
}
