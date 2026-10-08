unsigned int *__thiscall NiTMapBase_EffectSettings_VDdestr(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<EffectSetting *>,enum MagicSystem::EffectID,EffectSetting *>::`vftable'; /*0x416733*/
  NiTMap_Clear(this); /*0x416739*/
  FormHeapFree(*(this + 2)); /*0x416742*/
  if ( (a2 & 1) != 0 ) /*0x41674f*/
    FormHeapFree((unsigned int)this); /*0x416752*/
  return this; /*0x41675c*/
}
