// Verified exit cleanup paired with TESPathGrid_InitializeCriticalSection: calls DeleteCriticalSection(&g_PathGridCriticalSection).
void __cdecl TESPathGrid_DeleteCriticalSectionAtExit()
{
  DeleteCriticalSection(&g_PathGridCriticalSection); /*0xa1bcc5*/
}
