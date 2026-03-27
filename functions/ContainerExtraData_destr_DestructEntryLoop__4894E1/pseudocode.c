int __usercall ContainerExtraData_destr_::DestructEntryLoop@<eax>(int **a1@<ebp>, int a2, int a3, int a4)
{
  int *v4; // ebx
  int *v5; // ebp

  v4 = *a1;
  if ( !*a1 )
    JUMPOUT(0x48955C);
  v5 = a1[1];
  if ( !*v4 )
    JUMPOUT(0x489515);
  return ContainerExtraData_destr_::DestructEntryDataListLoop(v4, (int)v5, *v4, a2, a3, a4);
}
