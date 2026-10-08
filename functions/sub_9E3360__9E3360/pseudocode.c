// Verified PathGrid startup initializer: calls InitializeCriticalSection(&g_PathGridCriticalSection) and registers TESPathGrid_DeleteCriticalSectionAtExit with atexit.
int TESPathGrid_InitializeCriticalSection()
{
  InitializeCriticalSection(&g_PathGridCriticalSection); /*0x9e3365*/
  return atexit(TESPathGrid_DeleteCriticalSectionAtExit); /*0x9e3376*/
}
