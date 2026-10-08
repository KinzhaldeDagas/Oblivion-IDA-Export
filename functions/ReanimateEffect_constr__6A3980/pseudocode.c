ActiveEffect *__thiscall ReanimateEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  ActiveEffect_Ctor(this, a2, a3, a4); /*0x6a3997*/
  *((float *)this + 0x10) = 0.0; /*0x6a399e*/
  *((_DWORD *)this + 0xE) = 0; /*0x6a39a3*/
  *((_DWORD *)this + 0xF) = 0; /*0x6a39aa*/
  *((float *)this + 0x11) = 0.0; /*0x6a39c1*/
  *((float *)this + 0x12) = 0.0; /*0x6a39c4*/
  this->vtbl = (ActiveEffectVtbl *)&ReanimateEffect::`vftable'; /*0x6a39c7*/
  *((float *)this + 0x13) = 0.0; /*0x6a39cd*/
  *((_DWORD *)this + 0x14) = dword_B27110; /*0x6a39d5*/
  *((_DWORD *)this + 0x15) = dword_B27114; /*0x6a39de*/
  *((_DWORD *)this + 0x16) = dword_B27118; /*0x6a39e7*/
  *((_DWORD *)this + 0x17) = dword_B2711C; /*0x6a39ef*/
  return this; /*0x6a39f4*/
}
