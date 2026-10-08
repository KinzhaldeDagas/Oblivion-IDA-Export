// Verified lazy singleton initializer: allocates 0x1C bytes for the lock-free cell-task map and constructs it with two interfaces, 37 buckets, and 0x0C-byte entries; stores the pointer in g_DistantLODLoaderTasksByCell.
void __cdecl DistantLODLoaderTaskMap_EnsureCreated()
{
  LockFreeMap *v0; // eax
  LockFreeMap *v1; // esi

  if ( !g_DistantLODLoaderTasksByCell ) /*0x4bdcf2*/
  {
    v0 = (LockFreeMap *)FormHeapAlloc(0x1Cu); /*0x4bdcfd*/
    v1 = v0; /*0x4bdd02*/
    if ( v0 ) /*0x4bdd15*/
      DistantLODLoaderTaskMap_ctor(v0, 2u, 0x25u, 0xCu); /*0x4bdd1f*/
    else
      v1 = 0; /*0x4bdd26*/
    g_DistantLODLoaderTasksByCell = v1; /*0x4bdd28*/
  }
}
