// Verified static initializer for g_BSTreeManager_TreeCriticalSection; initializes the lock and registers its atexit destructor.
int __cdecl BSTreeManager_TreeCriticalSection_ctor()
{
  NiInitalizeCriticalSection(&g_BSTreeManager_TreeCriticalSection); /*0x9f94f5*/
  return atexit(BSTreeManager_TreeCriticalSection_atexit); /*0x9f9505*/
}
