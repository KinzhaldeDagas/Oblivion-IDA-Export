void __thiscall NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::~NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::`vftable'; /*0x4a2328*/
  NiTMap_Clear(this); /*0x4a2336*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable'; /*0x4a2345*/
  NiTMap_Clear(this); /*0x4a234b*/
  FormHeapFree(*(this + 2)); /*0x4a2354*/
}
