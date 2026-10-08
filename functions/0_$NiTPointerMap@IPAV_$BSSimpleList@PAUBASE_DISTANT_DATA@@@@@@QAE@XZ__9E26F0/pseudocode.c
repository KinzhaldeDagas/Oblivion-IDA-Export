// Verified static constructor: creates/initializes the 37-bucket per-cell DistantLOD model-usage map and registers its atexit destructor.
int __cdecl DistantLOD_CellModelUsageMap_ctor()
{
  g_DistantLODCellModelUsageMap.buckets = (void *)FormHeapAlloc(0x94u); /*0x9e271c*/
  _memset((int)g_DistantLODCellModelUsageMap.buckets, 0, 4 * g_DistantLODCellModelUsageMap.bucketCount); /*0x9e2721*/
  g_DistantLODCellModelUsageMap.vftable = &NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'; /*0x9e272b*/
  return atexit(DistantLOD_CellModelUsageMap_atexit); /*0x9e273d*/
}
