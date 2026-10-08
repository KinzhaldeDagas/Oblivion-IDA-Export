// Verified atexit thunk calls the typed NiTPointerMap<unsigned int, BSSimpleList<BASE_DISTANT_DATA*>*>::destructor for g_DistantLODCellModelUsageMap.
void __cdecl DistantLOD_CellModelUsageMap_atexit()
{
  NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::~NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>((unsigned int *)&g_DistantLODCellModelUsageMap); /*0xa1b675*/
}
