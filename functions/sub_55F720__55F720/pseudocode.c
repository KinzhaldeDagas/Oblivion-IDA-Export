// Verified singleton Destroy: invokes BSTreeManager_dtor, frees the 0x28-byte manager and clears the global instance pointer.
void __cdecl BSTreeManager_Destroy()
{
  BSTreeManager_OblivionVerifiedLayout *v0; // esi

  if ( g_BSTreeManager_Instance ) /*0x55f720*/
  {
    v0 = g_BSTreeManager_Instance; /*0x55f72b*/
    BSTreeManager_dtor(g_BSTreeManager_Instance); /*0x55f72d*/
    FormHeapFree((unsigned int)v0); /*0x55f733*/
    g_BSTreeManager_Instance = 0; /*0x55f73b*/
  }
}
