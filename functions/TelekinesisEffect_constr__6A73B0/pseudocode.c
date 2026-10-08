ActiveEffect *__thiscall TelekinesisEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  ValueModifierEffect_constr(this, a2, a3, a4); /*0x6a73eb*/
  this->vtbl = (ActiveEffectVtbl *)&TelekinesisEffect::`vftable'; /*0x6a73f2*/
  *((_DWORD *)this + 0xF) = 0; /*0x6a73fc*/
  *((_DWORD *)this + 0x12) = 0; /*0x6a742b*/
  *((float *)this + 0x10) = 0.0; /*0x6a742e*/
  *((_BYTE *)this + 0x4C) = 0; /*0x6a7431*/
  *((float *)this + 0x11) = 0.0; /*0x6a7434*/
  *((_BYTE *)this + 0x4D) = 0; /*0x6a7437*/
  return this; /*0x6a743c*/
}
