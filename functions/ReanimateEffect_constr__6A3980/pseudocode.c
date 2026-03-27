ActiveEffect *__thiscall ReanimateEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  ActiveEffect::ActiveEffect(this, a2, a3, a4);
  *((float *)this + 0x10) = 0.0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((float *)this + 0x11) = 0.0;
  *((float *)this + 0x12) = 0.0;
  this->vtbl = (ActiveEffectVtbl *)&ReanimateEffect::`vftable';
  *((float *)this + 0x13) = 0.0;
  *((_DWORD *)this + 0x14) = dword_B27110;
  *((_DWORD *)this + 0x15) = dword_B27114;
  *((_DWORD *)this + 0x16) = dword_B27118;
  *((_DWORD *)this + 0x17) = dword_B2711C;
  return this;
}
