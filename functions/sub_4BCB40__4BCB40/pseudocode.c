// Verified DistantLOD loader task debug-description virtual formats the task's saved cell coordinates as 'DistantLODLoaderTask for cell ( %i, %i )'.
bool __thiscall DistantLODLoaderTask_GetDebugDescription(void *task, char *destination)
{
  _sprintf( /*0x4bcb54*/
    destination,
    "DistantLODLoaderTask for cell ( %i, %i )",
    **((_DWORD **)task + 0xB),
    *(_DWORD *)(*((_DWORD *)task + 0xB) + 4));
  return 1; /*0x4bcb5e*/
}
