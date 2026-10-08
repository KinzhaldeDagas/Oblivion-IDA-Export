// Verified task cleanup callback: for states other than 6, applies/frees parsed cell-object payloads, then removes the packed cell key from the owner map at task+0x28. The special state 6 meaning remains Unknown.
void __thiscall DistantLODLoaderTask_RemoveCellUpdate(void *task)
{                                               // Verified state-6 guard on the DistantLOD task cleanup callback: when IOTask_Cancel has already transitioned the task to 6, this hook skips its own payload cleanup/map removal; the cancel path invokes task completion and the destructor remains responsible for any unreleased payload. The canonical enum name for 6 remains Unknown.
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // eax

  if ( *((_DWORD *)task + 3) != 6 ) /*0x4bd1f7*/
  {
    DistantLODLoaderTaskData_CleanupCellObjects(*((_DWORD *)task + 0xB)); /*0x4bd200*/
    v2 = *((_DWORD **)task + 0xB); /*0x4bd205*/
    v3 = *((_DWORD *)task + 0xA); /*0x4bd20d*/
    v4 = TESObjectCELL_PackExteriorGroupLabel(*v2, v2[1]); /*0x4bd212*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, v4); /*0x4bd222*/
  }
}
