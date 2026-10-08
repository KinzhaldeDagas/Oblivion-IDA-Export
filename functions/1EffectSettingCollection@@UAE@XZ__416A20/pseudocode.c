void __thiscall EffectSettingCollection::~EffectSettingCollection(NiTMap_TESCELL *this)
{
  this->vtbl = &EffectSettingCollection::`vftable'; /*0x416a48*/
  EffectSettingCollection_Clear(this); /*0x416a56*/
  NiTMap<enum MagicSystem::EffectID,EffectSetting *>::~NiTMap<enum MagicSystem::EffectID,EffectSetting *>((unsigned int *)this); /*0x416a65*/
}
