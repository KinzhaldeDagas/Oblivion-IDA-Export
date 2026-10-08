// Verified singleton teardown: destroys and frees g_DistantLODLoaderTasksByCell, then clears the global pointer.
void __cdecl DistantLODLoaderTaskMap_Destroy()
{
  LockFreeMap *v0; // esi

  if ( g_DistantLODLoaderTasksByCell ) /*0x4bdd40*/
  {
    v0 = g_DistantLODLoaderTasksByCell; /*0x4bdd4b*/
    DistantLODLoaderTaskMap_dtor(g_DistantLODLoaderTasksByCell); /*0x4bdd4d*/
    FormHeapFree((unsigned int)v0); /*0x4bdd53*/
    g_DistantLODLoaderTasksByCell = 0; /*0x4bdd5b*/
  }
}
