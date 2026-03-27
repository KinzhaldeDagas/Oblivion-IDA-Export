int __userpurge ContainerExtraData_GetEntryForForm_::EntryFound@<eax>(int **a1@<eax>, int a2, int a3, int a4, int a5)
{
  int *v5; // ebx

  if ( !a1 )
    return ContainerExtraData_GetEntryForForm_::Return_0(a2, a3, a4);
  v5 = *a1;
  if ( !*a1 || !a5 )
    return ContainerExtraData_GetEntryForForm_::Return_(a2, a3, a4);
  if ( *v5 )
    return ContainerExtraData_GetEntryForForm_::ExtraDataLoop(*v5, a5, a2, a3, a4);
  return ContainerExtraData_GetEntryForForm_::Return_0_(a2, a3, a4);
}
