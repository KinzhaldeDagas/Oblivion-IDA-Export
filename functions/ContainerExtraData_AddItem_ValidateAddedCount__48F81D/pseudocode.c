void __usercall ContainerExtraData_AddItem_::ValidateAddedCount(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  if ( !*a1 )
    JUMPOUT(0x48F856);
  ContainerExtraData_AddItem_::FindEntryForAddedFormLoop(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
