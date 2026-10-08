void __thiscall NiTPointerMap<unsigned int,TESGrassAreaParam * *>::~NiTPointerMap<unsigned int,TESGrassAreaParam * *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESGrassAreaParam * *>::`vftable'; /*0x4c1708*/
  NiTMap_Clear(this); /*0x4c1716*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::`vftable'; /*0x4c1725*/
  NiTMap_Clear(this); /*0x4c172b*/
  FormHeapFree(*(this + 2)); /*0x4c1734*/
}
