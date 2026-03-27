void __thiscall NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,TESTerrainLODQuadRoot *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESTerrainLODQuadRoot *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
