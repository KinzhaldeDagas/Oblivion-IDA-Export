// Verified queued tree-task cleanup removes a pending reference->BSTreeNode entry after releasing task resources; this prevents a cancelled/completed task result from remaining available for handoff.
int __thiscall QueuedTreeModel_RemovePendingReferenceNode(QueuedTreeModel *this, int destructorFlags)
{
  BSTreeManager_Oblivion *v3; // esi
  void (__thiscall **v5)(_DWORD, int); // [esp+10h] [ebp-4h] BYREF
  int destructorFlagsa; // [esp+18h] [ebp+4h]

  QueuedTreeModel_ReleaseBuildResources(this, destructorFlags);// Verified cleanup hook releases queued tree build resources, then under the tree critical section checks/removes the pendingReferenceNodes entry keyed by QueuedTreeModel.reference (+0x38). Fallout QueuedTreeModel::Cancel similarly removes the map entry when cancellation follows a finished task; retain that state condition as a documented cross-version difference until Oblivion task-state dispatch is mapped. /*0x4398d8*/
  destructorFlagsa = *((_DWORD *)this + 0xE); /*0x4398e1*/
  v3 = g_BSTreeManager_Instance;                // IDA tail chunk for 0x4398D0: enters stru_B39E80, tests singleton map +0x24 for key this+0x38, removes through vtable +0x10 if present. /*0x55dfa3*/
  v5 = 0; /*0x55dfaf*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_BSTreeManager_TreeCriticalSection, (int)&unk_A2F830); /*0x55dfb7*/
  if ( (*((unsigned __int8 (__thiscall **)(LockFreeMap *, int))v3->pendingReferenceNodes->vtbl + 1))( /*0x55dfce*/
         v3->pendingReferenceNodes,
         destructorFlagsa) )
  {
    (*((void (__thiscall **)(LockFreeMap *, int))v3->pendingReferenceNodes->vtbl + 4))( /*0x55dfdd*/
      v3->pendingReferenceNodes,
      destructorFlagsa);                        // Verified cleanup removes the pending reference key and releases the removed node returned by the map operation. This is paired with the worker's insert at 0x55DF85 and one-time consume/removal in CreateTreeForReference at 0x55F8C9/0x55F8D8.
    if ( &v5 ) /*0x55dfe5*/
      (*v5)(&v5, 1); /*0x55dfed*/
  }
  return NiLeaveCriticalSection_0(&g_BSTreeManager_TreeCriticalSection); /*0x55dffc*/
}
