NiTPointerMap<char const *,NiPSysModifier *> *__thiscall NiTPointerMap<char const *,NiPSysModifier *>::NiTPointerMap<char const *,NiPSysModifier *>(
        NiTPointerMap<char const *,NiPSysModifier *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiPSysModifier *>::`vftable';
  NiTMap_Clear(this);
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
