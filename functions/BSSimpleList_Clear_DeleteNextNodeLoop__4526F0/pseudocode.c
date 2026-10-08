// Verified generic BSSimpleList_Clear implementation frees each successor node and then clears the head node's data pointer. It does not destroy list data objects; callers remain responsible for element lifetime.
void __usercall BSSimpleList_Clear_::DeleteNextNodeLoop(_DWORD *a1@<esi>)
{
  int v1; // edi

  do /*0x452704*/
  {
    v1 = *(_DWORD *)(a1[1] + 4); /*0x4526f3*/
    FormHeapFree(a1[1]); /*0x4526f7*/
    a1[1] = v1; /*0x452701*/
  }
  while ( v1 ); /*0x452704*/
  BSSimpleList_Clear_::ClearThisNodeData(a1); /*0x452706*/
}
