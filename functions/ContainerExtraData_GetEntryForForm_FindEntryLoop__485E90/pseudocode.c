int __userpurge ContainerExtraData_GetEntryForForm_::FindEntryLoop@<eax>(
        int **a1@<eax>,
        char a2@<dl>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  if ( !a2 )
    return ContainerExtraData_GetEntryForForm_::EntryFound(a1, a4, a5, a6, a7);
  if ( *a1 )
  {
    if ( (*a1)[2] == a3 )
      JUMPOUT(0x485EA6);
  }
  return ContainerExtraData_GetEntryForForm_::FindEntryLoop_Next((int)a1, a4, a5, a6);
}
