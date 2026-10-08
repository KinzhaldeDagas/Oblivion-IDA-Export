ActiveEffect *__userpurge ScriptEffect::ScriptEffect@<eax>(
        ActiveEffect *this@<ecx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        MagicCaster *a9,
        MagicItem *a10,
        EffectItem *a11)
{
  ActiveEffect_Ctor(this, a9, a10, a11); /*0x6a445a*/
  this->vtbl = (ActiveEffectVtbl *)&ScriptEffect::`vftable'; /*0x6a4469*/
  return (ActiveEffect *)ScriptEffect::ScriptEffect((UInt32 **)a11, (int)this, a2, a3, (int)this);
}
