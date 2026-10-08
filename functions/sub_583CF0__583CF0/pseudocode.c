// Verified: finds timer by opaque owner/index pointer, unlinks and frees only the timer node. Used by NewTimer and fade cancellation.
void __cdecl InterfaceManager::ClearTimer(void *index)
{
  unsigned int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0x10); /*0x583cfb*/
  if ( v1 ) /*0x583d00*/
  {
    while ( *(void **)v1 != index ) /*0x583d08*/
    {
      v1 = *(_DWORD *)(v1 + 0x10); /*0x583d0a*/
      if ( !v1 ) /*0x583d0f*/
        return; /*0x583d0f*/
    }
    v2 = *(_DWORD *)(v1 + 0x10); /*0x583d12*/
    *(_DWORD *)(*(_DWORD *)(v1 + 0xC) + 0x10) = v2; /*0x583d1a*/
    if ( v2 ) /*0x583d1d*/
      *(_DWORD *)(v2 + 0xC) = *(_DWORD *)(v1 + 0xC); /*0x583d22*/
    if ( !*(_DWORD *)(v1 + 0x10) ) /*0x583d25*/
      *(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0xC) = *(_DWORD *)(v1 + 0xC); /*0x583d3a*/
    FormHeapFree(v1); /*0x583d41*/
  }
}
