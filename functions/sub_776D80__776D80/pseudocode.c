// MoonSugarEffect decode: vertex-buffer-manager unlock/staging helper. Copies the staging buffer back to the locked D3D buffer, clears lock bookkeeping, leaves the critical section, then calls the vertex buffer Unlock vtable slot.
bool __thiscall sub_776D80(int this, int a2)
{
  memcpy(*(void **)(this + 0x48), *(const void **)(this + 0x40), *(_DWORD *)(this + 0x4C)); /*0x776d8f*/
  *(_DWORD *)(this + 0x48) = 0; /*0x776d9f*/
  *(_DWORD *)(this + 0x4C) = 0; /*0x776da2*/
  if ( (*(_DWORD *)(this + 0xFC))-- == 1 ) /*0x776da5*/
    *(_DWORD *)(this + 0xF8) = 0; /*0x776dac*/
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x80)); /*0x776db0*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 0x30))(a2) >= 0; /*0x776dcb*/
}
