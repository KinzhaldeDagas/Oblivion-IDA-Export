void __thiscall NiTPointerMap<char const *,ShaderBufferEntry *>::~NiTPointerMap<char const *,ShaderBufferEntry *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,ShaderBufferEntry *>::`vftable'; /*0x7dae38*/
  NiTMap_Clear(this); /*0x7dae46*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,ShaderBufferEntry *>::`vftable'; /*0x7dae55*/
  NiTMap_Clear(this); /*0x7dae5b*/
  FormHeapFree(*(this + 2)); /*0x7dae64*/
}
