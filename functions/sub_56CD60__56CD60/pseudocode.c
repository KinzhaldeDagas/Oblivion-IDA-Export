// [Verified] The byte bAsyncGeometryDecalCreateGate_0B3A690 selects queued versus synchronous creation: nonzero attempts to pop/submit a BSTECreateTask; zero or failed submission dispatches BSTECreateTask_ReturnToPool if needed, then calls BSTempEffectGeometryDecal::Initialize synchronously. Initialization/writers of the gate remain Unknown.
int __thiscall BSTempEffectGeometryDecal_StartOrQueueCreateTask(BSTempEffectGeometryDecalLayout_t *this)
{
  NiNode *v2; // eax
  NiNode *v3; // esi
  int result; // eax

  if ( bAsyncGeometryDecalCreateGate_0B3A690 ) /*0x56cd60*/
  {
    v2 = (NiNode *)BSTECreateTaskPool_Pop(); /*0x56cd6d*/
    v3 = v2; /*0x56cd72*/
    if ( v2 ) /*0x56cd76*/
    {
      sub_478300(v2, (NiTimeController *)this); /*0x56cd7b*/
      result = (*(int (__thiscall **)(int, NiNode *, int))(*(_DWORD *)g_NiParallelUpdateTaskManager + 0x4C))( /*0x56cd8e*/
                 g_NiParallelUpdateTaskManager,
                 v3,
                 1);                            // [Verified] g_NiParallelUpdateTaskManager virtual +0x4C receives BSTECreateTask with mode 1. Successful return leaves the task queued; failure takes the task vtable +0x54 BSTECreateTask_ReturnToPool path before synchronous Initialize.
      if ( (_BYTE)result ) /*0x56cd92*/
        return result; /*0x56cd92*/
      ((void (__thiscall *)(NiNode *))v3->vtbl->super.ApplyTransform)(v3); /*0x56cd9b*/
    }
  }
  return ((int (__thiscall *)(BSTempEffectGeometryDecalLayout_t *))this->base.vtable->Initialize)(this); /*0x56cda5*/
}
