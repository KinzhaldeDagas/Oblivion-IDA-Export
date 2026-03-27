unsigned int *__thiscall NiTMap<enum MagicSystem::EffectID,EffectSetting *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<enum MagicSystem::EffectID,EffectSetting *>::~NiTMap<enum MagicSystem::EffectID,EffectSetting *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
