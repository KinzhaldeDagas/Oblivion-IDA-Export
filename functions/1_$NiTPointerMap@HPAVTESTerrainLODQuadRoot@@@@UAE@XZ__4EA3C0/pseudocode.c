void __thiscall NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,TESTerrainLODQuadRoot *>::`vftable'; /*0x4ea3e8*/
  NiTMap_Clear(this); /*0x4ea3f6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESTerrainLODQuadRoot *>::`vftable'; /*0x4ea405*/
  NiTMap_Clear(this); /*0x4ea40b*/
  FormHeapFree(*(this + 2)); /*0x4ea414*/
}
