// Verified completion callback: on taskStatus zero, releases the task-data scene node and Ni2DBuffer; regardless of status, it removes the packed cell key from the owner map at task+0x28. Exact status-code semantics remain Unknown.
int __thiscall DistantLODLoaderTask_FinalizeCellTask(void *task, int taskStatus)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int *v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // eax

  QueuedTreeModel_ReleaseBuildResources(task, taskStatus);// Verified DistantLOD task completion callback: status 0 releases the task-data scene node and cellLODBuffer; nonzero status leaves these resources for task destruction. In all cases it removes the packed cell key from the owner map. /*0x4bccb9*/
  if ( !(_BYTE)taskStatus ) /*0x4bccc0*/
  {
    v3 = InterlockedDecrement; /*0x4bccc2*/
    v4 = (int *)(*((_DWORD *)task + 0xB) + 0x20); /*0x4bcccc*/
    v5 = *v4; /*0x4bccd0*/
    if ( *v4 ) /*0x4bccd0*/
    {
      if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x4bccda*/
      {
        if ( v5 ) /*0x4bcce2*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4bccec*/
      }
      *v4 = 0; /*0x4bccee*/
    }
    v6 = *((_DWORD *)task + 0xB); /*0x4bccf4*/
    v7 = *(_DWORD *)(v6 + 0x1C); /*0x4bccf7*/
    v8 = (_DWORD *)(v6 + 0x1C); /*0x4bccfa*/
    if ( v7 ) /*0x4bccff*/
    {
      if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x4bcd05*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4bcd17*/
      *v8 = 0; /*0x4bcd19*/
    }
  }
  v9 = *((_DWORD **)task + 0xB); /*0x4bcd21*/
  v10 = *((_DWORD *)task + 0xA); /*0x4bcd29*/
  v11 = TESObjectCELL_PackExteriorGroupLabel(*v9, v9[1]); /*0x4bcd2e*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x10))(v10, v11); /*0x4bcd41*/
}
