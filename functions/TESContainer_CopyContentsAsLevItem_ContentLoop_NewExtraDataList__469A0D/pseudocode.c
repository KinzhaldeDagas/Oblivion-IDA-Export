int __userpurge TESContainer_CopyContentsAsLevItem_::ContentLoop_NewExtraDataList@<eax>(
        TESForm ***a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        BSExtraDataVtbl *a11,
        ExtraContainerChanges_Data *a12)
{
  TESForm **v12; // edi
  _DWORD *v13; // eax
  ExtraDataList *v14; // esi

  v12 = *a1; /*0x469a0d*/
  if ( *a1 ) /*0x469a0d*/
  {
    HIBYTE(a5) = 1; /*0x469a16*/
    v13 = (_DWORD *)FormHeapAlloc(0x14u); /*0x469a1b*/
    a6 = (int)v13; /*0x469a23*/
    if ( v13 ) /*0x469a31*/
      v14 = (ExtraDataList *)ExtraDataList_constr(v13); /*0x469a3a*/
    else
      v14 = 0; /*0x469a3e*/
    a9 = 0xFFFFFFFF; /*0x469a47*/
    ExtraDataList_AddExtraLeveledItem(v14, a11); /*0x469a4f*/
    ExtraDataList_SetExtraCount(v14, *(unsigned __int16 *)v12); /*0x469a5a*/
    ContainerExtraData_AddItem(a12, v12[1], v14, (int)*v12); /*0x469a6b*/
  }
  return TESContainer_CopyContentsAsLevItem_::ContentLoop_Next(
           (int)a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           (int)a11,
           (int)a12);
}
