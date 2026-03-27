unsigned int *__thiscall NiTPointerMap<int,TESTerrainLODQuadRoot *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
