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
  ActiveEffect::ActiveEffect(this, a9, a10, a11);
  this->vtbl = (ActiveEffectVtbl *)&ScriptEffect::`vftable';
  return (ActiveEffect *)ScriptEffect::ScriptEffect(a2, a3, this);
}
