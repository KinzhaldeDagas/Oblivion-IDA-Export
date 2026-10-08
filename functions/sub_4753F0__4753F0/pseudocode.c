// Install-only path for the queued AnimIdle at ActorAnimData +0xD0. Requires phase 1 and a successful ActorAnimData_InstallKFModel, then cleans/frees the AnimIdle and clears +0xD0 without calling ActorAnimData_PlayEncodedGroup.
char __thiscall ActorAnimData_InstallQueuedIdleOnly(AnimSequenceSingle *this)
{
  _DWORD *v2; // eax
  unsigned int v3; // edi

  v2 = *((_DWORD **)this + 0x34); /*0x4753f3*/
  if ( !v2 || *v2 != 1 || !ActorAnimData_InstallKFModel(this, v2[2], 0) ) /*0x475408*/
    return 0; /*0x47543b*/
  v3 = *((_DWORD *)this + 0x34); /*0x475412*/
  if ( v3 ) /*0x47541a*/
  {
    AnimIdle_CleanupLoadedResources(*((char **)this + 0x34)); /*0x47541e*/
    FormHeapFree(v3); /*0x475424*/
  }
  *((_DWORD *)this + 0x34) = 0; /*0x47542d*/
  return 1; /*0x475439*/
}
