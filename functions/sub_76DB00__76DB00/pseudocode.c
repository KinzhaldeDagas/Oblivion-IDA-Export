// Global NiDX9 device-resource registry release pass. Under its critical section, invokes virtual slot 0x2C on every registered resource before Reset.
void __cdecl NiDX9ResourceRegistry_ReleaseAll()
{
  DWORD CurrentThreadId; // eax
  _DWORD *v1; // esi
  int v2; // ecx

  EnterCriticalSection(&unk_B42680); /*0x76db06*/
  CurrentThreadId = GetCurrentThreadId(); /*0x76db0c*/
  v1 = (_DWORD *)dword_B294F4; /*0x76db12*/
  ++unk_B426FC; /*0x76db18*/
  unk_B426F8 = CurrentThreadId; /*0x76db21*/
  while ( v1 ) /*0x76db26*/
  {
    v2 = v1[2]; /*0x76db28*/
    v1 = (_DWORD *)*v1; /*0x76db33*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x2C))(v2); /*0x76db35*/
  }
  if ( unk_B426FC-- == 1 ) /*0x76db3b*/
    unk_B426F8 = 0; /*0x76db45*/
  LeaveCriticalSection(&unk_B42680); /*0x76db54*/
}
