void __thiscall NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
