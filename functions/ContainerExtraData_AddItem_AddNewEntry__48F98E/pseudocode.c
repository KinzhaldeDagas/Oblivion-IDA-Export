// positive sp value has been detected, the output may be wrong!
int __userpurge ContainerExtraData_AddItem_::AddNewEntry@<eax>(
        int a1@<ebx>,
        float *a2@<edi>,
        int *a3@<esi>,
        int a4,
        int a5,
        int a6)
{
  int v7; // [esp-18h] [ebp-1Ch]
  int v8; // [esp-14h] [ebp-18h]
  int v9; // [esp-10h] [ebp-14h]
  int v10; // [esp-Ch] [ebp-10h]
  int v11; // [esp-8h] [ebp-Ch]

  BSSimpleList_PushFront((_DWORD *)*a3, a1);
  return ContainerExtraData_AddEntry(a2, a3, 1, v7, v8, v9, v10, v11);
}
