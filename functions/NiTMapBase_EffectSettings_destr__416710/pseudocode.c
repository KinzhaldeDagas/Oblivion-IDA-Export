void __thiscall NiTMapBase_EffectSettings_destr(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<EffectSetting *>,enum MagicSystem::EffectID,EffectSetting *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
