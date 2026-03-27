SummonCreatureEffect *__thiscall SummonCreatureEffect::SummonCreatureEffect(
        SummonCreatureEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4)
{
  float v5; // edx

  AssociatedItemEffect_constr((ActiveEffect *)this, a2, a3, a4);
  *((float *)this + 0x11) = 0.0;
  *(_DWORD *)this = &SummonCreatureEffect::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_BYTE *)this + 0x40) = 0;
  *((float *)this + 0x12) = Vector3_InitValue_;
  *((float *)this + 0x13) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x14) = dword_B3F9B0;
  *((float *)this + 0x15) = Vector3_InitValue_;
  *((float *)this + 0x16) = *(&Vector3_InitValue_ + 1);
  v5 = dword_B3F9B0;
  *((_BYTE *)this + 0x60) = 0;
  *((_BYTE *)this + 0x61) = 0;
  *((float *)this + 0x17) = v5;
  return this;
}
