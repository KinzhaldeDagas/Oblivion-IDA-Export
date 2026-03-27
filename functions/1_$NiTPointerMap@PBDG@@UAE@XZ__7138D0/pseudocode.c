void __thiscall NiTPointerMap<char const *,unsigned short>::~NiTPointerMap<char const *,unsigned short>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,unsigned short>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,unsigned short>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
