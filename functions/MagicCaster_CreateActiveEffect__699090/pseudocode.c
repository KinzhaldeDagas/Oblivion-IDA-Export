// Verified MagicCaster virtual factory adapter (MagicCasterVtbl slot +0x40): forwards caster from ECX plus MagicItem*, EffectItem*, and source TESBoundObject* to ActiveEffect_Base_CreateDynamic; returns the resulting ActiveEffect*.
ActiveEffect *__thiscall MagicCaster_CreateActiveEffect(
        MagicCaster *this,
        MagicItem *magicItem,
        EffectItem *effectItem,
        TESBoundObject *sourceObject)
{
  return ActiveEffect_Base_CreateDynamic(this, magicItem, effectItem, sourceObject); /*0x6990a8*/
}
