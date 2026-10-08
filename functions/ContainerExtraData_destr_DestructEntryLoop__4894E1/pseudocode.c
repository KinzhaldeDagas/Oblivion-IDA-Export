int __usercall ContainerExtraData_destr_::DestructEntryLoop@<eax>(unsigned int **a1@<ebp>, int a2, int a3, int a4)
{
  unsigned int *v4; // ebx
  int **v5; // ebp

  v4 = *a1; /*0x4894e1*/
  if ( !*a1 ) /*0x4894e6*/
    JUMPOUT(0x48955C); /*0x48955c*/
  v5 = (int **)a1[1]; /*0x4894ec*/
  if ( !*v4 ) /*0x4894ef*/
    JUMPOUT(0x489515); /*0x489515*/
  return ContainerExtraData_destr_::DestructEntryDataListLoop(v4, v5, *v4, a2, a3, a4);
}
