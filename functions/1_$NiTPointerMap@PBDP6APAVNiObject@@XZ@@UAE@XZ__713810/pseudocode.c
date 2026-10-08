void __thiscall NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::~NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::`vftable'; /*0x713838*/
  NiTMap_Clear(this); /*0x713846*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiObject * (__cdecl *)(void)>::`vftable'; /*0x713855*/
  NiTMap_Clear(this); /*0x71385b*/
  FormHeapFree(*(this + 2)); /*0x713864*/
}
