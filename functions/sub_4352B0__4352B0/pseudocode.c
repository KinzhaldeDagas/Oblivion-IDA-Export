// Async queued-KF completion bridge. If the queued task produced a KFModel at +0x28 and task state +0x0C is not cancelled state 6, forwards the model and AnimIdle context at +0x34 to AnimIdle_OnKFLoadComplete, then unregisters the queued task from the model loader.
int __thiscall QueuedIdleKFLoad_AsyncCompletionBridge(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 0x28); /*0x4352b3*/
  if ( v2 ) /*0x4352b8*/
  {
    if ( *(_DWORD *)(this + 0xC) != 6 ) /*0x4352be*/
      AnimIdle_OnKFLoadComplete(*(int **)(this + 0x34), v2); /*0x4352c4*/
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 3) + 0x10))( /*0x4352dc*/
           *((_DWORD *)MEMORY[0xB33A1C] + 3),
           *(_DWORD *)(this + 0x34));
}
