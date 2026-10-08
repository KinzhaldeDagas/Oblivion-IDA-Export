// [Verified] Pushes a completed BSTECreateTask back onto the shared free-item stack under unk_B3A600 critical section.
void __cdecl BSTECreateTaskPool_Push(BSTECreateTask_Layout_t *task)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B3A600); /*0x56baf5*/
  CurrentThreadId = GetCurrentThreadId(); /*0x56bafb*/
  ++unk_B3A67C; /*0x56bb01*/
  unk_B3A678 = CurrentThreadId; /*0x56bb0c*/
  sub_73A5E0(&dword_B12B9C, (NiD3DPass **)&task); /*0x56bb1f*/
  if ( unk_B3A67C-- == 1 ) /*0x56bb24*/
    unk_B3A678 = 0; /*0x56bb2d*/
  LeaveCriticalSection(&unk_B3A600); /*0x56bb3c*/
}
