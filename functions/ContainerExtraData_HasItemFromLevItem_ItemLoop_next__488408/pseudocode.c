int __userpurge ContainerExtraData_HasItemFromLevItem_::ItemLoop_next@<eax>(
        int a1@<edi>,
        char a2@<bl>,
        int a3@<ebp>,
        int a4)
{
  int **v4; // edi

  v4 = *(int ***)(a1 + 4);
  if ( v4 )
    return ContainerExtraData_HasItemFromLevItem_::ItemLoop(a2, v4, a3, a4);
  else
    return ContainerExtraData_HasItemFromLevItem_::Done(a4);
}
