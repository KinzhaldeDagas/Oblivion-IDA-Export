void __thiscall NiTMap<enum MagicSystem::EffectID,EffectSetting *>::~NiTMap<enum MagicSystem::EffectID,EffectSetting *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<enum MagicSystem::EffectID,EffectSetting *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<EffectSetting *>,enum MagicSystem::EffectID,EffectSetting *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
