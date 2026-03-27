int __userpurge ContainerExtraData_AddItem_::FixupPersistentRefPointer@<eax>(
        ExtraDataList *a1@<ebx>,
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
  BSExtraDataVtbl *ReferencePointer; // eax

  if ( a1 )
  {
    if ( ExtraDataList_GetReferencePointer(a1) )
    {
      ReferencePointer = ExtraDataList_GetReferencePointer(a1);
      if ( ReferencePointer )
        ExtraDataList_SetReferencePointer((ExtraDataList *)&ReferencePointer[8].CompareTo, *(TESObjectREFR **)(a3 + 4));
    }
  }
  return ContainerExtraData_AddItem_::NewEntryExtraData(a2, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}
