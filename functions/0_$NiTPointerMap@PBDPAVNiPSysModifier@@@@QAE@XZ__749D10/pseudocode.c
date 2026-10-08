NiTPointerMap<char const *,NiPSysModifier *> *__thiscall NiTPointerMap<char const *,NiPSysModifier *>::NiTPointerMap<char const *,NiPSysModifier *>(
        NiTPointerMap<char const *,NiPSysModifier *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiPSysModifier *>::`vftable'; /*0x749d13*/
  NiTMap_Clear(this); /*0x749d19*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable'; /*0x749d20*/
  NiTMap_Clear(this); /*0x749d26*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x749d2f*/
  if ( (a2 & 1) != 0 ) /*0x749d3c*/
    FormHeapFree((unsigned int)this); /*0x749d3f*/
  return this; /*0x749d49*/
}
