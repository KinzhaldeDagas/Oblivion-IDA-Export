unsigned int *__thiscall NiTMap<enum MagicSystem::EffectID,EffectSetting *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<enum MagicSystem::EffectID,EffectSetting *>::~NiTMap<enum MagicSystem::EffectID,EffectSetting *>(this); /*0x416a03*/
  if ( (a2 & 1) != 0 ) /*0x416a0d*/
    FormHeapFree((unsigned int)this); /*0x416a10*/
  return this; /*0x416a1a*/
}
