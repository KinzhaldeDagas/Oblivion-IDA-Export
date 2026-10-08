SummonCreatureEffect *__thiscall SummonCreatureEffect::SummonCreatureEffect(
        SummonCreatureEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4)
{
  float z; // edx

  AssociatedItemEffect_constr((ActiveEffect *)this, a2, a3, a4); /*0x6a51e4*/
  *((float *)this + 0x11) = 0.0; /*0x6a51eb*/
  *(_DWORD *)this = &SummonCreatureEffect::`vftable'; /*0x6a51ee*/
  *((_DWORD *)this + 0xF) = 0; /*0x6a51f6*/
  *((_BYTE *)this + 0x40) = 0; /*0x6a51f9*/
  *((_DWORD *)this + 0x12) = LODWORD(g_zeroNiPoint3.x); /*0x6a5202*/
  *((_DWORD *)this + 0x13) = LODWORD(g_zeroNiPoint3.y); /*0x6a520b*/
  *((_DWORD *)this + 0x14) = LODWORD(g_zeroNiPoint3.z); /*0x6a5214*/
  *((_DWORD *)this + 0x15) = LODWORD(g_zeroNiPoint3.x); /*0x6a521d*/
  *((_DWORD *)this + 0x16) = LODWORD(g_zeroNiPoint3.y); /*0x6a5226*/
  z = g_zeroNiPoint3.z; /*0x6a5229*/
  *((_BYTE *)this + 0x60) = 0; /*0x6a522f*/
  *((_BYTE *)this + 0x61) = 0; /*0x6a5232*/
  *((float *)this + 0x17) = z; /*0x6a5235*/
  return this; /*0x6a523a*/
}
