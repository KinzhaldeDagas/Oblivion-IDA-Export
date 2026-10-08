unsigned int *__thiscall sub_776340(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x776343*/
  NiTMap_Clear(this); /*0x776349*/
  FormHeapFree(*(this + 2)); /*0x776352*/
  if ( (a2 & 1) != 0 ) /*0x77635f*/
    FormHeapFree((unsigned int)this); /*0x776362*/
  return this; /*0x77636c*/
}
