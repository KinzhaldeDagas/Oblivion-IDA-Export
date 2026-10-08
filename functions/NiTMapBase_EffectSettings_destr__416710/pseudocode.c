void __thiscall NiTMapBase_EffectSettings_destr(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<EffectSetting *>,enum MagicSystem::EffectID,EffectSetting *>::`vftable'; /*0x416713*/
  NiTMap_Clear(this); /*0x416719*/
  FormHeapFree(*(this + 2)); /*0x416722*/
}
