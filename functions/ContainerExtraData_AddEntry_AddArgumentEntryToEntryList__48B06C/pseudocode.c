int __usercall ContainerExtraData_AddEntry_::AddArgumentEntryToEntryList@<eax>(int *a1@<edi>, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-4h]

  BSSimpleList_PushBack((_DWORD *)*a1, v4);
  return ContainerExtraData_AddEntry_::Done_(a2, a3);
}
