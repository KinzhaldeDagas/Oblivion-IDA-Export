void __thiscall NiTPointerMap<NiObject const *,unsigned int>::~NiTPointerMap<NiObject const *,unsigned int>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<NiObject const *,unsigned int>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject const *,unsigned int>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
