void __thiscall NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable'; /*0x4bcd98*/
  NiTMap_Clear(this); /*0x4bcda6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'; /*0x4bcdb5*/
  NiTMap_Clear(this); /*0x4bcdbb*/
  FormHeapFree(*(this + 2)); /*0x4bcdc4*/
}
