void __thiscall NiTPointerMap<char const *,NiPointer<NiTexture>>::~NiTPointerMap<char const *,NiPointer<NiTexture>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiPointer<NiTexture>>::`vftable'; /*0x4a2178*/
  NiTMap_Clear(this); /*0x4a2186*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiTexture>>::`vftable'; /*0x4a2195*/
  NiTMap_Clear(this); /*0x4a219b*/
  FormHeapFree(*(this + 2)); /*0x4a21a4*/
}
