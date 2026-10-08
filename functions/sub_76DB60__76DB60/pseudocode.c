// Global NiDX9 device-resource registry reconstruction pass. Under its critical section, invokes virtual slot 0x30 on every registered resource with the reset IDirect3DDevice9.
void __cdecl NiDX9ResourceRegistry_RecreateAll(IDirect3DDevice9 *device)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v2; // esi
  int v3; // ecx

  EnterCriticalSection(&unk_B42680); /*0x76db66*/
  CurrentThreadId = GetCurrentThreadId(); /*0x76db6c*/
  v2 = (_DWORD *)dword_B294F4; /*0x76db72*/
  ++unk_B426FC; /*0x76db78*/
  unk_B426F8 = CurrentThreadId; /*0x76db81*/
  while ( v2 ) /*0x76db86*/
  {
    v3 = v2[2]; /*0x76db90*/
    v2 = (_DWORD *)*v2; /*0x76db9b*/
    (*(void (__thiscall **)(int, IDirect3DDevice9 *))(*(_DWORD *)v3 + 0x30))(v3, device); /*0x76db9e*/
  }
  if ( unk_B426FC-- == 1 ) /*0x76dba5*/
    unk_B426F8 = 0; /*0x76dbaf*/
  LeaveCriticalSection(&unk_B42680); /*0x76dbbe*/
}
