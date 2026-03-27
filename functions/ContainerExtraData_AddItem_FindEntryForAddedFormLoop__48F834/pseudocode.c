int __usercall ContainerExtraData_AddItem_::FindEntryForAddedFormLoop@<eax>(
        int *a1@<eax>,
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
  if ( !a4 )
    return ContainerExtraData_AddItem_::ProcessFoundEntryExtraDataNode(
             a1,
             a2,
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
  if ( *a1 )
  {
    if ( *(_DWORD *)(*a1 + 8) == a14 )
      JUMPOUT(0x48F852);
  }
  return ContainerExtraData_AddItem_::FindEntryForAddedForm_Next(
           (int)a1,
           a2,
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
