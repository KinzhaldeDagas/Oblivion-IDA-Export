int __userpurge ExtraDataList_CompareListForContainer_::ExtraDataLoop_Next@<eax>(
        int a1@<esi>,
        ExtraDataList *a2@<edi>,
        int a3,
        int a4,
        int a5)
{
  BSExtraData *v5; // esi

  v5 = *(BSExtraData **)(a1 + 8);
  if ( v5 )
    return ExtraDataList_CompareListForContainer_::ExtraDataLoop(v5, a2, a3, a4, a5);
  else
    return ExtraDataList_CompareListForContainer_::Return_0(a3);
}
