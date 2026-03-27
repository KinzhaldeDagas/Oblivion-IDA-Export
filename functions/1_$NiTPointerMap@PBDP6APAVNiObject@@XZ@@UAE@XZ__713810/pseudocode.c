void __thiscall NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::~NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiObject * (__cdecl *)(void)>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
