unsigned int *__thiscall sub_776C00(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x776c03*/
  NiTMap_Clear(this); /*0x776c09*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x776c10*/
  NiTMap_Clear(this); /*0x776c16*/
  FormHeapFree(*(this + 2)); /*0x776c1f*/
  if ( (a2 & 1) != 0 ) /*0x776c2c*/
    FormHeapFree((unsigned int)this); /*0x776c2f*/
  return this; /*0x776c39*/
}
