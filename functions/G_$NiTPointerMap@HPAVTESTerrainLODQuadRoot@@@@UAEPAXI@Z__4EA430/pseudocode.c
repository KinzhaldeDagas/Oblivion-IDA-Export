unsigned int *__thiscall NiTPointerMap<int,TESTerrainLODQuadRoot *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>(this); /*0x4ea433*/
  if ( (a2 & 1) != 0 ) /*0x4ea43d*/
    FormHeapFree((unsigned int)this); /*0x4ea440*/
  return this; /*0x4ea44a*/
}
