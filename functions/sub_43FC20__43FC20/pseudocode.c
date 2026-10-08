// TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
char __thiscall sub_43FC20(TES *this, char a2)
{
  DWORD v2; // edi
  char result; // al
  DWORD CurrentThreadId; // eax

  if ( !MEMORY[0xB33E90][0x1245] || (Cmd_AddAchievement_PC_ReturnTrueNoOp(), result) ) /*0x43fc33*/
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x43fc3b*/
    EnterCriticalSection(&MEMORY[0xB35380]); /*0x43fc48*/
    CurrentThreadId = GetCurrentThreadId(); /*0x43fc4e*/
    ++unk_B353FC; /*0x43fc54*/
    unk_B353F8 = CurrentThreadId; /*0x43fc5d*/
    BSTreeManager_ClearModelCache(1); /*0x43fc62*/
    sub_7B84E0(); /*0x43fc6a*/
    if ( unk_B35300 ) /*0x43fc6f*/
    {
      if ( this->unkA9 || a2 ) /*0x43fc87*/
        sub_4A25F0((_DWORD *)unk_B35300); /*0x43fc89*/
    }
    MemoryHeap_FreeUnusedPagesStart(v2); /*0x43fc8e*/
    BSTreeManager_ClearModelCache(1); /*0x43fc95*/
    if ( unk_B353FC-- == 1 ) /*0x43fc9d*/
      unk_B353F8 = 0; /*0x43fca6*/
    LeaveCriticalSection(&MEMORY[0xB35380]); /*0x43fcb5*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x43fcbd*/
  }
  return result; /*0x43fcc5*/
}
