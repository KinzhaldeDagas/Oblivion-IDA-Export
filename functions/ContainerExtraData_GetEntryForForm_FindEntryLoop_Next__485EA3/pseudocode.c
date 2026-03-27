int __userpurge ContainerExtraData_GetEntryForForm_::FindEntryLoop_Next@<eax>(
        int a1@<eax>,
        char a2@<dl>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int **v7; // eax

  v7 = *(int ***)(a1 + 4);
  if ( v7 )
    return ContainerExtraData_GetEntryForForm_::FindEntryLoop(v7, a2, a3, a4, a5, a6, a7);
  else
    return ContainerExtraData_GetEntryForForm_::Return_0(a4, a5, a6);
}
