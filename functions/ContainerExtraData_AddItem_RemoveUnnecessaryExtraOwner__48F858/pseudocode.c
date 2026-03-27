int __usercall ContainerExtraData_AddItem_::RemoveUnnecessaryExtraOwner@<eax>(
        _BYTE *a1@<ebx>,
        int a2@<ebp>,
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
  if ( a1 )
  {
    if ( ExtraDataList_GetOwner((ExtraDataList *)a1) == (BSExtraDataVtbl *)TESDataHandler_g_PlayerRef
      && *(PlayerCharacter **)(a3 + 4) == TESDataHandler_g_PlayerRef )
    {
      ExtraDataList_RemoveOwner(a1);
    }
  }
  return ContainerExtraData_AddItem_::FixupEquippedAmmo(
           a1,
           a2,
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
