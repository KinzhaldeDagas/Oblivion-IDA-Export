NiTPointerMap<char const *,NiPointer<NiShaderLibrary>> *__thiscall NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>(
        NiTPointerMap<char const *,NiPointer<NiShaderLibrary>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::`vftable';
  NiTMap_Clear(this);
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiShaderLibrary>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
