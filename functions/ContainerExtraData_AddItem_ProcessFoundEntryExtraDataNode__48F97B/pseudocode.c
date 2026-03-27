int __usercall ContainerExtraData_AddItem_::ProcessFoundEntryExtraDataNode@<eax>(
        int *a1@<eax>,
        _BYTE *a2@<ebx>,
        int a3@<edi>,
        int a4,
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
        int a15)
{
  if ( !a1 )
    JUMPOUT(0x48F856);
  return ContainerExtraData_AddItem_::RemoveUnnecessaryExtraOwner(
           a2,
           *a1,
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
           a15);
}
