int __usercall ContainerExtraData_AddItem_::FindEntryForAddedForm_Next@<eax>(
        int a1@<eax>,
        _BYTE *a2@<ebx>,
        int a3@<edi>,
        char a4@<dl>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int *v16; // eax

  v16 = *(int **)(a1 + 4);
  if ( v16 )
    return ContainerExtraData_AddItem_::FindEntryForAddedFormLoop(
             v16,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  else
    return ContainerExtraData_AddItem_::RemoveUnnecessaryExtraOwner(
             a2,
             0,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
}
