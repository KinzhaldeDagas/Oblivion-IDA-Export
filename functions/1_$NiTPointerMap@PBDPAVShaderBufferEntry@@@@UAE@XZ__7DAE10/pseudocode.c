void __thiscall NiTPointerMap<char const *,ShaderBufferEntry *>::~NiTPointerMap<char const *,ShaderBufferEntry *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,ShaderBufferEntry *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,ShaderBufferEntry *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
