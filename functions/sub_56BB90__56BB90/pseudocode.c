// [Verified] Pops one BSTECreateTask pointer from the protected free-item stack. Its only direct caller is BSTempEffectGeometryDecal_StartOrQueueCreateTask.
BSTECreateTask_Layout_t *__cdecl BSTECreateTaskPool_Pop()
{
  DWORD CurrentThreadId; // eax
  bool v1; // zf
  _DWORD *v2; // eax
  int v3; // ecx
  BSTECreateTask_Layout_t *v4; // esi

  EnterCriticalSection(&unk_B3A600); /*0x56bb95*/
  CurrentThreadId = GetCurrentThreadId(); /*0x56bb9b*/
  ++unk_B3A67C; /*0x56bba1*/
  v1 = dword_B12BA4 == 0; /*0x56bba8*/
  unk_B3A678 = CurrentThreadId; /*0x56bbaf*/
  if ( v1 ) /*0x56bbb4*/
  {
    BSTECreateTaskPool_AddBlock(&dword_B12B9C, dword_B12BA8); /*0x56bbc1*/
    dword_B12BA8 *= 2; /*0x56bbcf*/
  }
  v2 = (_DWORD *)dword_B12B9C; /*0x56bbdb*/
  v3 = dword_B12BA4 - 1; /*0x56bbe0*/
  v4 = *(BSTECreateTask_Layout_t **)dword_B12B9C; /*0x56bbe4*/
  dword_B12BA4 = v3; /*0x56bbe6*/
  *v2 = v2[v3]; /*0x56bbef*/
  v1 = unk_B3A67C-- == 1; /*0x56bbf1*/
  if ( v1 ) /*0x56bbf8*/
    unk_B3A678 = 0; /*0x56bbfa*/
  LeaveCriticalSection(&unk_B3A600); /*0x56bc09*/
  return v4; /*0x56bc12*/
}
