// Verified atexit thunk deletes g_BSTreeManager_TreeCriticalSection.
void __cdecl BSTreeManager_TreeCriticalSection_atexit()
{
  NiDeleteCriticalSection(&g_BSTreeManager_TreeCriticalSection); /*0xa23555*/
}
