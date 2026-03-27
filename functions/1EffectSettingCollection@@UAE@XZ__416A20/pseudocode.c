void __thiscall EffectSettingCollection::~EffectSettingCollection(NiTMap_TESCELL *this)
{
  this->vtbl = &EffectSettingCollection::`vftable';
  EffectSettingCollection_Clear(this);
  NiTMap<enum MagicSystem::EffectID,EffectSetting *>::~NiTMap<enum MagicSystem::EffectID,EffectSetting *>((unsigned int *)this);
}
