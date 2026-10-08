void __thiscall NiTPointerMap<char const *,unsigned short>::~NiTPointerMap<char const *,unsigned short>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,unsigned short>::`vftable'; /*0x7138f8*/
  NiTMap_Clear(this); /*0x713906*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,unsigned short>::`vftable'; /*0x713915*/
  NiTMap_Clear(this); /*0x71391b*/
  FormHeapFree(*(this + 2)); /*0x713924*/
}
