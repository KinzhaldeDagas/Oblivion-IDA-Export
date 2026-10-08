void __thiscall NiTMap<enum MagicSystem::EffectID,EffectSetting *>::~NiTMap<enum MagicSystem::EffectID,EffectSetting *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<enum MagicSystem::EffectID,EffectSetting *>::`vftable'; /*0x4169b8*/
  NiTMap_Clear(this); /*0x4169c6*/
  *this = (unsigned int)&NiTMapBase<DFALL<EffectSetting *>,enum MagicSystem::EffectID,EffectSetting *>::`vftable'; /*0x4169d5*/
  NiTMap_Clear(this); /*0x4169db*/
  FormHeapFree(*(this + 2)); /*0x4169e4*/
}
