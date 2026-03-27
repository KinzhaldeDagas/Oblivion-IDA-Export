int __userpurge ContainerExtraData_HasItemFromLevItem_::ItemLoop@<eax>(
        char a1@<bl>,
        int **a2@<edi>,
        int a3@<ebp>,
        int a4)
{
  int *v4; // eax

  v4 = *a2;
  if ( !*a2 || a1 )
    return ContainerExtraData_HasItemFromLevItem_::Done(a4);
  if ( *v4 )
    return ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop((int)a2, *v4, a3, a4);
  return ContainerExtraData_HasItemFromLevItem_::ItemLoop_next((int)a2, a4);
}
